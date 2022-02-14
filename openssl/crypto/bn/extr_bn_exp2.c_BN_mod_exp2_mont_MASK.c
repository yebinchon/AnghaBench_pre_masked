
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {int* d; scalar_t__ neg; } ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef TYPE_1__ const BIGNUM ;


 int FUNC_0 (int *) ;
 TYPE_1__ const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,TYPE_1__ const*,int *) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__ const*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_10 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 int FUNC_11 (TYPE_1__ const*) ;
 int FUNC_12 (TYPE_1__ const*) ;
 int FUNC_13 (TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 scalar_t__ FUNC_14 (TYPE_1__ const*,TYPE_1__ const*) ;
 TYPE_1__ const* FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (TYPE_1__ const*) ;
 int FUNC_18 (int ,int ) ;
 int VAR_2 ;
 int FUNC_19 (TYPE_1__ const*) ;

int FUNC_20(BIGNUM *VAR_3, const BIGNUM *VAR_4, const BIGNUM *VAR_5,
                     const BIGNUM *VAR_6, const BIGNUM *VAR_7, const BIGNUM *VAR_8,
                     BN_CTX *VAR_9, BN_MONT_CTX *VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 =
        0, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    int VAR_24 = 1;
    BIGNUM *VAR_25, *VAR_26;
    const BIGNUM *VAR_27;

    BIGNUM *VAR_28[VAR_2], *VAR_29[VAR_2];
    BN_MONT_CTX *VAR_30 = ((void*)0);

    FUNC_19(VAR_4);
    FUNC_19(VAR_5);
    FUNC_19(VAR_6);
    FUNC_19(VAR_7);
    FUNC_19(VAR_8);

    if (!(VAR_8->d[0] & 1)) {
        FUNC_18(VAR_0, VAR_1);
        return 0;
    }
    VAR_15 = FUNC_11(VAR_5);
    VAR_16 = FUNC_11(VAR_7);
    if ((VAR_15 == 0) && (VAR_16 == 0)) {
        VAR_17 = FUNC_12(VAR_3);
        return VAR_17;
    }

    VAR_13 = (VAR_15 > VAR_16) ? VAR_15 : VAR_16;

    FUNC_2(VAR_9);
    VAR_25 = FUNC_1(VAR_9);
    VAR_26 = FUNC_1(VAR_9);
    VAR_28[0] = FUNC_1(VAR_9);
    VAR_29[0] = FUNC_1(VAR_9);
    if (VAR_29[0] == ((void*)0))
        goto err;

    if (VAR_10 != ((void*)0))
        VAR_30 = VAR_10;
    else {
        if ((VAR_30 = FUNC_4()) == ((void*)0))
            goto err;
        if (!FUNC_5(VAR_30, VAR_8, VAR_9))
            goto err;
    }

    VAR_20 = FUNC_16(VAR_15);
    VAR_21 = FUNC_16(VAR_16);




    if (VAR_4->neg || FUNC_14(VAR_4, VAR_8) >= 0) {
        if (!FUNC_9(VAR_28[0], VAR_4, VAR_8, VAR_9))
            goto err;
        VAR_27 = VAR_28[0];
    } else
        VAR_27 = VAR_4;
    if (FUNC_8(VAR_27)) {
        FUNC_17(VAR_3);
        VAR_17 = 1;
        goto err;
    }

    if (!FUNC_13(VAR_28[0], VAR_27, VAR_30, VAR_9))
        goto err;
    if (VAR_20 > 1) {
        if (!FUNC_10(VAR_25, VAR_28[0], VAR_28[0], VAR_30, VAR_9))
            goto err;

        VAR_12 = 1 << (VAR_20 - 1);
        for (VAR_11 = 1; VAR_11 < VAR_12; VAR_11++) {
            if (((VAR_28[VAR_11] = FUNC_1(VAR_9)) == ((void*)0)) ||
                !FUNC_10(VAR_28[VAR_11], VAR_28[VAR_11 - 1], VAR_25, VAR_30, VAR_9))
                goto err;
        }
    }




    if (VAR_6->neg || FUNC_14(VAR_6, VAR_8) >= 0) {
        if (!FUNC_9(VAR_29[0], VAR_6, VAR_8, VAR_9))
            goto err;
        VAR_27 = VAR_29[0];
    } else
        VAR_27 = VAR_6;
    if (FUNC_8(VAR_27)) {
        FUNC_17(VAR_3);
        VAR_17 = 1;
        goto err;
    }
    if (!FUNC_13(VAR_29[0], VAR_27, VAR_30, VAR_9))
        goto err;
    if (VAR_21 > 1) {
        if (!FUNC_10(VAR_25, VAR_29[0], VAR_29[0], VAR_30, VAR_9))
            goto err;

        VAR_12 = 1 << (VAR_21 - 1);
        for (VAR_11 = 1; VAR_11 < VAR_12; VAR_11++) {
            if (((VAR_29[VAR_11] = FUNC_1(VAR_9)) == ((void*)0)) ||
                !FUNC_10(VAR_29[VAR_11], VAR_29[VAR_11 - 1], VAR_25, VAR_30, VAR_9))
                goto err;
        }
    }


    VAR_24 = 1;
    VAR_22 = 0;
    VAR_23 = 0;
    VAR_18 = 0;

    VAR_19 = 0;


    if (!FUNC_13(VAR_26, FUNC_15(), VAR_30, VAR_9))
        goto err;
    for (VAR_14 = VAR_13 - 1; VAR_14 >= 0; VAR_14--) {
        if (!VAR_24) {
            if (!FUNC_10(VAR_26, VAR_26, VAR_26, VAR_30, VAR_9))
                goto err;
        }

        if (!VAR_22)
            if (FUNC_7(VAR_5, VAR_14)) {



                VAR_11 = VAR_14 - VAR_20 + 1;
                while (!FUNC_7(VAR_5, VAR_11))
                    VAR_11++;
                VAR_18 = VAR_11;
                VAR_22 = 1;
                for (VAR_11 = VAR_14 - 1; VAR_11 >= VAR_18; VAR_11--) {
                    VAR_22 <<= 1;
                    if (FUNC_7(VAR_5, VAR_11))
                        VAR_22++;
                }
            }

        if (!VAR_23)
            if (FUNC_7(VAR_7, VAR_14)) {



                VAR_11 = VAR_14 - VAR_21 + 1;
                while (!FUNC_7(VAR_7, VAR_11))
                    VAR_11++;
                VAR_19 = VAR_11;
                VAR_23 = 1;
                for (VAR_11 = VAR_14 - 1; VAR_11 >= VAR_19; VAR_11--) {
                    VAR_23 <<= 1;
                    if (FUNC_7(VAR_7, VAR_11))
                        VAR_23++;
                }
            }

        if (VAR_22 && VAR_14 == VAR_18) {

            if (!FUNC_10(VAR_26, VAR_26, VAR_28[VAR_22 >> 1], VAR_30, VAR_9))
                goto err;
            VAR_22 = 0;
            VAR_24 = 0;
        }

        if (VAR_23 && VAR_14 == VAR_19) {

            if (!FUNC_10(VAR_26, VAR_26, VAR_29[VAR_23 >> 1], VAR_30, VAR_9))
                goto err;
            VAR_23 = 0;
            VAR_24 = 0;
        }
    }
    if (!FUNC_6(VAR_3, VAR_26, VAR_30, VAR_9))
        goto err;
    VAR_17 = 1;
 err:
    if (VAR_10 == ((void*)0))
        FUNC_3(VAR_30);
    FUNC_0(VAR_9);
    FUNC_19(VAR_3);
    return VAR_17;
}
