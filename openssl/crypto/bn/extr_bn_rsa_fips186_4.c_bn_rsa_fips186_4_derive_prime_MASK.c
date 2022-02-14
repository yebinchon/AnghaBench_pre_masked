
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int const*,int const*,int const*) ;
 scalar_t__ FUNC_5 (int const*,int *,int *) ;
 int FUNC_6 (int const*) ;
 int * FUNC_7 (int const*,int const*) ;
 scalar_t__ FUNC_8 (int const*,int const*,int const*,int *) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 int FUNC_11 (int const*,int const*,int) ;
 scalar_t__ FUNC_12 (int const*,int const*) ;
 scalar_t__ FUNC_13 (int const*,int const*,int const*,int *) ;
 int FUNC_14 (int const*,int const*,int const*,int const*,int *) ;
 scalar_t__ FUNC_15 (int const*,int const*,int const*,int *) ;
 int FUNC_16 (int const*) ;
 int FUNC_17 (int const*,int const*,int *) ;
 scalar_t__ FUNC_18 (int const*,int const*,int const*) ;
 int FUNC_19 (int const*,int) ;
 int const* FUNC_20 () ;
 int const VAR_0 ;

int FUNC_21(BIGNUM *VAR_1, BIGNUM *VAR_2, const BIGNUM *VAR_3,
                                  const BIGNUM *VAR_4, const BIGNUM *VAR_5, int VAR_6,
                                  const BIGNUM *VAR_7, BN_CTX *VAR_8, BN_GENCB *VAR_9)
{
    int VAR_10 = 0;
    int VAR_11, VAR_12;
    int VAR_13 = VAR_6 >> 1;
    BIGNUM *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
    BIGNUM *VAR_19, *VAR_20;

    FUNC_2(VAR_8);

    VAR_19 = FUNC_1(VAR_8);
    VAR_20 = FUNC_1(VAR_8);
    VAR_15 = FUNC_1(VAR_8);
    VAR_14 = FUNC_1(VAR_8);
    VAR_16 = FUNC_1(VAR_8);
    VAR_17 = FUNC_1(VAR_8);
    VAR_18 = FUNC_1(VAR_8);
    if (VAR_18 == ((void*)0))
        goto err;

    if (VAR_3 != ((void*)0) && FUNC_7(VAR_2, VAR_3) == ((void*)0))
        goto err;
    if (VAR_3 == ((void*)0)) {
        if (VAR_13 < FUNC_16(&VAR_0))
            goto err;
        if (!FUNC_11(VAR_19, &VAR_0, VAR_13 - FUNC_16(&VAR_0))
            || !FUNC_11(VAR_20, FUNC_20(), VAR_13)
            || !FUNC_18(VAR_20, VAR_20, VAR_19))
            goto err;
    }

    if (!(FUNC_12(VAR_18, VAR_4)

            && FUNC_8(VAR_14, VAR_18, VAR_5, VAR_8)
            && FUNC_10(VAR_14)

            && FUNC_13(VAR_15, VAR_5, VAR_18, VAR_8)
            && FUNC_15(VAR_15, VAR_15, VAR_5, VAR_8)
            && FUNC_13(VAR_14, VAR_18, VAR_5, VAR_8)
            && FUNC_15(VAR_14, VAR_14, VAR_18, VAR_8)
            && FUNC_18(VAR_15, VAR_15, VAR_14)

            && FUNC_15(VAR_16, VAR_18, VAR_5, VAR_8)))
        goto err;

    if (FUNC_9(VAR_15) && !FUNC_4(VAR_15, VAR_15, VAR_16))
        goto err;

    VAR_12 = 5 * VAR_13;
    for (;;) {
        if (VAR_3 == ((void*)0)) {




            if (!FUNC_17(VAR_2, VAR_20, VAR_8) || !FUNC_4(VAR_2, VAR_2, VAR_19))
                goto end;
        }

        if (!FUNC_14(VAR_1, VAR_15, VAR_2, VAR_16, VAR_8) || !FUNC_4(VAR_1, VAR_1, VAR_2))
            goto err;

        VAR_11 = 0;
        for (;;) {

            if (FUNC_16(VAR_1) > VAR_13) {
                if (VAR_3 == ((void*)0))
                    break;
                else
                    goto err;
            }
            FUNC_3(VAR_9, 0, 2);


            if (FUNC_7(VAR_17, VAR_1) == ((void*)0)
                    || !FUNC_19(VAR_17, 1)
                    || !FUNC_8(VAR_14, VAR_17, VAR_7, VAR_8))
                goto err;
            if (FUNC_10(VAR_14) && FUNC_5(VAR_1, VAR_8, VAR_9))
                goto end;

            if (++VAR_11 >= VAR_12 || !FUNC_4(VAR_1, VAR_1, VAR_16))
                goto err;
        }
    }
end:
    VAR_10 = 1;
    FUNC_3(VAR_9, 3, 0);
err:
    FUNC_6(VAR_17);
    FUNC_0(VAR_8);
    return VAR_10;
}
