
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char TCHAR ;
typedef int FILE ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char FUNC_5 (char) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,size_t) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int * FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,int,int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,char*) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char*) ;

int FUNC_18(int VAR_0, TCHAR ** VAR_1)
{
    TCHAR * VAR_2;
    size_t VAR_3;
    int VAR_4;
    size_t VAR_5;

    VAR_3 = 0;
    for(VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
    {
        VAR_3 += FUNC_9(VAR_1[VAR_4]) + 1;
    }

    if (!VAR_3)
    {
        return -1;
    }

    if (FUNC_11(VAR_1[1], "--winetest") && (VAR_0 == 3))
    {
        char VAR_6[128];
        char VAR_7[128];
        char *VAR_8;
        char VAR_9[255];
        char VAR_10[300];
        FILE *VAR_11;
        FILE *VAR_12;


        FUNC_17(VAR_9, VAR_1[2]);
        FUNC_15(VAR_9, " --list");
        VAR_11 = FUNC_12(VAR_9, "r");
        if (VAR_11 != ((void*)0))
        {
            while(FUNC_13(VAR_6, 128, VAR_11))
            {
                if (VAR_6[0] == ' ')
                {
                    FUNC_17(VAR_9, VAR_1[2]);
                    FUNC_15(VAR_9, " ");
                    FUNC_15(VAR_9, VAR_6+4);

                    FUNC_17(VAR_10, "\n\nRunning ");
                    FUNC_15(VAR_10, VAR_9);
                    FUNC_4(VAR_10);
                    VAR_12 = FUNC_7(VAR_9, "r");
                    if (VAR_12 != ((void*)0))
                    {
                        while(FUNC_13(VAR_7, 128, VAR_12))
                        {
                            VAR_8 = FUNC_16(VAR_7, '\n');
                            if (VAR_8)
                                *VAR_8 = '\0';
                            FUNC_14(VAR_7);
                            if (VAR_8)
                                *VAR_8 = '\n';
                            FUNC_4(VAR_7);
                        }
                        FUNC_6(VAR_12);
                    }
                }
            }
            FUNC_6(VAR_11);
        }
    }
    else if (FUNC_11(VAR_1[1], "--process") && (VAR_0 == 3))
    {
        char VAR_13[128];
        FILE *VAR_14;

        VAR_14 = FUNC_12(VAR_1[2], "r");
        if (VAR_14 != ((void*)0))
        {
            while(FUNC_13(VAR_13, 128, VAR_14))
            {
                FUNC_14(VAR_13);
                FUNC_4(VAR_13);
            }
            FUNC_6(VAR_14);
        }
    }
    else
    {
        VAR_2 = FUNC_1(FUNC_0(), 0, (VAR_3+1) * sizeof(TCHAR));
        if (!VAR_2)
        {
            return -1;
        }

        VAR_5 = 0;
        for(VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
        {
            size_t VAR_15 = FUNC_9(VAR_1[VAR_4]);
            FUNC_10(&VAR_2[VAR_5], VAR_1[VAR_4], VAR_15);
            VAR_5 += VAR_15;
            if (VAR_4 + 1 < VAR_0)
            {
                VAR_2[VAR_5] = FUNC_5(' ');
            }
            else
            {
                VAR_2[VAR_5] = FUNC_5('\n');
                VAR_2[VAR_5+1] = FUNC_5('\0');
            }
            VAR_5++;
        }
        FUNC_8(VAR_2);
        FUNC_3(VAR_2);
        FUNC_2(FUNC_0(), 0, VAR_2);
    }
    return 0;
}
