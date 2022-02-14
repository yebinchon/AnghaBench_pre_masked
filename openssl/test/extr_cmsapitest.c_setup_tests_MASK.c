
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char BIO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int *,int *,int *) ;
 int FUNC_4 (char*,int **,int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_8 (int) ;

int FUNC_9(void)
{
    char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    BIO *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

    if (!FUNC_5(VAR_3 = FUNC_8(0))
            || !FUNC_5(VAR_4 = FUNC_8(1)))
        return 0;

    VAR_5 = FUNC_2(VAR_3, "r");
    if (!FUNC_5(VAR_5))
        return 0;
    if (!FUNC_6(FUNC_4(VAR_5, &VAR_0, ((void*)0), ((void*)0)))) {
        FUNC_1(VAR_5);
        return 0;
    }
    FUNC_1(VAR_5);

    VAR_6 = FUNC_2(VAR_4, "r");
    if (!FUNC_5(VAR_6)) {
        FUNC_7(VAR_0);
        VAR_0 = ((void*)0);
        return 0;
    }
    if (!FUNC_6(FUNC_3(VAR_6, &VAR_1, ((void*)0), ((void*)0)))) {
        FUNC_1(VAR_6);
        FUNC_7(VAR_0);
        VAR_0 = ((void*)0);
        return 0;
    }
    FUNC_1(VAR_6);

    FUNC_0(VAR_2);

    return 1;
}
