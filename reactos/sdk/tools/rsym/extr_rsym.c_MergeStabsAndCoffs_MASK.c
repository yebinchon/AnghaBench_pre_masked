
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_7__ {scalar_t__ Address; scalar_t__ FileOffset; scalar_t__ FunctionOffset; scalar_t__ SourceLine; } ;
typedef int ROSSYM_ENTRY ;
typedef TYPE_1__* PROSSYM_ENTRY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int,int (*) (void const*,void const*)) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(ULONG *VAR_2, PROSSYM_ENTRY *VAR_3,
                   ULONG VAR_4, PROSSYM_ENTRY VAR_5,
                   ULONG VAR_6, PROSSYM_ENTRY VAR_7)
{
    ULONG VAR_8, VAR_9;
    ULONG VAR_10;
    ULONG_PTR VAR_11;
    ULONG VAR_12, VAR_13, VAR_14;
    PROSSYM_ENTRY VAR_15;

    *VAR_2 = 0;
    if (VAR_4 == 0)
    {
        *VAR_3 = ((void*)0);
        return 0;
    }
    *VAR_3 = FUNC_1((VAR_4 + VAR_6) * sizeof(ROSSYM_ENTRY));
    if (*VAR_3 == ((void*)0))
    {
        FUNC_0(VAR_1, "Unable to allocate memory for merged symbols\n");
        return 1;
    }

    VAR_11 = 0;
    VAR_12 = 0;
    VAR_14 = 0;
    VAR_15 = ((void*)0);
    VAR_10 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
        (*VAR_3)[*VAR_2] = VAR_5[VAR_8];
        for (VAR_9 = VAR_8 + 1;
             VAR_9 < VAR_4 && VAR_5[VAR_9].Address == VAR_5[VAR_8].Address;
             VAR_9++)
        {
            if (VAR_5[VAR_9].FileOffset != 0 && (*VAR_3)[*VAR_2].FileOffset == 0)
            {
                (*VAR_3)[*VAR_2].FileOffset = VAR_5[VAR_9].FileOffset;
            }
            if (VAR_5[VAR_9].FunctionOffset != 0 && (*VAR_3)[*VAR_2].FunctionOffset == 0)
            {
                (*VAR_3)[*VAR_2].FunctionOffset = VAR_5[VAR_9].FunctionOffset;
            }
            if (VAR_5[VAR_9].SourceLine != 0 && (*VAR_3)[*VAR_2].SourceLine == 0)
            {
                (*VAR_3)[*VAR_2].SourceLine = VAR_5[VAR_9].SourceLine;
            }
        }
        VAR_8 = VAR_9 - 1;

        while (VAR_10 < VAR_6 &&
               VAR_7[VAR_10].Address <= (*VAR_3)[*VAR_2].Address)
        {
            if (VAR_7[VAR_10].FunctionOffset != 0)
            {
                VAR_15 = &VAR_7[VAR_10];
                VAR_14 = VAR_15->FunctionOffset;
            }
            VAR_10++;
        }
        VAR_13 = (*VAR_3)[*VAR_2].FunctionOffset;
        if (VAR_15 &&
            VAR_15->Address <= (*VAR_3)[*VAR_2].Address &&
            VAR_11 < VAR_15->Address)
        {
            (*VAR_3)[*VAR_2].FunctionOffset = VAR_14;
            VAR_15->FunctionOffset = 0;
        }
        if (VAR_12 != VAR_13)
        {
            VAR_11 = (*VAR_3)[*VAR_2].Address;
        }
        VAR_12 = VAR_13;
        (*VAR_2)++;
    }

    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    {
        if (VAR_7[VAR_10].Address &&
            VAR_7[VAR_10].FunctionOffset)
        {
            (*VAR_3)[*VAR_2] = VAR_7[VAR_10];
            (*VAR_2)++;
        }
    }

    FUNC_2(*VAR_3, *VAR_2, sizeof(ROSSYM_ENTRY), (int (*)(const void *, const void *)) VAR_0);

    return 0;
}
