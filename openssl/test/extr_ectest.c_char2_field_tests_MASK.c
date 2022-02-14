
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *,int *,int *,int *) ;
 int FUNC_13 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_17 (int *,int *,int *) ;
 scalar_t__ FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *,int *) ;
 int * FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int *,unsigned char*,size_t,int *) ;
 size_t FUNC_22 (int *,int *,int ,unsigned char*,int,int *) ;
 scalar_t__ FUNC_23 (int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_24 (int *,int *,int *,int,int *) ;
 scalar_t__ FUNC_25 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_26 (char*) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (char*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (size_t,int ) ;
 int FUNC_33 (scalar_t__) ;
 int FUNC_34 (char*,int *) ;
 int FUNC_35 (char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_36(void)
{
    BN_CTX *VAR_3 = ((void*)0);
    BIGNUM *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    EC_GROUP *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    EC_POINT *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    BIGNUM *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    unsigned char VAR_17[100];
    size_t VAR_18;
    int VAR_19, VAR_20 = 0;

    if (!FUNC_31(VAR_3 = FUNC_1())
        || !FUNC_31(VAR_4 = FUNC_4())
        || !FUNC_31(VAR_5 = FUNC_4())
        || !FUNC_31(VAR_6 = FUNC_4())
        || !FUNC_33(FUNC_3(&VAR_4, "13"))
        || !FUNC_33(FUNC_3(&VAR_5, "3"))
        || !FUNC_33(FUNC_3(&VAR_6, "1")))
        goto err;

    VAR_7 = FUNC_10(FUNC_5());



    if (!FUNC_31(VAR_7)
        || !FUNC_33(FUNC_11(VAR_7, VAR_4, VAR_5, VAR_6, VAR_3))
        || !FUNC_31(VAR_8 = FUNC_10(FUNC_9(VAR_7)))
        || !FUNC_33(FUNC_6(VAR_8, VAR_7)))
        goto err;
    FUNC_7(VAR_7);
    VAR_7 = VAR_8;
    VAR_8 = ((void*)0);

    if (!FUNC_33(FUNC_8(VAR_7, VAR_4, VAR_5, VAR_6, VAR_3)))
        goto err;

    FUNC_26("Curve defined by Weierstrass equation");
    FUNC_30("     y^2 + x*y = x^3 + a*x^2 + b (mod p)");
    FUNC_34("a", VAR_5);
    FUNC_34("b", VAR_6);
    FUNC_34("p", VAR_4);

     if (!FUNC_31(VAR_9 = FUNC_20(VAR_7))
        || !FUNC_31(VAR_10 = FUNC_20(VAR_7))
        || !FUNC_31(VAR_11 = FUNC_20(VAR_7))
        || !FUNC_33(FUNC_25(VAR_7, VAR_9))
        || !FUNC_33(FUNC_18(VAR_7, VAR_9)))
        goto err;

    VAR_17[0] = 0;
    if (!FUNC_33(FUNC_21(VAR_7, VAR_10, VAR_17, 1, VAR_3))
        || !FUNC_33(FUNC_12(VAR_7, VAR_9, VAR_9, VAR_10, VAR_3))
        || !FUNC_33(FUNC_18(VAR_7, VAR_9))
        || !FUNC_31(VAR_12 = FUNC_4())
        || !FUNC_31(VAR_13 = FUNC_4())
        || !FUNC_31(VAR_14 = FUNC_4())
        || !FUNC_31(VAR_15 = FUNC_4())
        || !FUNC_31(VAR_16 = FUNC_4())
        || !FUNC_33(FUNC_3(&VAR_12, "6"))




        || !FUNC_33(FUNC_3(&VAR_13, "8"))
        || !FUNC_33(FUNC_23(VAR_7, VAR_10, VAR_12, VAR_13, VAR_3))

       )
        goto err;
    if (!FUNC_28(FUNC_19(VAR_7, VAR_10, VAR_3), 0)) {





        FUNC_26("Point is not on curve");
        FUNC_34("x", VAR_12);
        FUNC_34("y", VAR_13);
        goto err;
    }

    FUNC_30("A cyclic subgroup:");
    VAR_19 = 100;
    do {
        if (!FUNC_29(VAR_19--, 0))
            goto err;

        if (FUNC_18(VAR_7, VAR_9))
            FUNC_30("     point at infinity");
        else {
            if (!FUNC_33(FUNC_16(VAR_7, VAR_9, VAR_12, VAR_13,
                                                           VAR_3)))
                goto err;

            FUNC_34("x", VAR_12);
            FUNC_34("y", VAR_13);
        }

        if (!FUNC_33(FUNC_14(VAR_11, VAR_9))
            || !FUNC_33(FUNC_12(VAR_7, VAR_9, VAR_9, VAR_10, VAR_3)))
            goto err;
    }
    while (!FUNC_18(VAR_7, VAR_9));

    if (!FUNC_33(FUNC_12(VAR_7, VAR_9, VAR_10, VAR_11, VAR_3))
        || !FUNC_33(FUNC_18(VAR_7, VAR_9)))
        goto err;
    VAR_18 = FUNC_22(VAR_7, VAR_10, VAR_2,
                             VAR_17, sizeof(VAR_17), VAR_3);
    if (!FUNC_32(VAR_18, 0)
        || !FUNC_33(FUNC_21(VAR_7, VAR_9, VAR_17, VAR_18, VAR_3))
        || !FUNC_27(0, FUNC_13(VAR_7, VAR_9, VAR_10, VAR_3)))
        goto err;
    FUNC_35("Generator as octet string, uncompressed form:",
                       VAR_17, VAR_18);
    if (!FUNC_33(FUNC_17(VAR_7, VAR_9, VAR_3))
        || !FUNC_27(0, FUNC_13(VAR_7, VAR_9, VAR_11, VAR_3)))
        goto err;

    FUNC_30("\n");

    VAR_20 = 1;
err:
    FUNC_0(VAR_3);
    FUNC_2(VAR_4);
    FUNC_2(VAR_5);
    FUNC_2(VAR_6);
    FUNC_7(VAR_7);
    FUNC_7(VAR_8);
    FUNC_15(VAR_9);
    FUNC_15(VAR_10);
    FUNC_15(VAR_11);
    FUNC_2(VAR_12);
    FUNC_2(VAR_13);
    FUNC_2(VAR_14);
    FUNC_2(VAR_15);
    FUNC_2(VAR_16);
    return VAR_20;
}
