
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_5 ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_12 (int *,int *,int **,int **,int *,int *) ;
 int VAR_6 ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(void)
{
    SSL_CTX *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0, VAR_12, VAR_13;
    char VAR_14[20];
    static char *VAR_15 = "A test message";

    if (!FUNC_7(FUNC_11(FUNC_9(),
                                       FUNC_8(),
                                       VAR_4,
                                       0,
                                       &VAR_8, &VAR_7, VAR_5, VAR_6))
            || !FUNC_7(FUNC_12(VAR_8, VAR_7, &VAR_10, &VAR_9,
                                             ((void*)0), ((void*)0)))
            || !FUNC_7(FUNC_10(VAR_10, VAR_9,
                                                VAR_1)))
        goto end;

    for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {

        for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
            if (!FUNC_7(FUNC_3(VAR_9,
                                          (VAR_13 == 0)
                                          ? VAR_2
                                          : VAR_3))
                    || !FUNC_7(FUNC_1(VAR_9)))
                goto end;
        }


        if (!FUNC_6(FUNC_5(VAR_9, VAR_15, FUNC_13(VAR_15)), FUNC_13(VAR_15))
                || !FUNC_6(FUNC_4(VAR_10, VAR_14, sizeof(VAR_14)),
                                         FUNC_13(VAR_15)))
            goto end;

        if (!FUNC_6(FUNC_5(VAR_10, VAR_15, FUNC_13(VAR_15)), FUNC_13(VAR_15))
                || !FUNC_6(FUNC_4(VAR_9, VAR_14, sizeof(VAR_14)),
                                         FUNC_13(VAR_15)))
            goto end;
    }

    VAR_11 = 1;

 end:
    FUNC_2(VAR_10);
    FUNC_2(VAR_9);
    FUNC_0(VAR_8);
    FUNC_0(VAR_7);

    return VAR_11;
}
