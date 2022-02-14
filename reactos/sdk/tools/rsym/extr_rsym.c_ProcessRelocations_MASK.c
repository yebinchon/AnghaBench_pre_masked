
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_15__ {scalar_t__ SizeOfBlock; scalar_t__ VirtualAddress; } ;
struct TYPE_14__ {size_t NumberOfRvaAndSizes; TYPE_1__* DataDirectory; } ;
struct TYPE_13__ {int PointerToRawData; int VirtualAddress; scalar_t__ SizeOfRawData; } ;
struct TYPE_12__ {scalar_t__ VirtualAddress; int Size; } ;
typedef TYPE_2__* PIMAGE_SECTION_HEADER ;
typedef TYPE_3__* PIMAGE_OPTIONAL_HEADER ;
typedef TYPE_4__* PIMAGE_BASE_RELOCATION ;


 TYPE_2__* FUNC_0 (scalar_t__,unsigned int,TYPE_2__*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_4__*,scalar_t__) ;
 int FUNC_4 (char*,TYPE_4__*,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(ULONG *VAR_2, void **VAR_3,
                   void *VAR_4, PIMAGE_OPTIONAL_HEADER VAR_5,
                   unsigned VAR_6, PIMAGE_SECTION_HEADER VAR_7)
{
    PIMAGE_SECTION_HEADER VAR_8, VAR_9;
    PIMAGE_BASE_RELOCATION VAR_10, VAR_11, VAR_12;
    int VAR_13;

    if (VAR_5->NumberOfRvaAndSizes < VAR_0 ||
        VAR_5->DataDirectory[VAR_0].VirtualAddress == 0)
    {

        *VAR_2 = 0;
        *VAR_3 = ((void*)0);
        return 0;
    }

    VAR_8 = FUNC_0(VAR_5->DataDirectory[VAR_0].VirtualAddress,
                                           VAR_6, VAR_7);
    if (VAR_8 == ((void*)0))
    {
        FUNC_1(VAR_1, "Can't find section header for relocation data\n");
        return 1;
    }

    *VAR_3 = FUNC_2(VAR_8->SizeOfRawData);
    if (*VAR_3 == ((void*)0))
    {
        FUNC_1(VAR_1,
                "Failed to allocate %u bytes for relocations\n",
                (unsigned int)VAR_8->SizeOfRawData);
        return 1;
    }
    *VAR_2 = 0;

    VAR_10 = (PIMAGE_BASE_RELOCATION) ((char *) VAR_4 +
                                          VAR_8->PointerToRawData +
                                          (VAR_5->DataDirectory[VAR_0].VirtualAddress -
                                           VAR_8->VirtualAddress));
    VAR_11 = (PIMAGE_BASE_RELOCATION) ((char *) VAR_10 +
                                    VAR_5->DataDirectory[VAR_0].Size);

    while (VAR_10 < VAR_11 && VAR_10->SizeOfBlock > 0)
    {
        VAR_9 = FUNC_0(VAR_10->VirtualAddress,
                                                VAR_6,
                                                VAR_7);
        if (VAR_9 != ((void*)0))
        {
            VAR_12 = *VAR_3;
            VAR_13 = 0;
            while (VAR_12 < (PIMAGE_BASE_RELOCATION) ((char *) *VAR_3 +
                                                              *VAR_2)
                   && !VAR_13)
            {
                VAR_13 = VAR_10->SizeOfBlock == VAR_12->SizeOfBlock &&
                                                  FUNC_3(VAR_10, VAR_12, VAR_12->SizeOfBlock) == 0;
                VAR_12 = (PIMAGE_BASE_RELOCATION) ((char *) VAR_12 +
                                                           VAR_12->SizeOfBlock);
            }
            if (!VAR_13)
            {
                FUNC_4((char *) *VAR_3 + *VAR_2,
                       VAR_10,
                       VAR_10->SizeOfBlock);
                *VAR_2 += VAR_10->SizeOfBlock;
            }
        }
        VAR_10 = (PIMAGE_BASE_RELOCATION)((char *) VAR_10 + VAR_10->SizeOfBlock);
    }

    return 0;
}
