
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char* PCHAR ;
typedef int LONG ;
typedef int KDB_ENTER_CONDITION ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (char* const*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (char* const,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char**,int ) ;

__attribute__((used)) static BOOLEAN
FUNC_9(
    ULONG VAR_8,
    PCHAR VAR_9[])
{
    LONG VAR_10;
    BOOLEAN VAR_11;
    PCHAR VAR_12 = 0;
    KDB_ENTER_CONDITION VAR_13 = VAR_2;
    KDB_ENTER_CONDITION VAR_14 = VAR_2;

    static const PCHAR VAR_15[21] =
    {
        "ZERODEVIDE", "DEBUGTRAP", "NMI", "INT3", "OVERFLOW", "BOUND", "INVALIDOP",
        "NOMATHCOP", "DOUBLEFAULT", "RESERVED(9)", "INVALIDTSS", "SEGMENTNOTPRESENT",
        "STACKFAULT", "GPF", "PAGEFAULT", "RESERVED(15)", "MATHFAULT", "ALIGNMENTCHECK",
        "MACHINECHECK", "SIMDFAULT", "OTHERS"
    };

    if (VAR_8 == 1)
    {
        FUNC_3("Available settings:\n");
        FUNC_3("  syntax [intel|at&t]\n");
        FUNC_3("  condition [exception|*] [first|last] [never|always|kmode|umode]\n");
        FUNC_3("  break_on_module_load [true|false]\n");
    }
    else if (FUNC_7(VAR_9[1], "syntax") == 0)
    {
        if (VAR_8 == 2)
        {
            FUNC_3("syntax = %s\n", VAR_6 ? "intel" : "at&t");
        }
        else if (VAR_8 >= 3)
        {
            if (FUNC_6(VAR_9[2], "intel") == 0)
                VAR_6 = VAR_7;
            else if (FUNC_6(VAR_9[2], "at&t") == 0)
                VAR_6 = VAR_0;
            else
                FUNC_3("Unknown syntax '%s'.\n", VAR_9[2]);
        }
    }
    else if (FUNC_7(VAR_9[1], "condition") == 0)
    {
        if (VAR_8 == 2)
        {
            FUNC_3("Conditions:                 (First)  (Last)\n");
            for (VAR_10 = 0; VAR_10 < FUNC_5(VAR_15) - 1; VAR_10++)
            {
                if (!VAR_15[VAR_10])
                    continue;

                if (!FUNC_2(VAR_10, VAR_7, &VAR_13))
                    FUNC_0(VAR_0);

                if (!FUNC_2(VAR_10, VAR_0, &VAR_14))
                    FUNC_0(VAR_0);

                FUNC_3("  #%02d  %-20s %-8s %-8s\n", VAR_10, VAR_15[VAR_10],
                          FUNC_1(VAR_13),
                          FUNC_1(VAR_14));
            }

            FUNC_0(VAR_10 == (FUNC_5(VAR_15) - 1));
            FUNC_3("       %-20s %-8s %-8s\n", VAR_15[VAR_10],
                      FUNC_1(VAR_13),
                      FUNC_1(VAR_14));
        }
        else
        {
            if (VAR_8 >= 5 && FUNC_7(VAR_9[2], "*") == 0)
            {
                VAR_10 = -1;
            }
            else
            {
                VAR_10 = FUNC_8(VAR_9[2], &VAR_12, 0);

                if (VAR_9[2] == VAR_12)
                {
                    for (VAR_10 = 0; VAR_10 < FUNC_5(VAR_15); VAR_10++)
                    {
                        if (!VAR_15[VAR_10])
                            continue;

                        if (FUNC_6(VAR_15[VAR_10], VAR_9[2]) == 0)
                            break;
                    }
                }

                if (VAR_10 >= FUNC_5(VAR_15))
                {
                    FUNC_3("Unknown exception '%s'.\n", VAR_9[2]);
                    return VAR_7;
                }
            }

            if (VAR_8 > 4)
            {
                if (FUNC_6(VAR_9[3], "first") == 0)
                    VAR_11 = VAR_7;
                else if (FUNC_6(VAR_9[3], "last") == 0)
                    VAR_11 = VAR_0;
                else
                {
                    FUNC_3("set condition: second argument must be 'first' or 'last'\n");
                    return VAR_7;
                }

                if (FUNC_6(VAR_9[4], "never") == 0)
                    VAR_13 = VAR_2;
                else if (FUNC_6(VAR_9[4], "always") == 0)
                    VAR_13 = VAR_3;
                else if (FUNC_6(VAR_9[4], "umode") == 0)
                    VAR_13 = VAR_5;
                else if (FUNC_6(VAR_9[4], "kmode") == 0)
                    VAR_13 = VAR_4;
                else
                {
                    FUNC_3("set condition: third argument must be 'never', 'always', 'umode' or 'kmode'\n");
                    return VAR_7;
                }

                if (!FUNC_4(VAR_10, VAR_11, VAR_13))
                {
                    if (VAR_10 >= 0)
                        FUNC_3("Couldn't change condition for exception #%02d\n", VAR_10);
                    else
                        FUNC_3("Couldn't change condition for all exceptions\n", VAR_10);
                }
            }
            else
            {
                if (!FUNC_2(VAR_10, VAR_7, &VAR_13))
                    FUNC_0(VAR_0);

                if (!FUNC_2(VAR_10, VAR_0, &VAR_14))
                    FUNC_0(VAR_0);

                if (VAR_10 < (FUNC_5(VAR_15) - 1))
                {
                    FUNC_3("Condition for exception #%02d (%s): FirstChance %s  LastChance %s\n",
                              VAR_10, VAR_15[VAR_10],
                              FUNC_1(VAR_13),
                              FUNC_1(VAR_14));
                }
                else
                {
                    FUNC_3("Condition for all other exceptions: FirstChance %s  LastChance %s\n",
                              FUNC_1(VAR_13),
                              FUNC_1(VAR_14));
                }
            }
        }
    }
    else if (FUNC_7(VAR_9[1], "break_on_module_load") == 0)
    {
        if (VAR_8 == 2)
            FUNC_3("break_on_module_load = %s\n", VAR_1 ? "enabled" : "disabled");
        else if (VAR_8 >= 3)
        {
            if (FUNC_6(VAR_9[2], "enable") == 0 || FUNC_6(VAR_9[2], "enabled") == 0 || FUNC_6(VAR_9[2], "true") == 0)
                VAR_1 = VAR_7;
            else if (FUNC_6(VAR_9[2], "disable") == 0 || FUNC_6(VAR_9[2], "disabled") == 0 || FUNC_6(VAR_9[2], "false") == 0)
                VAR_1 = VAR_0;
            else
                FUNC_3("Unknown setting '%s'.\n", VAR_9[2]);
        }
    }
    else
    {
        FUNC_3("Unknown setting '%s'.\n", VAR_9[1]);
    }

    return VAR_7;
}
