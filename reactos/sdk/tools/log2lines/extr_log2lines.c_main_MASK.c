
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REVINFO ;
typedef int LIST ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *,int ,int) ;
 int * VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int,char const**) ;
 int FUNC_12 (int,char const**) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_15 (scalar_t__*) ;
 int FUNC_16 (char*,int ,char*,char const*,char const*) ;
 int VAR_13 ;
 int FUNC_17 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_18 (int *,char*) ;
 int FUNC_19 (int ) ;
 int VAR_16 ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,char*,char*,char*) ;
 int FUNC_22 () ;

int
FUNC_23(int VAR_17, const char **VAR_18)
{
    int VAR_19 = 0;
    int VAR_20 = 0;
    int VAR_21 = 0;

    VAR_4 = VAR_14;
    VAR_3 = VAR_15;
    (void)VAR_2;
    (void)VAR_5;

    FUNC_10(&VAR_1, 0, sizeof(LIST));
    FUNC_10(&VAR_13, 0, sizeof(LIST));
    FUNC_17(&VAR_16);
    FUNC_10(&VAR_12, 0, sizeof(REVINFO));
    FUNC_3();

    VAR_20 = FUNC_11(VAR_17, VAR_18);
    VAR_21 = FUNC_12(VAR_17, VAR_18);

    if (VAR_21 < 0 || VAR_20 < 0)
    {
        VAR_19 = VAR_21;
        goto cleanup;
    }

    VAR_17 -= VAR_21;

    if (VAR_9 && (FUNC_18(VAR_9, "update") == 0))
    {
        VAR_19 = FUNC_22();
        goto cleanup;
    }

    if (FUNC_2(VAR_11))
    {
        VAR_19 = 3;
        goto cleanup;
    }

    FUNC_4(VAR_11, 0);
    if (VAR_10)
    {
        VAR_19 = 0;
        goto cleanup;
    }

    FUNC_13();
    FUNC_8(4, "Cache read complete\n");

    if (FUNC_15(&VAR_7))
    {
        VAR_19 = 2;
        goto cleanup;
    }
    FUNC_8(4, "opt_logFile processed\n");

    if (VAR_8)
    {
        FUNC_8(3, "Command line: \"%s\"\n",VAR_8);

        if (!(VAR_4 = FUNC_1(VAR_8, "r")))
        {
            VAR_4 = VAR_14;
            FUNC_8(0, "Could not popen '%s' (%s)\n", VAR_8, FUNC_19(VAR_6));
            FUNC_6(VAR_8);
            VAR_8 = ((void*)0);
        }
    }
    FUNC_8(4, "opt_Pipe processed\n");

    if (VAR_17 > 1)
    {
        int VAR_22 = 1;
        const char *VAR_23 = ((void*)0);
        const char *VAR_24 = ((void*)0);
        char VAR_25[VAR_0 + 1];
        char VAR_26[VAR_0 + 1];
        char VAR_27[VAR_0 + 1];


        while (VAR_22 < VAR_17)
        {
            VAR_24 = VAR_18[VAR_21 + VAR_22++];
            if (FUNC_7(VAR_24))
            {
                if (VAR_23)
                {
                    FUNC_8(2, "translating %s %s\n", VAR_23, VAR_24);

                    FUNC_16(VAR_25, VAR_0, "<%s:%s>\n", VAR_23, VAR_24);
                    FUNC_21(VAR_3, VAR_25, VAR_26, VAR_27);
                    FUNC_14(VAR_3);
                }
                else
                {
                    FUNC_8(0, "<exefile> expected\n");
                    VAR_19 = 3;
                    break;
                }
            }
            else
            {

                VAR_23 = VAR_24;
            }
        }
    }
    else
    {
        FUNC_20(VAR_4, VAR_3);
    }

    if (VAR_7)
        FUNC_5(VAR_7);

    if (VAR_8)
        FUNC_0(VAR_4);

cleanup:

    if (VAR_9)
    {
        FUNC_6(VAR_9);
        VAR_9 = ((void*)0);
    }


    if (VAR_8)
    {
        FUNC_6(VAR_8);
        VAR_8 = ((void*)0);
    }

    FUNC_9(&VAR_13);
    FUNC_9(&VAR_1);

    return VAR_19;
}
