
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,char***,char***,int,int*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*,...) ;
 int* FUNC_6 () ;
 char*** FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    int VAR_2, VAR_3, VAR_4;
    char **VAR_5, **VAR_6, **VAR_7;
    char VAR_8[VAR_0], VAR_9[VAR_0];
    FILE *VAR_10;

    FUNC_5(FUNC_0(VAR_0, VAR_8) != 0, "GetTempPath failed\n");

    VAR_4 = 0;
    FUNC_1(&VAR_2, &VAR_5, &VAR_7, 0, &VAR_4);
    FUNC_5(VAR_2 == 4, "argc = %d\n", VAR_2);
    FUNC_5(!FUNC_10(VAR_5[1], "data"), "argv[1] = %s\n", VAR_5[1]);
    FUNC_9(VAR_9, "%s*\\*", VAR_8);
    FUNC_5(!FUNC_10(VAR_5[2], VAR_9), "argv[2] = %s\n", VAR_5[2]);
    FUNC_9(VAR_9, "%swine_test/*", VAR_8);
    FUNC_5(!FUNC_10(VAR_5[3], VAR_9), "argv[3] = %s\n", VAR_5[3]);
    FUNC_5(!VAR_5[4], "argv[4] != NULL\n");

    if(&FUNC_6 && &FUNC_7) {
        VAR_3 = *FUNC_6();
        VAR_6 = *FUNC_7();
        FUNC_5(VAR_3 == 4, "*__p___argc() = %d\n", VAR_3);
        FUNC_5(VAR_6 == VAR_5, "*__p___argv() = %p, expected %p\n", VAR_6, VAR_5);
    }
    else FUNC_8("__p___argc or __p___argv is not available\n");

    VAR_4 = 0;
    FUNC_1(&VAR_2, &VAR_5, &VAR_7, 1, &VAR_4);
    FUNC_5(VAR_2 == 5, "argc = %d\n", VAR_2);
    FUNC_5(!FUNC_10(VAR_5[1], "data"), "argv[1] = %s\n", VAR_5[1]);
    FUNC_9(VAR_9, "%s*\\*", VAR_8);
    FUNC_5(!FUNC_10(VAR_5[2], VAR_9), "argv[2] = %s\n", VAR_5[2]);
    FUNC_9(VAR_9, "%swine_test/a", VAR_8);
    if(VAR_5[3][FUNC_11(VAR_5[3])-1] == 'a') {
        FUNC_5(!FUNC_10(VAR_5[3], VAR_9), "argv[3] = %s\n", VAR_5[3]);
        FUNC_9(VAR_9, "%swine_test/test", VAR_8);
        FUNC_5(!FUNC_10(VAR_5[4], VAR_9), "argv[4] = %s\n", VAR_5[4]);
    }else {
        FUNC_5(!FUNC_10(VAR_5[4], VAR_9), "argv[4] = %s\n", VAR_5[4]);
        FUNC_9(VAR_9, "%swine_test/test", VAR_8);
        FUNC_5(!FUNC_10(VAR_5[3], VAR_9), "argv[3] = %s\n", VAR_5[3]);
    }
    FUNC_5(!VAR_5[5], "argv[5] != NULL\n");

    if(&FUNC_6 && &FUNC_7) {
        VAR_3 = *FUNC_6();
        VAR_6 = *FUNC_7();
        FUNC_5(VAR_3 == VAR_2, "*__p___argc() = %d, expected %d\n", VAR_3, VAR_2);
        FUNC_5(VAR_6 == VAR_5, "*__p___argv() = %p, expected %p\n", VAR_6, VAR_5);
    }

    FUNC_9(VAR_9, "%swine_test/b", VAR_8);
    VAR_10 = FUNC_4(VAR_9, "w");
    FUNC_5(VAR_10 != ((void*)0), "fopen(%s) failed: %d\n", VAR_9, VAR_1);
    FUNC_3(VAR_10);
    VAR_4 = 0;
    FUNC_1(&VAR_3, &VAR_6, &VAR_7, 1, &VAR_4);
    FUNC_5(VAR_3 == VAR_2+1, "new_argc = %d, expected %d\n", VAR_3, VAR_2+1);
    FUNC_2(VAR_9);
}
