
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const EC_POINT ;
typedef int EC_GROUP ;
typedef int const BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int const*) ;
 int const* FUNC_1 () ;
 int FUNC_2 (int const*,int const*,int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int const*,int const*,int const*) ;
 int const* FUNC_5 () ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*,int ) ;
 int FUNC_8 (int const*,int) ;
 int FUNC_9 (int const*,int const*,int const*) ;
 int const* FUNC_10 () ;
 int const* FUNC_11 (int *) ;
 int FUNC_12 (int *,int const*,int const*) ;
 int FUNC_13 (int *,int const*) ;
 int FUNC_14 (int *,int const*,int const*,int const*,int const*) ;
 int FUNC_15 (int *,int const*,int const*,int const*) ;
 int FUNC_16 (int const*,int const*) ;
 int FUNC_17 (int *,int const*,int const*,int const*) ;
 int FUNC_18 (int const*) ;
 int FUNC_19 (int *,int const*,int const*) ;
 int FUNC_20 (int *,int const*) ;
 int FUNC_21 (int *,int const*,int const*,int const*,int const*,int const*) ;
 int const* FUNC_22 (int *) ;
 int FUNC_23 (int *,int const*,int *,int,int const**,int const**,int const*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int const*) ;
 int FUNC_28 (int ) ;

__attribute__((used)) static int FUNC_29(EC_GROUP *VAR_0)
{
    BIGNUM *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    EC_POINT *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    const EC_POINT *VAR_8 = ((void*)0);
    BN_CTX *VAR_9 = ((void*)0);
    int VAR_10 = 0, VAR_11 = 0;

    if (!FUNC_27(VAR_1 = FUNC_5())
        || !FUNC_27(VAR_2 = FUNC_5())
        || !FUNC_27(VAR_3 = FUNC_5())
        || !FUNC_27(VAR_9 = FUNC_1())
        || !FUNC_27(VAR_8 = FUNC_11(VAR_0))
        || !FUNC_27(VAR_4 = FUNC_22(VAR_0))
        || !FUNC_27(VAR_5 = FUNC_22(VAR_0))
        || !FUNC_27(VAR_6 = FUNC_22(VAR_0))
        || !FUNC_27(VAR_7 = FUNC_22(VAR_0)))
        goto err;

    if (!FUNC_28(FUNC_12(VAR_0, VAR_3, VAR_9))
        || !FUNC_28(FUNC_21(VAR_0, VAR_5, VAR_3, ((void*)0), ((void*)0), VAR_9))
        || !FUNC_28(FUNC_20(VAR_0, VAR_5))
        || !FUNC_28(FUNC_13(VAR_0, VAR_9))
        || !FUNC_28(FUNC_21(VAR_0, VAR_5, VAR_3, ((void*)0), ((void*)0), VAR_9))
        || !FUNC_28(FUNC_20(VAR_0, VAR_5))
        || !FUNC_28(FUNC_16(VAR_4, VAR_8))
        || !FUNC_28(FUNC_6(VAR_1))
        || !FUNC_28(FUNC_21(VAR_0, VAR_5, VAR_1, ((void*)0), ((void*)0), VAR_9))
        || !FUNC_26(0, FUNC_15(VAR_0, VAR_5, VAR_4, VAR_9))
        || !FUNC_28(FUNC_9(VAR_1, VAR_3, VAR_1))
        || !FUNC_28(FUNC_21(VAR_0, VAR_5, VAR_1, ((void*)0), ((void*)0), VAR_9))
        || !FUNC_28(FUNC_19(VAR_0, VAR_5, VAR_9))
        || !FUNC_26(0, FUNC_15(VAR_0, VAR_5, VAR_4, VAR_9)))
        goto err;

    for (VAR_10 = 1; VAR_10 <= 2; VAR_10++) {
        const BIGNUM *VAR_12[6];
        const EC_POINT *VAR_13[6];

        if (!FUNC_28(FUNC_8(VAR_1, VAR_10))




            || !FUNC_28(FUNC_21(VAR_0, VAR_4, VAR_1, ((void*)0), ((void*)0), VAR_9))
            || (VAR_10 == 1 && !FUNC_26(0, FUNC_15(VAR_0, VAR_4, VAR_8, VAR_9)))
            || !FUNC_28(FUNC_6(VAR_1))

            || !FUNC_28(FUNC_9(VAR_1, VAR_1, VAR_3))
            || !FUNC_28(FUNC_21(VAR_0, VAR_5, ((void*)0), VAR_4, VAR_1, VAR_9))
            || !FUNC_26(0, FUNC_15(VAR_0, VAR_5, VAR_4, VAR_9))


            || !FUNC_28(FUNC_2(VAR_2, VAR_3, FUNC_10()))
            || !FUNC_28(FUNC_21(VAR_0, VAR_5, ((void*)0), VAR_4, VAR_2, VAR_9))
            || !FUNC_26(0, FUNC_15(VAR_0, VAR_5, VAR_4, VAR_9))


            || !FUNC_28(FUNC_4(VAR_2, VAR_1, VAR_2, VAR_9))
            || !FUNC_28(FUNC_21(VAR_0, VAR_5, ((void*)0), VAR_4, VAR_2, VAR_9))
            || !FUNC_26(0, FUNC_15(VAR_0, VAR_5, VAR_4, VAR_9)))
            goto err;


        FUNC_7(VAR_2, 0);
        if (!FUNC_28(FUNC_21(VAR_0, VAR_5, ((void*)0), VAR_4, VAR_2, VAR_9))

            || !FUNC_28(FUNC_14(VAR_0, VAR_5, VAR_5, VAR_4, VAR_9))
            || !FUNC_28(FUNC_20(VAR_0, VAR_5))


            || !FUNC_24(FUNC_20(VAR_0, VAR_4)))
            goto err;

        VAR_12[0] = VAR_12[1] = FUNC_10();
        VAR_13[0] = VAR_13[1] = VAR_4;

        if (!FUNC_28(FUNC_23(VAR_0, VAR_6, ((void*)0), 2, VAR_13, VAR_12, VAR_9))
            || !FUNC_28(FUNC_17(VAR_0, VAR_7, VAR_13[0], VAR_9))
            || !FUNC_26(0, FUNC_15(VAR_0, VAR_6, VAR_7, VAR_9)))
            goto err;

        VAR_12[0] = VAR_1;
        VAR_13[0] = VAR_5;
        VAR_12[1] = VAR_2;
        VAR_13[1] = VAR_4;
        VAR_12[2] = VAR_1;
        VAR_13[2] = VAR_5;
        VAR_12[3] = VAR_2;
        VAR_13[3] = VAR_5;
        VAR_12[4] = VAR_1;
        VAR_13[4] = VAR_4;
        VAR_12[5] = VAR_2;
        VAR_13[5] = VAR_5;
        if (!FUNC_28(FUNC_23(VAR_0, VAR_4, ((void*)0), 6, VAR_13, VAR_12, VAR_9))
            || !FUNC_28(FUNC_20(VAR_0, VAR_4)))
            goto err;
    }

    VAR_11 = 1;
err:
    if (VAR_11 == 0 && VAR_10 != 0)
        FUNC_25(VAR_10 == 1 ? "allowing precomputation" :
                           "without precomputation");
    FUNC_18(VAR_4);
    FUNC_18(VAR_5);
    FUNC_18(VAR_6);
    FUNC_18(VAR_7);
    FUNC_3(VAR_1);
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    FUNC_0(VAR_9);
    return VAR_11;
}
