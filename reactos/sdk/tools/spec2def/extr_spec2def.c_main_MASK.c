
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int achDllName ;
struct TYPE_7__ {scalar_t__ bVersionIncluded; } ;
typedef int FILE ;
typedef TYPE_1__ EXPORT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (char*,int *,unsigned int*) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,...) ;
 size_t FUNC_10 (char*,int,size_t,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,int ,int ) ;
 size_t FUNC_13 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 char* FUNC_14 (size_t) ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 int FUNC_15 (int *) ;
 int * VAR_17 ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char*,char const*,int) ;
 int FUNC_19 (char*,char*,int) ;
 char* FUNC_20 (char*,char) ;
 int FUNC_21 (char*,int *,int) ;
 int FUNC_22 () ;

int FUNC_23(int VAR_18, char *VAR_19[])
{
    size_t VAR_20;
    char *VAR_21, *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
    const char* VAR_25 = "--version=0x";
    char VAR_26[40];
    FILE *VAR_27;
    unsigned VAR_28 = 0, VAR_29;
    EXPORT *VAR_30;

    if (VAR_18 < 2)
    {
        FUNC_22();
        return -1;
    }


    for (VAR_29 = 1; VAR_29 < (unsigned)VAR_18 && *VAR_19[VAR_29] == '-'; VAR_29++)
    {
        if ((FUNC_16(VAR_19[VAR_29], "--help") == 0) ||
            (FUNC_16(VAR_19[VAR_29], "-h") == 0))
        {
            FUNC_22();
            return 0;
        }
        else if (VAR_19[VAR_29][1] == 'd' && VAR_19[VAR_29][2] == '=')
        {
            VAR_22 = VAR_19[VAR_29] + 3;
        }
        else if (VAR_19[VAR_29][1] == 'l' && VAR_19[VAR_29][2] == '=')
        {
            VAR_24 = VAR_19[VAR_29] + 3;
        }
        else if (VAR_19[VAR_29][1] == 's' && VAR_19[VAR_29][2] == '=')
        {
            VAR_23 = VAR_19[VAR_29] + 3;
        }
        else if (VAR_19[VAR_29][1] == 'n' && VAR_19[VAR_29][2] == '=')
        {
            VAR_15 = VAR_19[VAR_29] + 3;
        }
        else if (FUNC_18(VAR_19[VAR_29], VAR_25, FUNC_17(VAR_25)) == 0)
        {
            VAR_12 = FUNC_21(VAR_19[VAR_29] + FUNC_17(VAR_25), ((void*)0), 16);
        }
        else if (FUNC_16(VAR_19[VAR_29], "--implib") == 0)
        {
            VAR_6 = 1;
        }
        else if (FUNC_16(VAR_19[VAR_29], "--ms") == 0)
        {
            VAR_7 = 1;
        }
        else if (FUNC_16(VAR_19[VAR_29], "--no-private-warnings") == 0)
        {
            VAR_8 = 1;
        }
        else if (FUNC_16(VAR_19[VAR_29], "--with-tracing") == 0)
        {
            if (!VAR_23)
            {
                FUNC_9(VAR_17, "Error: cannot use --with-tracing without -s option.\n");
                return -1;
            }
            VAR_9 = 1;
        }
        else if (VAR_19[VAR_29][1] == 'a' && VAR_19[VAR_29][2] == '=')
        {
            VAR_13 = VAR_19[VAR_29] + 3;
        }
        else
        {
            FUNC_9(VAR_17, "Unrecognized option: %s\n", VAR_19[VAR_29]);
            return -1;
        }
    }

    if (FUNC_16(VAR_13, "i386") == 0)
    {
        VAR_10 = VAR_4;
        VAR_11 = "_";
    }
    else if (FUNC_16(VAR_13, "x86_64") == 0) VAR_10 = VAR_0;
    else if (FUNC_16(VAR_13, "ia64") == 0) VAR_10 = VAR_2;
    else if (FUNC_16(VAR_13, "arm") == 0) VAR_10 = VAR_1;
    else if (FUNC_16(VAR_13, "ppc") == 0) VAR_10 = VAR_3;

    if ((VAR_10 == VAR_0) || (VAR_10 == VAR_2))
    {
        VAR_14 = "win64";
    }
    else
        VAR_14 = "win32";


    if (!VAR_15)
    {
        char *VAR_31, *VAR_32;
        size_t VAR_33;

        VAR_31 = FUNC_20(VAR_19[VAR_29], '\\');
        if (!VAR_31) VAR_31 = FUNC_20(VAR_19[VAR_29], '/');
        VAR_32 = VAR_31 = VAR_31 ? VAR_31 + 1 : VAR_19[VAR_29];


        while (*VAR_32 != '.' && *VAR_32 != 0) VAR_32++;
        VAR_33 = VAR_32 - VAR_31;
        if (VAR_33 >= sizeof(VAR_26) - 5)
        {
            FUNC_9(VAR_17, "name too long: %s\n", VAR_31);
            return -2;
        }

        FUNC_19(VAR_26, VAR_31, VAR_33);
        FUNC_19(VAR_26 + VAR_33, ".dll", sizeof(VAR_26) - VAR_33);
        VAR_15 = VAR_26;
    }


    VAR_16 = VAR_19[VAR_29];
    VAR_27 = FUNC_8(VAR_16, "r");
    if (!VAR_27)
    {
        FUNC_9(VAR_17, "error: could not open file %s\n", VAR_16);
        return -3;
    }


    FUNC_12(VAR_27, 0, VAR_5);
    VAR_20 = FUNC_13(VAR_27);
    FUNC_15(VAR_27);


    VAR_21 = FUNC_14(VAR_20 + 1);
    if (!VAR_21)
    {
        FUNC_7(VAR_27);
        return -4;
    }


    VAR_20 = FUNC_10(VAR_21, 1, VAR_20, VAR_27);
    FUNC_7(VAR_27);


    VAR_21[VAR_20] = '\0';

    VAR_30 = FUNC_6(VAR_21, VAR_27, &VAR_28);
    if (VAR_30 == ((void*)0))
    {
        FUNC_9(VAR_17, "Failed to allocate memory for export data!\n");
        return -1;
    }

    if (VAR_22)
    {

        VAR_27 = FUNC_8(VAR_22, "w");
        if (!VAR_27)
        {
            FUNC_9(VAR_17, "error: could not open output file %s\n", VAR_19[VAR_29 + 1]);
            return -5;
        }

        FUNC_1(VAR_27, VAR_15);

        for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++)
        {
            if (VAR_30[VAR_29].bVersionIncluded)
                 FUNC_4(VAR_27, &VAR_30[VAR_29]);
        }

        FUNC_7(VAR_27);
    }

    if (VAR_23)
    {

        VAR_27 = FUNC_8(VAR_23, "w");
        if (!VAR_27)
        {
            FUNC_9(VAR_17, "error: could not open output file %s\n", VAR_19[VAR_29 + 1]);
            return -5;
        }

        FUNC_2(VAR_27);

        for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++)
        {
            if (VAR_30[VAR_29].bVersionIncluded)
                FUNC_5(VAR_27, &VAR_30[VAR_29]);
        }

        FUNC_7(VAR_27);
    }

    if (VAR_24)
    {

        VAR_27 = FUNC_8(VAR_24, "w");
        if (!VAR_27)
        {
            FUNC_9(VAR_17, "error: could not open output file %s\n", VAR_19[VAR_29 + 1]);
            return -5;
        }

        FUNC_0(VAR_27, VAR_15);

        for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++)
        {
            if (VAR_30[VAR_29].bVersionIncluded)
                FUNC_3(VAR_27, &VAR_30[VAR_29]);
        }

        FUNC_9(VAR_27, "\n    END\n");
        FUNC_7(VAR_27);
    }

    FUNC_11(VAR_30);

    return 0;
}
