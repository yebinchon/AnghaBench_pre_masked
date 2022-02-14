
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int invalid_seed ;
struct TYPE_2__ {int nid; } ;
typedef int const EC_POINT ;
typedef int const EC_GROUP ;
typedef int const BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int const*) ;
 int const* FUNC_1 () ;
 scalar_t__ FUNC_2 (int const*,int) ;
 int const* FUNC_3 (int const*,int ) ;
 int const* FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int const*,int const*) ;
 int const* FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int const*) ;
 int FUNC_11 (int const*,int,int *) ;
 int const* FUNC_12 (int const*) ;
 int FUNC_13 (int const*) ;
 int const* FUNC_14 (int const*) ;
 int const* FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const*,int const*,int *) ;
 scalar_t__ FUNC_17 (int const*,int const*,int const*,int const*,int *) ;
 scalar_t__ FUNC_18 (int const*) ;
 int FUNC_19 (int const*) ;
 int const* FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_22 (int const*,int) ;
 scalar_t__ FUNC_23 (int const*,int const*,int const*,int const*) ;
 int FUNC_24 (int const*,unsigned char const*,size_t) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int const*,int const*,int const*,int const*,int *) ;
 int const* FUNC_27 (int const*,int const*) ;
 int FUNC_28 (int const*) ;
 int * FUNC_29 (int) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_32 (scalar_t__) ;
 int FUNC_33 (int ,int) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int const*) ;
 int FUNC_36 (scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_37(int VAR_3)
{
    int VAR_4 = 0, VAR_5, VAR_6, VAR_7;
    EC_GROUP *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    const EC_POINT *VAR_10 = ((void*)0);
    EC_POINT *VAR_11 = ((void*)0);
    BIGNUM *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    BIGNUM *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    BIGNUM *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    BIGNUM *VAR_20 = ((void*)0);
    const BIGNUM *VAR_21 = ((void*)0);
    BN_CTX *VAR_22 = ((void*)0);
    static const unsigned char VAR_23[] = "THIS IS NOT A VALID SEED";
    static size_t VAR_24 = sizeof(VAR_23);


    VAR_5 = VAR_2[VAR_3].nid;
    if (!FUNC_35(VAR_22 = FUNC_1())
        || !FUNC_35(VAR_8 = FUNC_20(VAR_5))
        || !FUNC_35(VAR_9 = FUNC_12(VAR_8))
        || !FUNC_35(VAR_12 = FUNC_9())
        || !FUNC_35(VAR_13 = FUNC_9())
        || !FUNC_35(VAR_14 = FUNC_9())
        || !FUNC_35(VAR_18 = FUNC_9())
        || !FUNC_35(VAR_10 = FUNC_14(VAR_8))
        || !FUNC_35(VAR_21 = FUNC_15(VAR_8))
        || !FUNC_36(FUNC_16(VAR_8, VAR_18, ((void*)0)))
        || !FUNC_36(FUNC_17(VAR_8, VAR_12, VAR_13, VAR_14, ((void*)0)))
        || !FUNC_35(VAR_11 = FUNC_27(VAR_10, VAR_8))
        || !FUNC_36(FUNC_26(VAR_8, VAR_11, VAR_10, VAR_10, ((void*)0)))
        || !FUNC_35(VAR_20 = FUNC_4(VAR_21))
        || !FUNC_36(FUNC_2(VAR_20, 1))
        || !FUNC_35(VAR_16 = FUNC_4(VAR_13))
        || !FUNC_36(FUNC_2(VAR_16, 1))
        || !FUNC_35(VAR_17 = FUNC_4(VAR_14))
        || !FUNC_36(FUNC_2(VAR_17, 1))
        || !FUNC_35(VAR_19 = FUNC_4(VAR_18))
        || !FUNC_36(FUNC_2(VAR_19, 1)))
        goto err;


    VAR_7 = (FUNC_18(VAR_8) > 0);
    VAR_6 = FUNC_25(FUNC_19(VAR_8));
    if (VAR_6 == VAR_0) {
        if (!FUNC_35(VAR_15 = FUNC_4(VAR_12))
            || !FUNC_36(FUNC_8(VAR_15, VAR_15)))
            goto err;
    } else {
        if (!FUNC_35(VAR_15 = FUNC_4(VAR_12)))
            goto err;





        if (!FUNC_35(FUNC_3(VAR_15,
                              FUNC_10(FUNC_6(), VAR_15) == 0 ?
                                      FUNC_7() :
                                      FUNC_6())))
            goto err;
    }


    if (!FUNC_33(FUNC_11(VAR_8, 0, ((void*)0)), VAR_5)

        || !FUNC_33(FUNC_11(VAR_8, 1, ((void*)0)),
                        FUNC_29(VAR_5) != ((void*)0) ? VAR_5 : VAR_1))
        goto err;


    FUNC_22(VAR_8, VAR_5 + 1);
    FUNC_31();
    if (!FUNC_34(FUNC_11(VAR_8, 0, ((void*)0)), 0))
        goto err;
    FUNC_30();


    FUNC_22(VAR_8, VAR_5);
    if (!FUNC_33(FUNC_11(VAR_8, 0, ((void*)0)), VAR_5))
        goto err;

    if (!FUNC_33(FUNC_24(VAR_8, VAR_23, VAR_24),
                     VAR_24))
        goto err;

    if (VAR_7) {




        if (!FUNC_33(FUNC_11(VAR_8, 0, ((void*)0)), 0))
            goto err;
    } else {




        if (!FUNC_33(FUNC_11(VAR_8, 0, ((void*)0)), VAR_5))
            goto err;
    }

    if (!FUNC_33(FUNC_24(VAR_8, ((void*)0), 0), 1)
        || !FUNC_33(FUNC_11(VAR_8, 0, ((void*)0)), VAR_5))
        goto err;


    if (!FUNC_33(FUNC_11(VAR_9, 0, ((void*)0)), VAR_5))
        goto err;


    if (!FUNC_36(FUNC_23(VAR_9, VAR_11, VAR_21,
                                          VAR_18))
        || !FUNC_33(FUNC_11(VAR_9, 0, ((void*)0)), 0)
        || !FUNC_36(FUNC_23(VAR_9, VAR_10, VAR_20,
                                             VAR_18))
        || !FUNC_33(FUNC_11(VAR_9, 0, ((void*)0)), 0)

        || !FUNC_32(FUNC_23(VAR_9, VAR_10, ((void*)0),
                                              VAR_18))
        || !FUNC_36(FUNC_23(VAR_9, VAR_10, VAR_21,
                                             VAR_19))
        || !FUNC_33(FUNC_11(VAR_9, 0, ((void*)0)), 0)

        || !FUNC_36(FUNC_23(VAR_9, VAR_10, VAR_21,
                                             ((void*)0)))
        || !FUNC_33(FUNC_11(VAR_9, 0, ((void*)0)), VAR_5)

        || !FUNC_36(FUNC_23(VAR_9, VAR_10, VAR_21,
                                             VAR_18))
        || !FUNC_33(FUNC_11(VAR_9, 0, ((void*)0)), VAR_5))
        goto err;
    FUNC_31();
    if (FUNC_21(VAR_9, VAR_15, VAR_13, VAR_14, ((void*)0))) {
        if (!FUNC_34(FUNC_11(VAR_9, 0, ((void*)0)), 0))
            goto err;
    } else {

        FUNC_30();
        FUNC_31();
    }
    if (FUNC_21(VAR_9, VAR_12, VAR_16, VAR_14, ((void*)0))) {
        if (!FUNC_34(FUNC_11(VAR_9, 0, ((void*)0)), 0))
            goto err;
    } else {

        FUNC_30();
        FUNC_31();
    }
    if (FUNC_21(VAR_9, VAR_12, VAR_13, VAR_17, ((void*)0))) {
        if (!FUNC_34(FUNC_11(VAR_9, 0, ((void*)0)), 0))
            goto err;
    } else {

        FUNC_30();
        FUNC_31();
    }
    FUNC_30();


    if (!FUNC_36(FUNC_21(VAR_9, VAR_12, VAR_13, VAR_14, ((void*)0)))
        || !FUNC_33(FUNC_11(VAR_9, 0, ((void*)0)), VAR_5))
        goto err;

    VAR_4 = 1;
err:
    FUNC_5(VAR_12);
    FUNC_5(VAR_15);
    FUNC_5(VAR_13);
    FUNC_5(VAR_16);
    FUNC_5(VAR_14);
    FUNC_5(VAR_17);
    FUNC_5(VAR_18);
    FUNC_5(VAR_19);
    FUNC_5(VAR_20);
    FUNC_28(VAR_11);
    FUNC_13(VAR_9);
    FUNC_13(VAR_8);
    FUNC_0(VAR_22);
    return VAR_4;
}
