
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int invalid_seed ;
struct TYPE_2__ {int nid; } ;
typedef int const EC_POINT ;
typedef int const EC_GROUP ;
typedef int const ECPARAMETERS ;
typedef int const BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int const* FUNC_2 (int const*) ;
 int const* FUNC_3 () ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int) ;
 int FUNC_6 (int const*,int const*) ;
 int FUNC_7 (int const*) ;
 int const* FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 int const* FUNC_10 (int const*) ;
 int const* FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int const*,int const*,int *) ;
 int FUNC_14 (int const*) ;
 void* FUNC_15 (int const*,int *) ;
 int const* FUNC_16 (int) ;
 void* FUNC_17 (int const*) ;
 int FUNC_18 (int const*,int const*,int const*,int const*) ;
 int FUNC_19 (int const*,unsigned char const*,size_t) ;
 int FUNC_20 (int const*,int const*,int const*,int const*,int *) ;
 int const* FUNC_21 (int const*,int const*) ;
 int FUNC_22 (int const*) ;
 int FUNC_23 (int const*,int const*,int const*,int const*,int const*) ;
 int const* FUNC_24 (int const*) ;
 int FUNC_25 (int const*,int const*,int const*,int const*,int const*) ;
 int VAR_0 ;
 int FUNC_26 (int) ;
 int VAR_1 ;
 int FUNC_27 (int const**) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (char*,int ,int ) ;
 int FUNC_30 (int,int) ;
 int FUNC_31 (int,int) ;
 int FUNC_32 (char*,int ) ;
 int FUNC_33 (int const*) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_36(int VAR_3)
{
    int VAR_4 = 0, VAR_5, VAR_6;
    EC_GROUP *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    const EC_POINT *VAR_10 = ((void*)0);
    EC_POINT *VAR_11 = ((void*)0);
    BIGNUM *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    BIGNUM *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    const BIGNUM *VAR_16 = ((void*)0);
    BIGNUM *VAR_17 = ((void*)0);
    BN_CTX *VAR_18 = ((void*)0);
    static const unsigned char VAR_19[] = "THIS IS NOT A VALID SEED";
    static size_t VAR_20 = sizeof(VAR_19);
    ECPARAMETERS *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
    EC_GROUP *VAR_23[8] = {((void*)0)};
    EC_GROUP **VAR_24 = &VAR_23[0];
    ECPARAMETERS *VAR_25[8] = {((void*)0)};
    ECPARAMETERS **VAR_26 = &VAR_25[0];


    VAR_5 = VAR_2[VAR_3].nid;
    FUNC_32("Curve %s", FUNC_26(VAR_5));
    if (!FUNC_33(VAR_18 = FUNC_3()))
        return VAR_4;
    FUNC_4(VAR_18);

    if (
        !FUNC_33(VAR_12 = FUNC_2(VAR_18))
        || !FUNC_33(VAR_14 = FUNC_2(VAR_18))
        || !FUNC_33(VAR_15 = FUNC_2(VAR_18))
        || !FUNC_33(VAR_17 = FUNC_2(VAR_18))
        || !FUNC_33(VAR_13 = FUNC_2(VAR_18))

        || !FUNC_33(VAR_7 = FUNC_16(VAR_5))
        || !FUNC_33(VAR_21 = FUNC_15(VAR_7, ((void*)0)))
        || !FUNC_33(VAR_10 = FUNC_10(VAR_7))
        || !FUNC_33(VAR_16 = FUNC_11(VAR_7))
        || !FUNC_34(FUNC_13(VAR_7, VAR_12, ((void*)0)))

        || !FUNC_33(VAR_9 = FUNC_8(VAR_7))
        || !FUNC_33(VAR_11 = FUNC_21(VAR_10, VAR_7))
        || !FUNC_34(FUNC_20(VAR_7, VAR_11, VAR_10, VAR_10, ((void*)0)))
        || !FUNC_34(FUNC_23(VAR_7, VAR_11,
                      VAR_14, VAR_15, VAR_18))
        || !FUNC_34(FUNC_6(VAR_17, VAR_16))
        || !FUNC_34(FUNC_5(VAR_17, 1))
        || !FUNC_34(FUNC_6(VAR_13, VAR_12))
        || !FUNC_34(FUNC_5(VAR_13, 1)))
        goto err;

    FUNC_22(VAR_11);
    VAR_11 = ((void*)0);

    if (!FUNC_33(VAR_11 = FUNC_24(VAR_9))
        || !FUNC_34(FUNC_25(VAR_9, VAR_11,
                                                      VAR_14, VAR_15,
                                                      VAR_18)))
        goto err;
    if (!FUNC_33(VAR_8 = *VAR_24++ = FUNC_17(VAR_21))
        || !FUNC_31((VAR_6 = FUNC_14(VAR_8)), VAR_0))
        goto err;




    if (!FUNC_34(FUNC_35(VAR_5, VAR_6))) {
        FUNC_29("nid = %s, tnid = %s", FUNC_26(VAR_5), FUNC_26(VAR_6));
        goto err;
    }

    if (!FUNC_30(FUNC_12(VAR_8), VAR_1))
        goto err;





    if (!FUNC_30(FUNC_19(VAR_9, VAR_19, VAR_20),
                     VAR_20)
            || !FUNC_33(VAR_22 = *VAR_26++ =
                         FUNC_15(VAR_9, ((void*)0)))
            || !FUNC_33(VAR_8 = *VAR_24++ =
                          FUNC_17(VAR_22))
            || !FUNC_31((VAR_6 = FUNC_14(VAR_8)), VAR_0)
            || !FUNC_34(FUNC_35(VAR_5, VAR_6))
            || !FUNC_30(FUNC_12(VAR_8),
                            VAR_1)) {
        FUNC_29("nid = %s, tnid = %s", FUNC_26(VAR_5), FUNC_26(VAR_6));
        goto err;
    }





    if (!FUNC_30(FUNC_19(VAR_9, ((void*)0), 0), 1)
            || !FUNC_33(VAR_22 = *VAR_26++ =
                         FUNC_15(VAR_9, ((void*)0)))
            || !FUNC_33(VAR_8 = *VAR_24++ =
                          FUNC_17(VAR_22))
            || !FUNC_31((VAR_6 = FUNC_14(VAR_8)), VAR_0)
            || !FUNC_34(FUNC_35(VAR_5, VAR_6))
            || !FUNC_30(FUNC_12(VAR_8),
                            VAR_1)) {
        FUNC_29("nid = %s, tnid = %s", FUNC_26(VAR_5), FUNC_26(VAR_6));
        goto err;
    }





    if (
        !FUNC_34(FUNC_18(VAR_9, VAR_11, VAR_16,
                                          VAR_12))
        || !FUNC_33(VAR_22 = *VAR_26++ =
                     FUNC_15(VAR_9, ((void*)0)))
        || !FUNC_33(VAR_8 = *VAR_24++ =
                      FUNC_17(VAR_22))
        || !FUNC_30((VAR_6 = FUNC_14(VAR_8)), VAR_0)

        || !FUNC_34(FUNC_18(VAR_9, VAR_10, VAR_17,
                                             VAR_12))
        || !FUNC_33(VAR_22 = *VAR_26++ =
                     FUNC_15(VAR_9, ((void*)0)))
        || !FUNC_33(VAR_8 = *VAR_24++ =
                      FUNC_17(VAR_22))
        || !FUNC_30((VAR_6 = FUNC_14(VAR_8)), VAR_0)

        || !FUNC_28(FUNC_18(VAR_9, VAR_10, ((void*)0),
                                              VAR_12))

        || !FUNC_34(FUNC_18(VAR_9, VAR_10, VAR_16,
                                             VAR_13))
        || !FUNC_33(VAR_22 = *VAR_26++ =
                     FUNC_15(VAR_9, ((void*)0)))
        || !FUNC_33(VAR_8 = *VAR_24++ =
                      FUNC_17(VAR_22))
        || !FUNC_31((VAR_6 = FUNC_14(VAR_8)), VAR_0)
        || !FUNC_34(FUNC_35(VAR_5, VAR_6))
        || !FUNC_30(FUNC_12(VAR_8),
                        VAR_1)

        || !FUNC_34(FUNC_18(VAR_9, VAR_10, VAR_16,
                                             ((void*)0)))
        || !FUNC_33(VAR_22 = *VAR_26++ =
                     FUNC_15(VAR_9, ((void*)0)))
        || !FUNC_33(VAR_8 = *VAR_24++ =
                      FUNC_17(VAR_22))
        || !FUNC_31((VAR_6 = FUNC_14(VAR_8)), VAR_0)
        || !FUNC_34(FUNC_35(VAR_5, VAR_6))
        || !FUNC_30(FUNC_12(VAR_8),
                        VAR_1)

        || !FUNC_34(FUNC_18(VAR_9, VAR_10, VAR_16,
                                             VAR_12))
        || !FUNC_33(VAR_22 = *VAR_26++ =
                     FUNC_15(VAR_9, ((void*)0)))
        || !FUNC_33(VAR_8 = *VAR_24++ =
                      FUNC_17(VAR_22))
        || !FUNC_31((VAR_6 = FUNC_14(VAR_8)), VAR_0)
        || !FUNC_34(FUNC_35(VAR_5, VAR_6))
        || !FUNC_30(FUNC_12(VAR_8),
                        VAR_1))
        goto err;

    VAR_4 = 1;
err:
    for (VAR_24 = &VAR_23[0]; VAR_24 < VAR_23 + FUNC_27(VAR_23); VAR_24++)
        FUNC_9(*VAR_24);
    for (VAR_26 = &VAR_25[0]; VAR_26 < VAR_25 + FUNC_27(VAR_23); VAR_26++)
        FUNC_7(*VAR_26);
    FUNC_7(VAR_21);
    FUNC_22(VAR_11);
    FUNC_9(VAR_9);
    FUNC_9(VAR_7);
    FUNC_0(VAR_18);
    FUNC_1(VAR_18);
    return VAR_4;
}
