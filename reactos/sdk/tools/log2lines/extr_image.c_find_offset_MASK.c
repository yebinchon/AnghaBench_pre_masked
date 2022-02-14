
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t Address; } ;
struct TYPE_4__ {int SymbolsOffset; int SymbolsLength; } ;
typedef int ROSSYM_ENTRY ;
typedef TYPE_1__* PSYMBOLFILE_HEADER ;
typedef TYPE_2__* PROSSYM_ENTRY ;



PROSSYM_ENTRY
FUNC_0(void *VAR_0, size_t VAR_1)
{
    PSYMBOLFILE_HEADER VAR_2 = (PSYMBOLFILE_HEADER)VAR_0;
    PROSSYM_ENTRY VAR_3 = (PROSSYM_ENTRY)((char *)VAR_0 + VAR_2->SymbolsOffset);
    size_t VAR_4 = VAR_2->SymbolsLength / sizeof(ROSSYM_ENTRY);
    size_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        if (VAR_3[VAR_5].Address > VAR_1)
        {
            if (!VAR_5--)
                return ((void*)0);
            else
                return &VAR_3[VAR_5];
        }
    }
    return ((void*)0);
}
