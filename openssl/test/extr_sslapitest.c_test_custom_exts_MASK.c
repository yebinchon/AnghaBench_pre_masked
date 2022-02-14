
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *,int ,int ,int ,int*,int ,int*) ;
 int FUNC_1 (int *,int ,unsigned int,int ,int ,int*,int ,int*) ;
 int FUNC_2 (int *,int ,int ,int ,int*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_9 ;
 int * FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int ,int *,int ,int ,int **,int **,int ,int ) ;
 int FUNC_18 (int *,int *,int **,int **,int *,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static int FUNC_19(int VAR_28)
{
    SSL_CTX *VAR_29 = ((void*)0), *VAR_30 = ((void*)0), *VAR_31 = ((void*)0);
    SSL *VAR_32 = ((void*)0), *VAR_33 = ((void*)0);
    int VAR_34 = 0;
    static int VAR_35 = 1;
    static int VAR_36 = 0;
    SSL_SESSION *VAR_37 = ((void*)0);
    unsigned int VAR_38;
    VAR_12 = VAR_14 = VAR_25 = VAR_27 = 0;
    VAR_11 = VAR_13 = VAR_24 = VAR_26 = 0;
    VAR_23 = 0;

    if (!FUNC_13(FUNC_17(FUNC_15(), FUNC_14(),
                                       VAR_9, 0,
                                       &VAR_30, &VAR_29, VAR_10, VAR_21)))
        goto end;

    if (VAR_28 == 2
            && !FUNC_13(FUNC_17(FUNC_15(), ((void*)0),
                                              VAR_9, 0,
                                              &VAR_31, ((void*)0), VAR_10, VAR_21)))
        goto end;


    if (VAR_28 < 3) {
        FUNC_4(VAR_29, VAR_7);
        FUNC_4(VAR_30, VAR_7);
        if (VAR_31 != ((void*)0))
            FUNC_4(VAR_31, VAR_7);
    }

    if (VAR_28 == 4) {
        VAR_38 = VAR_1
                  | VAR_2
                  | VAR_6
                  | VAR_4
                  | VAR_3
                  | VAR_5;
    } else {
        VAR_38 = VAR_1
                  | VAR_2
                  | VAR_4;
    }


    if (VAR_28 == 0) {
        if (!FUNC_13(FUNC_0(VAR_29, VAR_8,
                                                     VAR_18, VAR_19,
                                                     &VAR_36, VAR_20,
                                                     &VAR_36)))
            goto end;
    } else {
        if (!FUNC_13(FUNC_1(VAR_29, VAR_8, VAR_38,
                                              VAR_15, VAR_16,
                                              &VAR_36, VAR_17, &VAR_36)))
            goto end;
    }


    if (!FUNC_12(FUNC_0(VAR_29, VAR_8,
                                                  VAR_18, VAR_19,
                                                  &VAR_36, VAR_20,
                                                  &VAR_36))
            || !FUNC_12(FUNC_1(VAR_29, VAR_8,
                                                  VAR_38, VAR_15,
                                                  VAR_16, &VAR_36,
                                                  VAR_17, &VAR_36)))
        goto end;


    if (VAR_28 == 0) {
        if (!FUNC_13(FUNC_2(VAR_30, VAR_8,
                                                     VAR_18, VAR_19,
                                                     &VAR_35, VAR_20,
                                                     &VAR_35)))
            goto end;
    } else {
        if (!FUNC_13(FUNC_1(VAR_30, VAR_8, VAR_38,
                                              VAR_15, VAR_16,
                                              &VAR_35, VAR_17, &VAR_35)))
            goto end;
        if (VAR_31 != ((void*)0)
                && !FUNC_13(FUNC_1(VAR_31, VAR_8,
                                                     VAR_38, VAR_15,
                                                     VAR_16, &VAR_35,
                                                     VAR_17, &VAR_35)))
            goto end;
    }


    if (!FUNC_12(FUNC_2(VAR_30, VAR_8,
                                                  VAR_18, VAR_19,
                                                  &VAR_35, VAR_20,
                                                  &VAR_35))
            || !FUNC_12(FUNC_1(VAR_30, VAR_8,
                                                  VAR_38, VAR_15,
                                                  VAR_16, &VAR_35,
                                                  VAR_17, &VAR_35)))
        goto end;

    if (VAR_28 == 2) {

        if (!FUNC_13(FUNC_6(VAR_30, VAR_22))
                || !FUNC_13(FUNC_5(VAR_30, VAR_31)))
            goto end;
    }

    if (!FUNC_13(FUNC_18(VAR_30, VAR_29, &VAR_33,
                                      &VAR_32, ((void*)0), ((void*)0)))
            || !FUNC_13(FUNC_16(VAR_33, VAR_32,
                                                VAR_0)))
        goto end;

    if (VAR_28 == 0) {
        if (VAR_12 != 1
                || VAR_14 != 1
                || VAR_25 != 1
                || VAR_27 != 1)
            goto end;
    } else if (VAR_28 == 1 || VAR_28 == 2 || VAR_28 == 3) {
        if (VAR_11 != 1
                || VAR_13 != 1
                || VAR_24 != 1
                || VAR_26 != 1
                || (VAR_28 != 2 && VAR_23 != 0)
                || (VAR_28 == 2 && VAR_23 != 1))
            goto end;
    } else {

        if (VAR_11 != 1
                || VAR_13 != 5
                || VAR_24 != 5
                || VAR_26 != 1)
            goto end;
    }

    VAR_37 = FUNC_9(VAR_32);
    FUNC_11(VAR_32);
    FUNC_11(VAR_33);
    FUNC_8(VAR_33);
    FUNC_8(VAR_32);
    VAR_33 = VAR_32 = ((void*)0);

    if (VAR_28 == 3) {

        VAR_34 = 1;
        goto end;
    }

    if (!FUNC_13(FUNC_18(VAR_30, VAR_29, &VAR_33, &VAR_32,
                                      ((void*)0), ((void*)0)))
            || !FUNC_13(FUNC_10(VAR_32, VAR_37))
            || !FUNC_13(FUNC_16(VAR_33, VAR_32,
                                               VAR_0)))
        goto end;







    if (VAR_28 == 0) {
        if (VAR_12 != 2
                || VAR_14 != 1
                || VAR_25 != 1
                || VAR_27 != 1)
            goto end;
    } else if (VAR_28 == 1 || VAR_28 == 2 || VAR_28 == 3) {
        if (VAR_11 != 2
                || VAR_13 != 2
                || VAR_24 != 2
                || VAR_26 != 2)
            goto end;
    } else {




        if (VAR_11 != 2
                || VAR_13 != 8
                || VAR_24 != 8
                || VAR_26 != 2)
            goto end;
    }

    VAR_34 = 1;

end:
    FUNC_7(VAR_37);
    FUNC_8(VAR_33);
    FUNC_8(VAR_32);
    FUNC_3(VAR_31);
    FUNC_3(VAR_30);
    FUNC_3(VAR_29);
    return VAR_34;
}
