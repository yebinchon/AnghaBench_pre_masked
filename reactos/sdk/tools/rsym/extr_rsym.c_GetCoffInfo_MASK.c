
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ PointerToSymbolTable; int NumberOfSymbols; } ;
typedef int PIMAGE_SECTION_HEADER ;
typedef TYPE_1__* PIMAGE_FILE_HEADER ;
typedef int COFF_SYMENT ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, PIMAGE_FILE_HEADER VAR_1,
            PIMAGE_SECTION_HEADER VAR_2,
            ULONG *VAR_3, void **VAR_4,
            ULONG *VAR_5, void **VAR_6)
{

    if (VAR_1->PointerToSymbolTable == 0 || VAR_1->NumberOfSymbols == 0)
    {

        *VAR_3 = 0;
        *VAR_5 = 0;
    }
    else
    {
        *VAR_3 = VAR_1->NumberOfSymbols * sizeof(COFF_SYMENT);
        *VAR_4 = (void *)((char *) VAR_0 + VAR_1->PointerToSymbolTable);
        *VAR_5 = *((ULONG *) ((char *) *VAR_4 + *VAR_3));
        *VAR_6 = (void *)((char *) *VAR_4 + *VAR_3);
    }

    return 0;
}
