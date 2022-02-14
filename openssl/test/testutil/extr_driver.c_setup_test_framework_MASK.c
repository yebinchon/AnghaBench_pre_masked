
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (int*,char**) ;
 char* FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int,char**,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int*,char***) ;

int FUNC_10(int VAR_2, char *VAR_3[])
{
    char *VAR_4 = FUNC_4("OPENSSL_TEST_RAND_ORDER");
    char *VAR_5 = FUNC_4("HARNESS_OSSL_LEVEL");

    if (VAR_5 != ((void*)0))
        VAR_1 = 4 * FUNC_2(VAR_5);
    if (VAR_4 != ((void*)0))
        FUNC_6(FUNC_2(VAR_4));


    if (FUNC_7()) {
        FUNC_1(1);
        FUNC_0(VAR_0);
    }
    if (!FUNC_5(VAR_2, VAR_3, FUNC_8()))
        return 0;
    return 1;
}
