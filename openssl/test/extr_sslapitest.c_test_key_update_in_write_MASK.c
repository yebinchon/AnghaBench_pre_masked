
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int VAR_4 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_5 ;
 int FUNC_18 (int *,int *,int ) ;
 int FUNC_19 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_20 (int *,int *,int **,int **,int *,int *) ;
 int VAR_6 ;
 int FUNC_21 (char*) ;

__attribute__((used)) static int FUNC_22(int VAR_7)
{
    SSL_CTX *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    SSL *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    char VAR_13[20];
    static char *VAR_14 = "A test message";
    BIO *VAR_15 = FUNC_1(FUNC_17());
    BIO *VAR_16 = ((void*)0);
    SSL *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);

    if (!FUNC_13(VAR_15)
            || !FUNC_14(FUNC_19(FUNC_16(),
                                              FUNC_15(),
                                              VAR_4,
                                              0,
                                              &VAR_9, &VAR_8, VAR_5, VAR_6))
            || !FUNC_14(FUNC_20(VAR_9, VAR_8, &VAR_11, &VAR_10,
                                             ((void*)0), ((void*)0)))
            || !FUNC_14(FUNC_18(VAR_11, VAR_10,
                                                VAR_0)))
        goto end;

    VAR_17 = VAR_7 == 0 ? VAR_10 : VAR_11;
    VAR_18 = VAR_7 == 0 ? VAR_11 : VAR_10;

    if (!FUNC_14(FUNC_8(VAR_17, VAR_3))
            || !FUNC_14(FUNC_4(VAR_17)))
        goto end;


    VAR_16 = FUNC_7(VAR_18);
    if (!FUNC_13(VAR_16) || !FUNC_14(FUNC_2(VAR_16))) {
        VAR_16 = ((void*)0);
        goto end;
    }
    FUNC_10(VAR_18, VAR_15);
    VAR_15 = ((void*)0);


    if (!FUNC_12(FUNC_11(VAR_18, VAR_14, FUNC_21(VAR_14)), -1)
            || !FUNC_12(FUNC_6(VAR_18, 0), VAR_2))
        goto end;


    FUNC_10(VAR_18, VAR_16);
    VAR_16 = ((void*)0);


    if (!FUNC_12(FUNC_9(VAR_18, VAR_13, sizeof(VAR_13)), -1)
            || !FUNC_12(FUNC_6(VAR_18, 0), VAR_1))
        goto end;





    if (!FUNC_12(FUNC_11(VAR_18, VAR_14, FUNC_21(VAR_14)), FUNC_21(VAR_14))
            || !FUNC_12(FUNC_9(VAR_17, VAR_13, sizeof(VAR_13)), FUNC_21(VAR_14)))
        goto end;


    if (!FUNC_12(FUNC_11(VAR_18, VAR_14, FUNC_21(VAR_14)), FUNC_21(VAR_14))
            || !FUNC_12(FUNC_9(VAR_17, VAR_13, sizeof(VAR_13)), FUNC_21(VAR_14)))
        goto end;

    VAR_12 = 1;

 end:
    FUNC_5(VAR_11);
    FUNC_5(VAR_10);
    FUNC_3(VAR_9);
    FUNC_3(VAR_8);
    FUNC_0(VAR_15);
    FUNC_0(VAR_16);

    return VAR_12;
}
