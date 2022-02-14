
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (scalar_t__,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int VAR_9 ;
 int FUNC_24 (int *,int *,int ) ;
 int FUNC_25 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_26 (int *,int *,int **,int **,int *,int *) ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int * VAR_17 ;
 int FUNC_27 (int *,int *) ;

__attribute__((used)) static int FUNC_28(int VAR_18, int VAR_19,
                                int VAR_20)
{
    SSL_CTX *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
    SSL *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
    SSL *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);

    SSL *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);

    SSL_SESSION *VAR_29 = ((void*)0), *VAR_30 = ((void*)0);
    int VAR_31 = 0, VAR_32 = 1;

    VAR_13 = VAR_16 = 0;


    if (VAR_18 == VAR_7)
        VAR_32 = 2;

    if (!FUNC_21(FUNC_25(FUNC_23(), FUNC_22(),
                                       VAR_8, 0,
                                       &VAR_21, &VAR_22, VAR_9, VAR_15)))
        return 0;





    FUNC_7(VAR_22, VAR_18);
    FUNC_6(VAR_22, VAR_18);


    if (VAR_20) {
        FUNC_4(VAR_22, VAR_14);
        FUNC_5(VAR_22, VAR_17);
    }
    if (VAR_19) {

        FUNC_9(VAR_22, VAR_2);
    } else {
        FUNC_9(VAR_22,
                                       VAR_2
                                       | VAR_3);
    }

    if (!FUNC_21(FUNC_26(VAR_21, VAR_22, &VAR_23, &VAR_24,
                                      ((void*)0), ((void*)0)))
            || !FUNC_21(FUNC_24(VAR_23, VAR_24,
                                                VAR_0))
            || !FUNC_19(VAR_29 = FUNC_13(VAR_24)))
        goto end;


    if (VAR_19 && !FUNC_17(FUNC_0(VAR_22, VAR_29)))
        goto end;
    if (VAR_20
            && (!FUNC_18(VAR_13, VAR_32)

                || !FUNC_18(VAR_16, 0)))
        goto end;

    VAR_13 = VAR_16 = 0;
    if (!FUNC_21(FUNC_26(VAR_21, VAR_22, &VAR_25,
                                      &VAR_26, ((void*)0), ((void*)0)))
            || !FUNC_21(FUNC_16(VAR_26, VAR_29))
            || !FUNC_21(FUNC_24(VAR_25, VAR_26,
                                                VAR_0))
            || !FUNC_21(FUNC_15(VAR_26)))
        goto end;

    if (VAR_18 == VAR_7) {





        if (VAR_20
                && (!FUNC_18(VAR_13, 1)
                    || !FUNC_18(VAR_16, 1)))
            goto end;
    } else {




        if (VAR_20
                && (!FUNC_18(VAR_13, 0)
                    || !FUNC_18(VAR_16, 0)))
            goto end;
    }

    FUNC_11(VAR_29);
    if (!FUNC_19(VAR_29 = FUNC_13(VAR_26)))
        goto end;
    FUNC_27(VAR_25, VAR_26);
    VAR_25 = VAR_26 = ((void*)0);

    VAR_13 = VAR_16 = 0;
    if (!FUNC_21(FUNC_26(VAR_21, VAR_22, &VAR_25,
                                      &VAR_26, ((void*)0), ((void*)0)))
            || !FUNC_21(FUNC_24(VAR_25, VAR_26,
                                                VAR_0)))
        goto end;

    if (!FUNC_19(VAR_30 = FUNC_13(VAR_26)))
        goto end;

    if (VAR_20
            && (!FUNC_18(VAR_13, VAR_32)
                || !FUNC_18(VAR_16, 0)))
        goto end;

    VAR_13 = VAR_16 = 0;




    if (!FUNC_21(FUNC_16(VAR_26, VAR_29)))
        goto end;
    if (VAR_20
            && (!FUNC_18(VAR_13, 0) || !FUNC_18(VAR_16, 1)))
        goto end;
    if (!FUNC_20(FUNC_14(VAR_26), VAR_29))
        goto end;

    if (VAR_19) {

        if (!FUNC_21(FUNC_0(VAR_22, VAR_30))
                || !FUNC_21(FUNC_2(VAR_22, VAR_30)))
            goto end;
    }

    VAR_13 = VAR_16 = 0;

    if (!FUNC_17(FUNC_2(VAR_22, VAR_30)))
        goto end;

    if (VAR_20
            && (!FUNC_18(VAR_13, 0) || !FUNC_18(VAR_16, 1)))
        goto end;


    VAR_13 = VAR_16 = 0;

    FUNC_6(VAR_21, VAR_5);
    if (!FUNC_21(FUNC_26(VAR_21, VAR_22, &VAR_27,
                                      &VAR_28, ((void*)0), ((void*)0)))
            || !FUNC_21(FUNC_16(VAR_28, VAR_29))

            || !FUNC_17(FUNC_24(VAR_27, VAR_28,
                                                 VAR_0)))
        goto end;


    if (VAR_20
            && (!FUNC_18(VAR_13, 0) || !FUNC_18(VAR_16, 1)))
        goto end;


    if (VAR_19 && !FUNC_21(FUNC_0(VAR_22, VAR_30)))
        goto end;



    if (VAR_20) {
        FUNC_4(VAR_22, ((void*)0));
        FUNC_5(VAR_22, ((void*)0));
        FUNC_4(VAR_21, VAR_14);
        FUNC_5(VAR_21, VAR_17);
        FUNC_3(VAR_21, VAR_12);
        VAR_11 = ((void*)0);
    }

    FUNC_9(VAR_22, 0);

    if (!VAR_19)
        FUNC_9(VAR_21,
                                       VAR_4
                                       | VAR_3);

    FUNC_12(VAR_23);
    FUNC_12(VAR_24);
    VAR_23 = VAR_24 = ((void*)0);
    FUNC_12(VAR_25);
    FUNC_12(VAR_26);
    VAR_25 = VAR_26 = ((void*)0);
    FUNC_11(VAR_29);
    VAR_29 = ((void*)0);
    FUNC_11(VAR_30);
    VAR_30 = ((void*)0);

    FUNC_6(VAR_21, VAR_18);
    if (VAR_18 == VAR_6)
        FUNC_8(VAR_21, VAR_1);
    VAR_13 = VAR_16 = VAR_10 = 0;
    if (!FUNC_21(FUNC_26(VAR_21, VAR_22, &VAR_23, &VAR_24,
                                      ((void*)0), ((void*)0)))
            || !FUNC_21(FUNC_24(VAR_23, VAR_24,
                                                VAR_0))
            || !FUNC_19(VAR_29 = FUNC_13(VAR_24))
            || !FUNC_19(VAR_30 = FUNC_13(VAR_23)))
        goto end;

    if (VAR_19) {
        if (VAR_18 == VAR_7 && !VAR_20) {






            if (!FUNC_17(FUNC_2(VAR_21, VAR_30)))
                goto end;
        } else {

            if (!FUNC_17(FUNC_0(VAR_21, VAR_30)))
                goto end;
        }
    }

    if (VAR_20) {
        SSL_SESSION *VAR_33 = VAR_30;

        if (!FUNC_18(VAR_13, VAR_32)
                || !FUNC_18(VAR_16, 0)
                || !FUNC_18(VAR_10, 0))
            goto end;





        if (VAR_19 && VAR_18 != VAR_7) {
            if (!FUNC_19(VAR_33 = FUNC_10(VAR_30))
                    || !FUNC_21(FUNC_2(VAR_21, VAR_30)))
                goto end;
            FUNC_11(VAR_30);
        }
        VAR_30 = VAR_33;
    }

    VAR_13 = VAR_16 = VAR_10 = 0;
    VAR_11 = VAR_30;
    if (!FUNC_21(FUNC_26(VAR_21, VAR_22, &VAR_25,
                                      &VAR_26, ((void*)0), ((void*)0)))
            || !FUNC_21(FUNC_16(VAR_26, VAR_29))
            || !FUNC_21(FUNC_24(VAR_25, VAR_26,
                                                VAR_0))
            || !FUNC_21(FUNC_15(VAR_26)))
        goto end;

    if (VAR_20) {
        if (!FUNC_18(VAR_16, 0))
            goto end;

        if (VAR_18 == VAR_7) {
            if (!FUNC_18(VAR_13, 1)
                    || !FUNC_18(VAR_10, 0))
                goto end;
        } else {
            if (!FUNC_18(VAR_13, 0)
                    || !FUNC_18(VAR_10, 1))
                goto end;
        }
    }

    VAR_31 = 1;

 end:
    FUNC_12(VAR_23);
    FUNC_12(VAR_24);
    FUNC_12(VAR_25);
    FUNC_12(VAR_26);

    FUNC_12(VAR_27);
    FUNC_12(VAR_28);

    FUNC_11(VAR_29);
    FUNC_11(VAR_30);
    FUNC_1(VAR_21);
    FUNC_1(VAR_22);

    return VAR_31;
}
