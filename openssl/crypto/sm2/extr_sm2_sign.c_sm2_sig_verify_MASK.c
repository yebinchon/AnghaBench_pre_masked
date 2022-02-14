
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
 scalar_t__ FUNC_4 (int const*,int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int const*,int const*,int const*,int *) ;
 int const* FUNC_7 () ;
 int FUNC_8 (int const*,int const**,int const**) ;
 int const* FUNC_9 (int const*) ;
 int * FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int const*,int *,int const*,int *,int *) ;
 int FUNC_14 (int const*,int *,int const*,int ,int const*,int *) ;
 int * FUNC_15 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(const EC_KEY *VAR_5, const ECDSA_SIG *VAR_6,
                          const BIGNUM *VAR_7)
{
    int VAR_8 = 0;
    const EC_GROUP *VAR_9 = FUNC_10(VAR_5);
    const BIGNUM *VAR_10 = FUNC_9(VAR_9);
    BN_CTX *VAR_11 = ((void*)0);
    EC_POINT *VAR_12 = ((void*)0);
    BIGNUM *VAR_13 = ((void*)0);
    BIGNUM *VAR_14 = ((void*)0);
    const BIGNUM *VAR_15 = ((void*)0);
    const BIGNUM *VAR_16 = ((void*)0);

    VAR_11 = FUNC_2();
    VAR_12 = FUNC_15(VAR_9);
    if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0)) {
        FUNC_16(VAR_3, VAR_2);
        goto done;
    }

    FUNC_3(VAR_11);
    VAR_13 = FUNC_1(VAR_11);
    VAR_14 = FUNC_1(VAR_11);
    if (VAR_14 == ((void*)0)) {
        FUNC_16(VAR_3, VAR_2);
        goto done;
    }
    FUNC_8(VAR_6, &VAR_15, &VAR_16);

    if (FUNC_4(VAR_15, FUNC_7()) < 0
            || FUNC_4(VAR_16, FUNC_7()) < 0
            || FUNC_4(VAR_10, VAR_15) <= 0
            || FUNC_4(VAR_10, VAR_16) <= 0) {
        FUNC_16(VAR_3, VAR_4);
        goto done;
    }

    if (!FUNC_6(VAR_13, VAR_15, VAR_16, VAR_10, VAR_11)) {
        FUNC_16(VAR_3, VAR_0);
        goto done;
    }

    if (FUNC_5(VAR_13)) {
        FUNC_16(VAR_3, VAR_4);
        goto done;
    }

    if (!FUNC_14(VAR_9, VAR_12, VAR_16, FUNC_11(VAR_5), VAR_13, VAR_11)
            || !FUNC_13(VAR_9, VAR_12, VAR_14, ((void*)0), VAR_11)) {
        FUNC_16(VAR_3, VAR_1);
        goto done;
    }

    if (!FUNC_6(VAR_13, VAR_7, VAR_14, VAR_10, VAR_11)) {
        FUNC_16(VAR_3, VAR_0);
        goto done;
    }

    if (FUNC_4(VAR_15, VAR_13) == 0)
        VAR_8 = 1;

 done:
    FUNC_12(VAR_12);
    FUNC_0(VAR_11);
    return VAR_8;
}
