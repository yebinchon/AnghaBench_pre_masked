
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_8__ {int PointerToRawData; int PointerToRelocations; unsigned int NumberOfRelocations; unsigned int VirtualAddress; unsigned int SizeOfRawData; } ;
struct TYPE_7__ {unsigned int VirtualAddress; int Type; size_t SymbolTableIndex; } ;
struct TYPE_6__ {int Value; } ;
typedef TYPE_1__* PIMAGE_SYMBOL ;
typedef TYPE_2__* PIMAGE_RELOCATION ;
typedef TYPE_3__ IMAGE_SECTION_HEADER ;
typedef int DWORD ;




 int FUNC_0 (char*,int,unsigned int) ;

__attribute__((used)) static
void
FUNC_1(
    char *VAR_0,
    IMAGE_SECTION_HEADER *VAR_1,
    PIMAGE_SYMBOL VAR_2,
    unsigned int VAR_3)
{
    unsigned int VAR_4, VAR_5;
    PIMAGE_RELOCATION VAR_6;
    char *VAR_7;
    WORD *VAR_8;
    DWORD *VAR_9;

    VAR_7 = VAR_0 + VAR_1->PointerToRawData;


    VAR_6 = (PIMAGE_RELOCATION)(VAR_0 + VAR_1->PointerToRelocations);


    for (VAR_4 = 0; VAR_4 < VAR_1->NumberOfRelocations; VAR_4++)
    {
        VAR_5 = VAR_6->VirtualAddress - VAR_1->VirtualAddress;

        if (VAR_5 > VAR_1->SizeOfRawData) continue;

        switch (VAR_6->Type)
        {
            case 129:
            case 16:
                VAR_8 = (void*)(VAR_7 + VAR_5);
                *VAR_8 += (WORD)(VAR_2[VAR_6->SymbolTableIndex].Value + VAR_3);
                break;

            case 128:
                VAR_9 = (void*)(VAR_7 + VAR_5);
                *VAR_9 += (DWORD)(VAR_2[VAR_6->SymbolTableIndex].Value + VAR_3);
                break;

            default:
                FUNC_0("Unknown relocation type %u, address 0x%x\n",
                       VAR_6->Type, (unsigned)VAR_6->VirtualAddress);
        }

        VAR_6++;
    }
}
