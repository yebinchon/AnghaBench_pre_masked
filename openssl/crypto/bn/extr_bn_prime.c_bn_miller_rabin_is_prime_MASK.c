
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_MONT_CTX ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int const*,int) ;
 int FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*,int const*) ;
 scalar_t__ FUNC_10 (int const*,int const*) ;
 int FUNC_11 (int const*,int const*,int const*,int *) ;
 int FUNC_12 (int const*,int) ;
 scalar_t__ FUNC_13 (int const*) ;
 int FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const*) ;
 int FUNC_17 (int const*,int const*,int const*,int const*,int *,int *) ;
 int FUNC_18 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_19 (int const*) ;
 int FUNC_20 (int const*,int const*,int *) ;
 int FUNC_21 (int const*,int const*,int) ;
 scalar_t__ FUNC_22 (int const*,int) ;
 int FUNC_23 (int ) ;

int FUNC_24(const BIGNUM *VAR_4, int VAR_5, BN_CTX *VAR_6,
                             BN_GENCB *VAR_7, int VAR_8, int *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13 = 0;
    BIGNUM *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;
    BN_MONT_CTX *VAR_21 = ((void*)0);


    if (!FUNC_14(VAR_4))
        return 0;

    FUNC_2(VAR_6);
    VAR_14 = FUNC_1(VAR_6);
    VAR_15 = FUNC_1(VAR_6);
    VAR_16 = FUNC_1(VAR_6);
    VAR_17 = FUNC_1(VAR_6);
    VAR_18 = FUNC_1(VAR_6);
    VAR_19 = FUNC_1(VAR_6);
    VAR_20 = FUNC_1(VAR_6);

    if (!(VAR_20 != ((void*)0)

            && FUNC_10(VAR_15, VAR_4)
            && FUNC_22(VAR_15, 1)

            && FUNC_10(VAR_16, VAR_4)
            && FUNC_22(VAR_16, 3)))
        goto err;


    if (FUNC_16(VAR_16) || FUNC_13(VAR_16))
        goto err;


    VAR_12 = 1;
    while (!FUNC_12(VAR_15, VAR_12))
        VAR_12++;

    if (!FUNC_21(VAR_18, VAR_15, VAR_12))
        goto err;


    VAR_21 = FUNC_5();
    if (VAR_21 == ((void*)0) || !FUNC_6(VAR_21, VAR_4, VAR_6))
        goto err;

    if (VAR_5 == 0)
        VAR_5 = FUNC_23(FUNC_19(VAR_4));


    for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {

        if (!FUNC_20(VAR_20, VAR_16, VAR_6)
                || !FUNC_7(VAR_20, 2))
            goto err;

        if (VAR_8) {

            if (!FUNC_11(VAR_14, VAR_20, VAR_4, VAR_6))
                goto err;

            if (!FUNC_15(VAR_14)) {
                *VAR_9 = VAR_2;
                VAR_13 = 1;
                goto err;
            }
        }

        if (!FUNC_17(VAR_19, VAR_20, VAR_18, VAR_4, VAR_6, VAR_21))
            goto err;

        if (FUNC_15(VAR_19) || FUNC_9(VAR_19, VAR_15) == 0)
            goto outer_loop;

        for (VAR_11 = 1; VAR_11 < VAR_12 ; ++VAR_11) {

            if (!FUNC_10(VAR_17, VAR_19) || !FUNC_18(VAR_19, VAR_17, VAR_17, VAR_4, VAR_6))
                goto err;

            if (FUNC_9(VAR_19, VAR_15) == 0)
                goto outer_loop;

            if (FUNC_15(VAR_19))
                goto composite;
        }


        if (!FUNC_10(VAR_17, VAR_19) || !FUNC_18(VAR_19, VAR_17, VAR_17, VAR_4, VAR_6))
            goto err;

        if (FUNC_15(VAR_19))
            goto composite;

        if (!FUNC_10(VAR_17, VAR_19))
            goto err;
composite:
        if (VAR_8) {

            if (!FUNC_22(VAR_17, 1) || !FUNC_11(VAR_14, VAR_17, VAR_4, VAR_6))
                goto err;

            if (FUNC_15(VAR_14))
                *VAR_9 = VAR_1;
            else
                *VAR_9 = VAR_2;
        } else {
            *VAR_9 = VAR_0;
        }
        VAR_13 = 1;
        goto err;
outer_loop: ;

        if (!FUNC_3(VAR_7, 1, VAR_10))
            goto err;
    }

    *VAR_9 = VAR_3;
    VAR_13 = 1;
err:
    FUNC_8(VAR_14);
    FUNC_8(VAR_15);
    FUNC_8(VAR_16);
    FUNC_8(VAR_17);
    FUNC_8(VAR_18);
    FUNC_8(VAR_19);
    FUNC_8(VAR_20);
    FUNC_0(VAR_6);
    FUNC_4(VAR_21);
    return VAR_13;
}
