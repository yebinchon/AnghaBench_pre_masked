
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int ECDSA_SIG ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*,int const*,int const*) ;
 scalar_t__ FUNC_5 (int const*,int const*) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_9 (int const*,int const*,int const*,int const*,int *) ;
 int const* FUNC_10 () ;
 int FUNC_11 (int const*,int const*) ;
 int FUNC_12 (int const*,int const*,int const*) ;
 int const* FUNC_13 () ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int const*,int const*) ;
 int const* FUNC_16 (int const*) ;
 int * FUNC_17 (int const*) ;
 int const* FUNC_18 (int const*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int const*,int *,int const*,int *,int *) ;
 int FUNC_21 (int const*,int *,int const*,int *,int *,int *) ;
 int * FUNC_22 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int const*,int const*,int const*,int *) ;

__attribute__((used)) static ECDSA_SIG *FUNC_25(const EC_KEY *VAR_4, const BIGNUM *VAR_5)
{
    const BIGNUM *VAR_6 = FUNC_18(VAR_4);
    const EC_GROUP *VAR_7 = FUNC_17(VAR_4);
    const BIGNUM *VAR_8 = FUNC_16(VAR_7);
    ECDSA_SIG *VAR_9 = ((void*)0);
    EC_POINT *VAR_10 = ((void*)0);
    BN_CTX *VAR_11 = ((void*)0);
    BIGNUM *VAR_12 = ((void*)0);
    BIGNUM *VAR_13 = ((void*)0);
    BIGNUM *VAR_14 = ((void*)0);
    BIGNUM *VAR_15 = ((void*)0);
    BIGNUM *VAR_16 = ((void*)0);
    BIGNUM *VAR_17 = ((void*)0);

    VAR_10 = FUNC_22(VAR_7);
    VAR_11 = FUNC_2();
    if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0)) {
        FUNC_23(VAR_3, VAR_2);
        goto done;
    }

    FUNC_3(VAR_11);
    VAR_12 = FUNC_1(VAR_11);
    VAR_13 = FUNC_1(VAR_11);
    VAR_16 = FUNC_1(VAR_11);
    VAR_17 = FUNC_1(VAR_11);
    if (VAR_17 == ((void*)0)) {
        FUNC_23(VAR_3, VAR_2);
        goto done;
    }





    VAR_14 = FUNC_10();
    VAR_15 = FUNC_10();

    if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0)) {
        FUNC_23(VAR_3, VAR_2);
        goto done;
    }

    for (;;) {
        if (!FUNC_11(VAR_12, VAR_8)) {
            FUNC_23(VAR_3, VAR_1);
            goto done;
        }

        if (!FUNC_21(VAR_7, VAR_10, VAR_12, ((void*)0), ((void*)0), VAR_11)
                || !FUNC_20(VAR_7, VAR_10, VAR_16, ((void*)0),
                                                    VAR_11)
                || !FUNC_8(VAR_14, VAR_5, VAR_16, VAR_8, VAR_11)) {
            FUNC_23(VAR_3, VAR_1);
            goto done;
        }


        if (FUNC_7(VAR_14))
            continue;

        if (!FUNC_4(VAR_13, VAR_14, VAR_12)) {
            FUNC_23(VAR_3, VAR_1);
            goto done;
        }

        if (FUNC_5(VAR_13, VAR_8) == 0)
            continue;

        if (!FUNC_4(VAR_15, VAR_6, FUNC_13())
                || !FUNC_24(VAR_7, VAR_15, VAR_15, VAR_11)
                || !FUNC_9(VAR_17, VAR_6, VAR_14, VAR_8, VAR_11)
                || !FUNC_12(VAR_17, VAR_12, VAR_17)
                || !FUNC_9(VAR_15, VAR_15, VAR_17, VAR_8, VAR_11)) {
            FUNC_23(VAR_3, VAR_0);
            goto done;
        }

        VAR_9 = FUNC_14();
        if (VAR_9 == ((void*)0)) {
            FUNC_23(VAR_3, VAR_2);
            goto done;
        }


        FUNC_15(VAR_9, VAR_14, VAR_15);
        break;
    }

 done:
    if (VAR_9 == ((void*)0)) {
        FUNC_6(VAR_14);
        FUNC_6(VAR_15);
    }

    FUNC_0(VAR_11);
    FUNC_19(VAR_10);
    return VAR_9;
}
