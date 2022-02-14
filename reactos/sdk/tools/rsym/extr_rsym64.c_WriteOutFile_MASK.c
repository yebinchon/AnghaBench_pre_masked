
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef size_t ULONG ;
struct TYPE_21__ {void* p; TYPE_8__* psh; } ;
struct TYPE_15__ {int VirtualSize; } ;
struct TYPE_20__ {int VirtualAddress; int SizeOfRawData; TYPE_3__ Misc; } ;
struct TYPE_19__ {void* p; TYPE_6__* psh; } ;
struct TYPE_14__ {int VirtualSize; } ;
struct TYPE_18__ {int SizeOfRawData; TYPE_2__ Misc; } ;
struct TYPE_17__ {int SizeOfRawData; int PointerToRawData; } ;
struct TYPE_16__ {size_t FileAlignment; int SizeOfImage; scalar_t__ CheckSum; } ;
struct TYPE_13__ {scalar_t__ NumberOfSections; } ;
struct TYPE_12__ {void* FilePtr; int HeaderSize; size_t AllSections; void* DosHeader; int NewSectionHeaderSize; void* NewSectionHeaders; void* AlignBuf; TYPE_9__ xdata; TYPE_7__ pdata; TYPE_5__* SectionHeaders; scalar_t__* UseSection; TYPE_4__* OptionalHeader; scalar_t__ UsedSections; TYPE_1__* FileHeader; } ;
typedef TYPE_10__* PFILE_INFO ;
typedef int FILE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (scalar_t__,void*,int) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (void*,int,int,int *) ;

void
FUNC_3(FILE *VAR_0, PFILE_INFO VAR_1)
{
    int VAR_2, VAR_3, VAR_4 = 0;
    DWORD VAR_5;
    ULONG VAR_6, VAR_7;

    VAR_7 = VAR_1->OptionalHeader->FileAlignment;


    VAR_1->FileHeader->NumberOfSections = VAR_1->UsedSections + 2;


    VAR_3 = VAR_1->xdata.psh->VirtualAddress
           + VAR_1->xdata.psh->SizeOfRawData;
    VAR_1->OptionalHeader->SizeOfImage = VAR_3;


    VAR_5 = FUNC_0(0, VAR_1->FilePtr, VAR_1->HeaderSize);
    for (VAR_6 = 0; VAR_6 < VAR_1->AllSections; VAR_6++)
    {
        if (VAR_1->UseSection[VAR_6])
        {
            VAR_3 = VAR_1->SectionHeaders[VAR_6].SizeOfRawData;
            if (VAR_3)
            {
                void *VAR_8;
                VAR_8 = VAR_1->FilePtr + VAR_1->SectionHeaders[VAR_6].PointerToRawData;
                VAR_5 = FUNC_0(VAR_5, VAR_8, VAR_3);
            }
        }
    }
    VAR_3 = VAR_1->pdata.psh->Misc.VirtualSize;
    VAR_5 = FUNC_0(VAR_5, VAR_1->pdata.p, VAR_3);
    VAR_3 = VAR_1->xdata.psh->Misc.VirtualSize;
    VAR_5 = FUNC_0(VAR_5, VAR_1->xdata.p, VAR_3);
    VAR_5 += VAR_1->HeaderSize;
    VAR_5 += VAR_1->pdata.psh->Misc.VirtualSize;
    VAR_5 += VAR_1->xdata.psh->Misc.VirtualSize;
    VAR_1->OptionalHeader->CheckSum = VAR_5;


    VAR_3 = VAR_1->HeaderSize;
    VAR_2 = FUNC_2(VAR_1->DosHeader, 1, VAR_3, VAR_0);
    VAR_4 = VAR_3;


    VAR_3 = VAR_1->NewSectionHeaderSize;
    VAR_2 = FUNC_2(VAR_1->NewSectionHeaders, 1, VAR_3, VAR_0);
    VAR_4 += VAR_3;


    VAR_3 = FUNC_1(VAR_4, VAR_7) - VAR_4;
    VAR_2 = FUNC_2(VAR_1->AlignBuf, 1, VAR_3, VAR_0);
    VAR_4 += VAR_3;


    for (VAR_6 = 0; VAR_6 < VAR_1->AllSections; VAR_6++)
    {
        if (VAR_1->UseSection[VAR_6])
        {
            void *VAR_9;
            VAR_3 = VAR_1->SectionHeaders[VAR_6].SizeOfRawData;
            if (VAR_3)
            {
                VAR_9 = VAR_1->FilePtr + VAR_1->SectionHeaders[VAR_6].PointerToRawData;
                VAR_2 = FUNC_2(VAR_9, 1, VAR_3, VAR_0);
                VAR_4 += VAR_3;
            }
        }
    }


    VAR_3 = VAR_1->pdata.psh->SizeOfRawData;
    VAR_2 = FUNC_2(VAR_1->pdata.p, 1, VAR_3, VAR_0);
    VAR_4 += VAR_3;


    VAR_3 = VAR_1->xdata.psh->SizeOfRawData;
    VAR_2 = FUNC_2(VAR_1->xdata.p, 1, VAR_3, VAR_0);
    VAR_4 += VAR_3;

}
