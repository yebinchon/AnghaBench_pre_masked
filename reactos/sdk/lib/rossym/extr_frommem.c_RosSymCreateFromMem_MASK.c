
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_14__ {int e_lfanew; } ;
struct TYPE_10__ {int NumberOfSections; } ;
struct TYPE_13__ {TYPE_1__ FileHeader; } ;
struct TYPE_11__ {int VirtualSize; } ;
struct TYPE_12__ {int PointerToRawData; int SizeOfRawData; int VirtualAddress; TYPE_2__ Misc; int Name; } ;
typedef int ROSSYM_HEADER ;
typedef scalar_t__ PVOID ;
typedef int PROSSYM_INFO ;
typedef TYPE_3__* PIMAGE_SECTION_HEADER ;
typedef TYPE_4__* PIMAGE_NT_HEADERS ;
typedef TYPE_5__* PIMAGE_DOS_HEADER ;
typedef int IMAGE_NT_HEADERS ;
typedef int IMAGE_DOS_HEADER ;
typedef int CHAR ;
typedef int BOOLEAN ;


 int DPRINT (char*,int ) ;
 int DPRINT1 (char*) ;
 int FALSE ;
 TYPE_3__* IMAGE_FIRST_SECTION (TYPE_4__*) ;
 int IMAGE_SIZEOF_SHORT_NAME ;
 int ROSSYM_IS_VALID_DOS_HEADER (TYPE_5__*) ;
 int ROSSYM_IS_VALID_NT_HEADERS (TYPE_4__*) ;
 int ROSSYM_SECTION_NAME ;
 int RosSymCreateFromRaw (char*,int,int *) ;
 int TRUE ;
 scalar_t__ memcmp (int *,int ,int) ;
 int strncpy (int *,int ,int) ;

BOOLEAN
RosSymCreateFromMem(PVOID ImageStart, ULONG_PTR ImageSize, PROSSYM_INFO *RosSymInfo)
{
  PIMAGE_DOS_HEADER DosHeader;
  PIMAGE_NT_HEADERS NtHeaders;
  PIMAGE_SECTION_HEADER SectionHeader;
  ULONG SectionIndex;
  BOOLEAN RosSymSectionFound = FALSE;
  CHAR SectionName[IMAGE_SIZEOF_SHORT_NAME];


  DosHeader = (PIMAGE_DOS_HEADER) ImageStart;
  if (ImageSize < sizeof(IMAGE_DOS_HEADER)
      || ! ROSSYM_IS_VALID_DOS_HEADER(DosHeader))
    {
      DPRINT1("Image doesn't have a valid DOS header\n");
      return FALSE;
    }


  NtHeaders = (PIMAGE_NT_HEADERS)((char *) ImageStart + DosHeader->e_lfanew);
  if (ImageSize < DosHeader->e_lfanew + sizeof(IMAGE_NT_HEADERS)
      || ! ROSSYM_IS_VALID_NT_HEADERS(NtHeaders))
    {
      DPRINT1("Image doesn't have a valid PE header\n");
      return FALSE;
    }


  SectionHeader = IMAGE_FIRST_SECTION(NtHeaders);
  if (ImageSize < (ULONG_PTR)((char *) (SectionHeader + NtHeaders->FileHeader.NumberOfSections)
                              - (char *) ImageStart))
    {
      DPRINT1("Image doesn't have valid section headers\n");
      return FALSE;
    }
  strncpy(SectionName, ROSSYM_SECTION_NAME, IMAGE_SIZEOF_SHORT_NAME);
  for (SectionIndex = 0; SectionIndex < NtHeaders->FileHeader.NumberOfSections; SectionIndex++)
    {
      if (0 == memcmp(SectionName, SectionHeader->Name, IMAGE_SIZEOF_SHORT_NAME))
        {
          RosSymSectionFound = TRUE;
          break;
        }
      SectionHeader++;
    }

  if (!RosSymSectionFound)
    {
      DPRINT("No %s section found\n", ROSSYM_SECTION_NAME);
      return FALSE;
    }


  if (ImageSize < SectionHeader->PointerToRawData + SectionHeader->SizeOfRawData
      || SectionHeader->SizeOfRawData < sizeof(ROSSYM_HEADER))
    {
      DPRINT("Invalid %s section\n", ROSSYM_SECTION_NAME);
      return FALSE;
    }

  if (SectionHeader->VirtualAddress + SectionHeader->Misc.VirtualSize > ImageSize)
  {
      DPRINT("Bad %s section virtual size!\n", ROSSYM_SECTION_NAME);
      return FALSE;
  }


  return RosSymCreateFromRaw((char *) ImageStart + SectionHeader->VirtualAddress,
                             SectionHeader->SizeOfRawData, RosSymInfo);
}
