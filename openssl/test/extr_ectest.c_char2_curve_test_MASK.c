
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_curve_test {int degree; int name; int cof; int order; int y; int y_bit; int x; int b; int a; int p; } ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int **,int ) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,scalar_t__,int ,int ) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int * FUNC_10 () ;
 int FUNC_11 () ;
 int * FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int ) ;
 int * FUNC_17 (int *,int *,int *,int *,int *) ;
 int * FUNC_18 (int *,int *,int *,int *) ;
 int * FUNC_19 (int *,int *,int *,int *,int *) ;
 int FUNC_20 (int *,int *,int *,int *) ;
 int * FUNC_21 (int *,int *) ;
 int * FUNC_22 (int *,int *,int *,int *) ;
 int FUNC_23 (int *) ;
 int * FUNC_24 (int *,int *,int *,int *,int *) ;
 int * FUNC_25 (int *,int *,int *) ;
 int * FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,int *,int *) ;
 int * FUNC_28 (int *) ;
 int * FUNC_29 (int *,int *,int *,int *,int *) ;
 int * FUNC_30 (int *,int *,int *,int ,int *) ;
 int * FUNC_31 (int *,int *,int *,int,int const**,int const**,int *) ;
 int FUNC_32 (struct c2_curve_test*) ;
 int FUNC_33 (int *,int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (char*,int ) ;
 int FUNC_37 (int ,int ) ;
 int FUNC_38 (int ,int ) ;
 int FUNC_39 (char*) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (int *) ;
 struct c2_curve_test* VAR_0 ;
 int FUNC_42 (int *) ;
 int FUNC_43 (char*,int *) ;

__attribute__((used)) static int FUNC_44(int VAR_1)
{
    int VAR_2 = 0;
    BN_CTX *VAR_3 = ((void*)0);
    BIGNUM *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    EC_GROUP *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    EC_POINT *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    const EC_POINT *VAR_17[3];
    const BIGNUM *VAR_18[3];
    struct c2_curve_test *const VAR_19 = VAR_0 + VAR_1;

    if (!FUNC_40(VAR_3 = FUNC_1())
        || !FUNC_40(VAR_4 = FUNC_5())
        || !FUNC_40(VAR_5 = FUNC_5())
        || !FUNC_40(VAR_6 = FUNC_5())
        || !FUNC_40(VAR_7 = FUNC_5())
        || !FUNC_40(VAR_8 = FUNC_5())
        || !FUNC_40(VAR_9 = FUNC_5())
        || !FUNC_40(VAR_11 = FUNC_5())
        || !FUNC_41(FUNC_4(&VAR_4, VAR_19->p))
        || !FUNC_41(FUNC_4(&VAR_5, VAR_19->a))
        || !FUNC_41(FUNC_4(&VAR_6, VAR_19->b))
        || !FUNC_41(VAR_12 = FUNC_16(FUNC_11()))
        || !FUNC_41(FUNC_17(VAR_12, VAR_4, VAR_5, VAR_6, VAR_3))
        || !FUNC_40(VAR_14 = FUNC_28(VAR_12))
        || !FUNC_40(VAR_15 = FUNC_28(VAR_12))
        || !FUNC_40(VAR_16 = FUNC_28(VAR_12))
        || !FUNC_41(FUNC_4(&VAR_7, VAR_19->x))
        || !FUNC_41(FUNC_4(&VAR_8, VAR_19->y))
        || !FUNC_41(FUNC_2(VAR_11, VAR_8, FUNC_10())))
        goto err;
    if (!FUNC_35(FUNC_29(VAR_12, VAR_14, VAR_7, VAR_11, VAR_3))
        || !FUNC_41(FUNC_29(VAR_12, VAR_14, VAR_7, VAR_8, VAR_3))
        || !FUNC_38(FUNC_27(VAR_12, VAR_14, VAR_3), 0)
        || !FUNC_41(FUNC_4(&VAR_9, VAR_19->order))
        || !FUNC_41(FUNC_4(&VAR_10, VAR_19->cof))
        || !FUNC_41(FUNC_18(VAR_12, VAR_14, VAR_9, VAR_10)))
        goto err;
    FUNC_36("%s -- Generator:", VAR_19->name);
    FUNC_43("x", VAR_7);
    FUNC_43("y", VAR_8);


    if (!FUNC_37(FUNC_14(VAR_12), VAR_19->degree)
        || !FUNC_42(VAR_12)
        || !FUNC_40(VAR_13 = FUNC_16(FUNC_15(VAR_12)))
        || !FUNC_41(FUNC_12(VAR_13, VAR_12)))
        goto err;


    if (VAR_1 == FUNC_32(VAR_0) - 1) {
        if (!FUNC_41(FUNC_29(VAR_12, VAR_14, VAR_7, VAR_8, VAR_3))
            || !FUNC_41(FUNC_21(VAR_15, VAR_14))
            || !FUNC_35(FUNC_26(VAR_12, VAR_15))
            || !FUNC_41(FUNC_22(VAR_12, VAR_14, VAR_14, VAR_3))
            || !FUNC_38(FUNC_27(VAR_12, VAR_14, VAR_3), 0)
            || !FUNC_41(FUNC_25(VAR_12, VAR_15, VAR_3))
            || !FUNC_41(FUNC_19(VAR_12, VAR_16, VAR_14, VAR_15, VAR_3))
            || !FUNC_41(FUNC_19(VAR_12, VAR_16, VAR_16, VAR_15, VAR_3))
            || !FUNC_41(FUNC_26(VAR_12, VAR_16))
            || !FUNC_35(FUNC_26(VAR_12, VAR_15)))
            goto err;

        VAR_17[0] = VAR_15;
        VAR_17[1] = VAR_15;
        VAR_17[2] = VAR_15;

        if (!FUNC_41(FUNC_2(VAR_8, VAR_9, FUNC_10()))
            || !FUNC_34(VAR_8)
            || !FUNC_41(FUNC_8(VAR_8, VAR_8)))
            goto err;
        VAR_18[0] = VAR_8;
        VAR_18[1] = VAR_8;

        FUNC_39("combined multiplication ...");


        if (!FUNC_41(FUNC_31(VAR_12, VAR_14, ((void*)0), 2, VAR_17, VAR_18, VAR_3))
            || !FUNC_41(FUNC_31(VAR_12, VAR_16, VAR_9, 2, VAR_17, VAR_18, VAR_3))
            || !FUNC_37(0, FUNC_20(VAR_12, VAR_14, VAR_16, VAR_3))
            || !FUNC_37(0, FUNC_20(VAR_12, VAR_16, VAR_15, VAR_3)))
            goto err;

        if (!FUNC_41(FUNC_7(VAR_8, FUNC_6(VAR_8), 0, 0))
            || !FUNC_41(FUNC_2(VAR_9, VAR_9, VAR_8)))
            goto err;
        FUNC_9(VAR_9, 1);
        VAR_18[0] = VAR_8;
        VAR_18[1] = VAR_9;

        if (!FUNC_41(FUNC_31(VAR_12, VAR_14, ((void*)0), 2, VAR_17, VAR_18, VAR_3))
            || !FUNC_41(FUNC_26(VAR_12, VAR_14)))
            goto err;

        if (!FUNC_41(FUNC_7(VAR_7, FUNC_6(VAR_8) - 1, 0, 0))
            || !FUNC_41(FUNC_2(VAR_9, VAR_7, VAR_8)))
            goto err;
        FUNC_9(VAR_9, 1);
        VAR_18[0] = VAR_7;
        VAR_18[1] = VAR_8;
        VAR_18[2] = VAR_9;

        if (!FUNC_41(FUNC_31(VAR_12, VAR_14, ((void*)0), 3, VAR_17, VAR_18, VAR_3))
            || !FUNC_41(FUNC_26(VAR_12, VAR_14)))
            goto err;;
    }

    VAR_2 = 1;
err:
    FUNC_0(VAR_3);
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    FUNC_3(VAR_7);
    FUNC_3(VAR_8);
    FUNC_3(VAR_9);
    FUNC_3(VAR_11);
    FUNC_3(VAR_10);
    FUNC_23(VAR_14);
    FUNC_23(VAR_15);
    FUNC_23(VAR_16);
    FUNC_13(VAR_12);
    FUNC_13(VAR_13);
    return VAR_2;
}
