
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nr1; int valid; scalar_t__ nr2; int file2; int func2; int file1; int func1; } ;
struct TYPE_8__ {int majordiff; int diff; } ;
struct TYPE_7__ {size_t FileOffset; size_t FunctionOffset; scalar_t__ SourceLine; } ;
struct TYPE_6__ {int StringsOffset; } ;
typedef TYPE_1__* PSYMBOLFILE_HEADER ;
typedef TYPE_2__* PROSSYM_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (void*,size_t) ;
 TYPE_4__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,int,char*,char*,...) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static int
FUNC_6(void *VAR_7, size_t VAR_8, char *VAR_9)
{
    PSYMBOLFILE_HEADER VAR_10 = (PSYMBOLFILE_HEADER)VAR_7;
    PROSSYM_ENTRY VAR_11 = ((void*)0);
    PROSSYM_ENTRY VAR_12 = ((void*)0);
    int VAR_13 = 0;
    char VAR_14[VAR_0];
    char *VAR_15 = (char *)VAR_7 + VAR_10->StringsOffset;

    VAR_14[0] = '\0';
    VAR_11 = FUNC_0(VAR_7, VAR_8);
    if (VAR_4)
    {
        VAR_12 = FUNC_0(VAR_7, VAR_8 - 1);

        if (VAR_11 == VAR_12)
            VAR_12 = ((void*)0);
        else
            VAR_6.diff++;

        if (VAR_3 && VAR_12)
        {
            VAR_11 = VAR_12;
            VAR_12 = ((void*)0);

        }
    }
    if (VAR_11 || VAR_12)
    {
        FUNC_5(VAR_2.file1, &VAR_15[VAR_11->FileOffset]);
        FUNC_5(VAR_2.func1, &VAR_15[VAR_11->FunctionOffset]);
        VAR_2.nr1 = VAR_11->SourceLine;
        FUNC_3(&VAR_5, VAR_2.file1, VAR_1);
        VAR_2.valid = 1;
        if (VAR_12)
        {
            FUNC_5(VAR_2.file2, &VAR_15[VAR_12->FileOffset]);
            FUNC_5(VAR_2.func2, &VAR_15[VAR_12->FunctionOffset]);
            VAR_2.nr2 = VAR_12->SourceLine;
            FUNC_3(&VAR_5, VAR_2.file2, VAR_1);
            VAR_13 = VAR_11->FileOffset != VAR_12->FileOffset;
            if (VAR_11->FileOffset != VAR_12->FileOffset || VAR_11->FunctionOffset != VAR_12->FunctionOffset)
                VAR_6.majordiff++;






            FUNC_4(VAR_14, "%s");
            if (VAR_13)
                FUNC_4(VAR_14, "[%s]");
            else
                FUNC_4(VAR_14, "%.0s");

            FUNC_4(VAR_14, ":%u");
            if (VAR_11->SourceLine != VAR_12->SourceLine || VAR_13)
                FUNC_4(VAR_14, "[%u]");
            else
                FUNC_4(VAR_14, "%.0u");

            FUNC_4(VAR_14, " (%s");
            if (VAR_11->FunctionOffset != VAR_12->FunctionOffset || VAR_13)
                FUNC_4(VAR_14, "[%s])");
            else
                FUNC_4(VAR_14, "%.0s)");

            if (VAR_9)
            {
                FUNC_2(VAR_9, VAR_0, VAR_14,
                    &VAR_15[VAR_11->FileOffset],
                    &VAR_15[VAR_12->FileOffset],
                    (unsigned int)VAR_11->SourceLine,
                    (unsigned int)VAR_12->SourceLine,
                    &VAR_15[VAR_11->FunctionOffset],
                    &VAR_15[VAR_12->FunctionOffset]);
            }
            else
            {
                FUNC_4(VAR_14, "\n");
                FUNC_1(VAR_14,
                    &VAR_15[VAR_11->FileOffset],
                    &VAR_15[VAR_12->FileOffset],
                    (unsigned int)VAR_11->SourceLine,
                    (unsigned int)VAR_12->SourceLine,
                    &VAR_15[VAR_11->FunctionOffset],
                    &VAR_15[VAR_12->FunctionOffset]);
            }
        }
        else
        {
            if (VAR_9)
            {
                FUNC_2(VAR_9, VAR_0, "%s:%u (%s)",
                    &VAR_15[VAR_11->FileOffset],
                    (unsigned int)VAR_11->SourceLine,
                    &VAR_15[VAR_11->FunctionOffset]);
            }
            else
            {
                FUNC_1("%s:%u (%s)\n",
                    &VAR_15[VAR_11->FileOffset],
                    (unsigned int)VAR_11->SourceLine,
                    &VAR_15[VAR_11->FunctionOffset]);
            }
        }
        return 0;
    }
    return 1;
}
