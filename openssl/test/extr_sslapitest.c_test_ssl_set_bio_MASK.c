
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_15 (int *,int *,int **,int **,int *,int *) ;
 int VAR_12 ;
 int FUNC_16 (int **,int *,int *,int) ;

__attribute__((used)) static int FUNC_17(int VAR_13)
{
    SSL_CTX *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    BIO *VAR_16 = ((void*)0);
    BIO *VAR_17 = ((void*)0);
    BIO *VAR_18 = ((void*)0), *VAR_19 = ((void*)0), *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
    SSL *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
    int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    int VAR_29 = 0;

    if (VAR_13 < VAR_7) {
        VAR_24 = VAR_13 % 3;
        VAR_13 /= 3;
        VAR_25 = VAR_13 % 3;
        VAR_13 /= 3;
        VAR_26 = VAR_13 % 3;
        VAR_13 /= 3;
        VAR_27 = VAR_13 % 3;
        VAR_28 = VAR_2;
    } else {
        VAR_13 -= VAR_7;
        VAR_24 = VAR_25 = VAR_10;
        VAR_26 = VAR_13 % 2;
        VAR_13 /= 2;
        VAR_27 = VAR_13 % 2;
        VAR_13 /= 2;
        VAR_28 = VAR_13 % 2;
    }

    if (!FUNC_10(FUNC_14(FUNC_12(), FUNC_11(),
                                       VAR_6, 0,
                                       &VAR_14, &VAR_15, VAR_11, VAR_12)))
        goto end;

    if (VAR_28 == VAR_0) {






        FUNC_6(VAR_14, VAR_5);
        FUNC_5(VAR_15, VAR_4);
    }

    if (!FUNC_10(FUNC_15(VAR_14, VAR_15, &VAR_22, &VAR_23,
                                      ((void*)0), ((void*)0))))
        goto end;

    if (VAR_24 == VAR_8
            || VAR_25 == VAR_8
            || VAR_26 == VAR_8
            || VAR_27 == VAR_8) {
        if (!FUNC_9(VAR_16 = FUNC_1(FUNC_2())))
            goto end;
    }

    if (VAR_24 == VAR_9
            || VAR_25 == VAR_9
            || VAR_26 == VAR_9
            || VAR_27 == VAR_9) {
        if (!FUNC_9(VAR_17 = FUNC_1(FUNC_2())))
            goto end;
    }

    if (VAR_24 != VAR_10) {
        FUNC_16(&VAR_18, VAR_16, VAR_17, VAR_24);
        FUNC_16(&VAR_19, VAR_16, VAR_17, VAR_25);
        FUNC_8(VAR_23, VAR_18, VAR_19);






        if (VAR_18 != ((void*)0))
            FUNC_3(VAR_18);
        if (VAR_19 != ((void*)0) && VAR_19 != VAR_18)
            FUNC_3(VAR_19);
    }

    if (VAR_28 != VAR_2
            && !FUNC_10(FUNC_13(VAR_22, VAR_23,
                                                VAR_3)
                          == (VAR_28 == VAR_1)))
        goto end;

    FUNC_16(&VAR_20, VAR_16, VAR_17, VAR_26);
    FUNC_16(&VAR_21, VAR_16, VAR_17, VAR_27);






    if (VAR_20 != ((void*)0)
            && VAR_20 != VAR_18
            && (VAR_21 != VAR_19 || VAR_20 != VAR_21))
        FUNC_3(VAR_20);
    if (VAR_21 != ((void*)0)
            && VAR_21 != VAR_20
            && (VAR_21 != VAR_19 || (VAR_21 == VAR_19 && VAR_18 == VAR_19)))
        FUNC_3(VAR_21);

    FUNC_8(VAR_23, VAR_20, VAR_21);

    VAR_29 = 1;

 end:
    FUNC_0(VAR_16);
    FUNC_0(VAR_17);







    FUNC_7(VAR_22);
    FUNC_7(VAR_23);
    FUNC_4(VAR_14);
    FUNC_4(VAR_15);
    return VAR_29;
}
