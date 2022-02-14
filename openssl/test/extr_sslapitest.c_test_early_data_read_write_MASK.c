
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int buf ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,int,size_t*) ;
 int FUNC_1 (int *,unsigned char*,size_t,size_t*) ;
 int FUNC_2 () ;
 unsigned char* VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned char*,int,size_t*) ;
 int FUNC_12 (int *,unsigned char*,int,size_t*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned char*,size_t,size_t*) ;
 int FUNC_16 (int *,unsigned char*,size_t,size_t*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (unsigned char*,size_t,unsigned char*,size_t) ;
 int FUNC_21 (size_t,size_t) ;
 int FUNC_22 (size_t,unsigned char) ;
 int FUNC_23 (size_t,int) ;
 int FUNC_24 (int ) ;
 int * VAR_12 ;
 int FUNC_25 (int *,int *,int **,int **,int *,int *) ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 int FUNC_26 (int **,int **,int **,int **,int **,int) ;
 size_t FUNC_27 (unsigned char*) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static int FUNC_28(int VAR_16)
{
    SSL_CTX *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
    SSL *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    int VAR_21 = 0;
    SSL_SESSION *VAR_22 = ((void*)0);
    unsigned char VAR_23[20], VAR_24[1024];
    size_t VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    BIO *VAR_30;

    if (!FUNC_24(FUNC_26(&VAR_17, &VAR_18, &VAR_19,
                                        &VAR_20, &VAR_22, VAR_16)))
        goto end;


    if (!FUNC_24(FUNC_15(VAR_19, VAR_0, FUNC_27(VAR_0),
                                        &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_0))
            || !FUNC_18(FUNC_11(VAR_20, VAR_23,
                                                sizeof(VAR_23), &VAR_25),
                            VAR_11)
            || !FUNC_20(VAR_0, VAR_25, VAR_23, FUNC_27(VAR_0))
            || !FUNC_18(FUNC_9(VAR_20),
                            VAR_8))
        goto end;





    if (!FUNC_24(FUNC_15(VAR_20, VAR_1, FUNC_27(VAR_1),
                                        &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_1))
            || !FUNC_24(FUNC_12(VAR_19, VAR_23, sizeof(VAR_23), &VAR_25))
            || !FUNC_20(VAR_23, VAR_25, VAR_1, FUNC_27(VAR_1)))
        goto end;


    if (!FUNC_24(FUNC_15(VAR_19, VAR_2, FUNC_27(VAR_2),
                                        &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_2)))
        goto end;


    if (!FUNC_18(FUNC_11(VAR_20, VAR_23, sizeof(VAR_23),
                                         &VAR_25),
                     VAR_11)
            || !FUNC_20(VAR_23, VAR_25, VAR_2, FUNC_27(VAR_2)))
        goto end;


    if (!FUNC_24(FUNC_15(VAR_20, VAR_3, FUNC_27(VAR_3),
                                        &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_3))
            || !FUNC_24(FUNC_12(VAR_19, VAR_23, sizeof(VAR_23), &VAR_25))
            || !FUNC_20(VAR_23, VAR_25, VAR_3, FUNC_27(VAR_3)))
        goto end;





    if (!FUNC_24(FUNC_16(VAR_19, VAR_4, FUNC_27(VAR_4), &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_4))
            || !FUNC_18(FUNC_9(VAR_19),
                            VAR_8))
        goto end;







    VAR_30 = FUNC_10(VAR_20);
    if (!FUNC_24(FUNC_0(VAR_30, VAR_24, sizeof(VAR_24), &VAR_28))
            || !FUNC_23(VAR_28, sizeof(VAR_24))
            || !FUNC_22(VAR_28, VAR_7))
        goto end;


    VAR_27 = VAR_7 + (VAR_24[3] << 8 | VAR_24[4]);
    if (!FUNC_24(FUNC_1(VAR_30, VAR_24, VAR_27, &VAR_29))
            || !FUNC_21(VAR_29, VAR_27))
        goto end;


    if (!FUNC_18(FUNC_11(VAR_20, VAR_23, sizeof(VAR_23),
                                         &VAR_25),
                     VAR_10)
            || !FUNC_21(VAR_25, 0))
        goto end;





    if (!FUNC_24(FUNC_15(VAR_20, VAR_5, FUNC_27(VAR_5),
                                        &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_5)))
        goto end;


    if (!FUNC_24(FUNC_1(VAR_30, VAR_24 + VAR_27, VAR_28 - VAR_27,
                                &VAR_29))
            || !FUNC_21(VAR_29, VAR_28 - VAR_27))
        goto end;


    if (!FUNC_24(FUNC_12(VAR_20, VAR_23, sizeof(VAR_23), &VAR_25))
            || !FUNC_21(VAR_25, FUNC_27(VAR_4)))
        goto end;


    if (!FUNC_17(FUNC_15(VAR_19, VAR_5, FUNC_27(VAR_5),
                                         &VAR_26)))
        goto end;
    FUNC_2();
    if (!FUNC_18(FUNC_11(VAR_20, VAR_23, sizeof(VAR_23),
                                         &VAR_25),
                     VAR_9))
        goto end;
    FUNC_2();


    if (!FUNC_24(FUNC_12(VAR_19, VAR_23, sizeof(VAR_23), &VAR_25))
            || !FUNC_20(VAR_23, VAR_25, VAR_5, FUNC_27(VAR_5)))
        goto end;






    if (!FUNC_17(FUNC_12(VAR_19, VAR_23, sizeof(VAR_23), &VAR_25))
            || !FUNC_17(FUNC_12(VAR_19, VAR_23, sizeof(VAR_23),
                           &VAR_25)))
        goto end;


    if (!FUNC_24(FUNC_16(VAR_20, VAR_6, FUNC_27(VAR_6), &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_6))
            || !FUNC_24(FUNC_12(VAR_19, VAR_23, sizeof(VAR_23), &VAR_25))
            || !FUNC_20(VAR_23, VAR_25, VAR_6, FUNC_27(VAR_6)))
        goto end;

    FUNC_4(VAR_22);
    VAR_22 = FUNC_8(VAR_19);
    VAR_15 = 0;
    VAR_13 = 0;

    FUNC_14(VAR_19);
    FUNC_14(VAR_20);
    FUNC_7(VAR_20);
    FUNC_7(VAR_19);
    VAR_20 = VAR_19 = ((void*)0);
    if (!FUNC_24(FUNC_25(VAR_18, VAR_17, &VAR_20,
                                      &VAR_19, ((void*)0), ((void*)0)))
            || !FUNC_24(FUNC_13(VAR_19, VAR_22)))
        goto end;


    if (!FUNC_24(FUNC_15(VAR_19, VAR_0, FUNC_27(VAR_0),
                                        &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_0))
            || !FUNC_18(FUNC_11(VAR_20, VAR_23, sizeof(VAR_23),
                                                &VAR_25),
                            VAR_11)
            || !FUNC_20(VAR_23, VAR_25, VAR_0, FUNC_27(VAR_0)))
        goto end;

    if (!FUNC_19(FUNC_6(VAR_19), 0)
            || !FUNC_19(FUNC_5(VAR_20), 0))
        goto end;


    if (!FUNC_17(FUNC_15(VAR_19, VAR_5, FUNC_27(VAR_5),
                                         &VAR_26)))
        goto end;
    FUNC_2();
    if (!FUNC_18(FUNC_11(VAR_20, VAR_23, sizeof(VAR_23),
                                         &VAR_25),
                     VAR_9))
        goto end;
    FUNC_2();


    if (!FUNC_24(FUNC_16(VAR_19, VAR_4, FUNC_27(VAR_4), &VAR_26))
            || !FUNC_21(VAR_26, FUNC_27(VAR_4))
            || !FUNC_24(FUNC_12(VAR_20, VAR_23, sizeof(VAR_23), &VAR_25))
            || !FUNC_21(VAR_25, FUNC_27(VAR_4)))
        goto end;

    VAR_21 = 1;

 end:
    FUNC_4(VAR_22);
    FUNC_4(VAR_12);
    FUNC_4(VAR_14);
    VAR_12 = VAR_14 = ((void*)0);
    FUNC_7(VAR_20);
    FUNC_7(VAR_19);
    FUNC_3(VAR_18);
    FUNC_3(VAR_17);
    return VAR_21;
}
