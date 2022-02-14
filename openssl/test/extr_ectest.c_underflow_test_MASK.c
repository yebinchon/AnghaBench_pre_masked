
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,char const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *,int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *,int *,int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int *,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(void)
{
    BN_CTX *VAR_1 = ((void*)0);
    EC_GROUP *VAR_2 = ((void*)0);
    EC_POINT *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    BIGNUM *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    const char *VAR_13 =
        "1534f0077fffffe87e9adcfe000000000000000000003e05a21d2400002e031b1f4"
        "b80000c6fafa4f3c1288798d624a247b5e2ffffffffffffffefe099241900004";
    const char *VAR_14 =
        "1ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"
        "fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe";

    VAR_1 = FUNC_3();
    if (!FUNC_17(VAR_1))
        return 0;

    FUNC_4(VAR_1);
    VAR_6 = FUNC_2(VAR_1);
    VAR_7 = FUNC_2(VAR_1);
    VAR_8 = FUNC_2(VAR_1);
    VAR_9 = FUNC_2(VAR_1);
    VAR_10 = FUNC_2(VAR_1);
    VAR_11 = FUNC_2(VAR_1);
    if (!FUNC_17(VAR_11))
        goto err;

    VAR_2 = FUNC_8(VAR_0);
    VAR_3 = FUNC_13(VAR_2);
    VAR_4 = FUNC_13(VAR_2);
    VAR_5 = FUNC_13(VAR_2);
    if (!FUNC_17(VAR_2) || !FUNC_17(VAR_3) || !FUNC_17(VAR_4) || !FUNC_17(VAR_5))
        goto err;

    if (!FUNC_16(FUNC_6(&VAR_6, VAR_13), 0)
            || !FUNC_16(FUNC_6(&VAR_7, VAR_14), 0)
            || !FUNC_16(FUNC_6(&VAR_8, VAR_14), 0)
            || !FUNC_16(FUNC_6(&VAR_11, "02"), 0)
            || !FUNC_18(FUNC_14(VAR_2, VAR_3, VAR_6,
                                                                   VAR_7, VAR_8, VAR_1))
            || !FUNC_18(FUNC_12(VAR_2, VAR_4, ((void*)0), VAR_3, VAR_11, VAR_1))
            || !FUNC_18(FUNC_11(VAR_2, VAR_4, VAR_6, VAR_7, VAR_1))
            || !FUNC_18(FUNC_9(VAR_2, VAR_5, VAR_3, VAR_1))
            || !FUNC_18(FUNC_11(VAR_2, VAR_5, VAR_9, VAR_10, VAR_1)))
        goto err;

    if (!FUNC_15(FUNC_5(VAR_6, VAR_9), 0)
            || !FUNC_15(FUNC_5(VAR_7, VAR_10), 0))
        goto err;

    VAR_12 = 1;

 err:
    FUNC_0(VAR_1);
    FUNC_10(VAR_3);
    FUNC_10(VAR_4);
    FUNC_10(VAR_5);
    FUNC_7(VAR_2);
    FUNC_1(VAR_1);

    return VAR_12;
}
