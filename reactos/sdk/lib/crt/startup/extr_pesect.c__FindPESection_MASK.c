
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ e_lfanew; } ;
struct TYPE_10__ {unsigned int NumberOfSections; } ;
struct TYPE_12__ {TYPE_2__ FileHeader; } ;
struct TYPE_9__ {scalar_t__ VirtualSize; } ;
struct TYPE_11__ {scalar_t__ VirtualAddress; TYPE_1__ Misc; } ;
typedef TYPE_3__* PIMAGE_SECTION_HEADER ;
typedef TYPE_4__* PIMAGE_NT_HEADERS ;
typedef TYPE_5__* PIMAGE_DOS_HEADER ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ DWORD_PTR ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;

PIMAGE_SECTION_HEADER
FUNC_1 (PBYTE VAR_0, DWORD_PTR VAR_1)
{
  PIMAGE_NT_HEADERS VAR_2;
  PIMAGE_SECTION_HEADER VAR_3;
  unsigned int VAR_4;

  VAR_2 = (PIMAGE_NT_HEADERS) (VAR_0 + ((PIMAGE_DOS_HEADER) VAR_0)->e_lfanew);

  for (VAR_4 = 0, VAR_3 = FUNC_0 (VAR_2);
    VAR_4 < VAR_2->FileHeader.NumberOfSections;
    ++VAR_4,++VAR_3)
    {
      if (VAR_1 >= VAR_3->VirtualAddress
   && VAR_1 < VAR_3->VirtualAddress + VAR_3->Misc.VirtualSize)
 return VAR_3;
    }
  return ((void*)0);
}
