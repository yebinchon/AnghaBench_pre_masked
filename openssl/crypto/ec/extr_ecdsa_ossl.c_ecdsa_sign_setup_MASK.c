
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int libctx; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_KEY ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int const*,unsigned char const*,int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *,int const*,int *) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,int const*,int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int) ;
 int VAR_0 ;
 int * FUNC_11 (int const*) ;
 int FUNC_12 (TYPE_1__*) ;
 int * FUNC_13 (TYPE_1__*) ;
 int * FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int const*,int *,int *,int *,int *) ;
 int FUNC_17 (int const*,int *,int *,int *,int *,int *) ;
 int * FUNC_18 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_19 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_20 (int const*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_21(EC_KEY *VAR_8, BN_CTX *VAR_9,
                            BIGNUM **VAR_10, BIGNUM **VAR_11,
                            const unsigned char *VAR_12, int VAR_13)
{
    BN_CTX *VAR_14 = ((void*)0);
    BIGNUM *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    const BIGNUM *VAR_18;
    EC_POINT *VAR_19 = ((void*)0);
    const EC_GROUP *VAR_20;
    int VAR_21 = 0;
    int VAR_22;
    const BIGNUM *VAR_23;

    if (VAR_8 == ((void*)0) || (VAR_20 = FUNC_13(VAR_8)) == ((void*)0)) {
        FUNC_19(VAR_0, VAR_7);
        return 0;
    }
    if ((VAR_23 = FUNC_14(VAR_8)) == ((void*)0)) {
        FUNC_19(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_12(VAR_8)) {
        FUNC_19(VAR_0, VAR_1);
        return 0;
    }

    if ((VAR_14 = VAR_9) == ((void*)0)) {
        if ((VAR_14 = FUNC_1(VAR_8->libctx)) == ((void*)0)) {
            FUNC_19(VAR_0, VAR_6);
            return 0;
        }
    }

    VAR_15 = FUNC_9();
    VAR_16 = FUNC_5();
    VAR_17 = FUNC_5();
    if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0) || VAR_17 == ((void*)0)) {
        FUNC_19(VAR_0, VAR_6);
        goto err;
    }
    if ((VAR_19 = FUNC_18(VAR_20)) == ((void*)0)) {
        FUNC_19(VAR_0, VAR_5);
        goto err;
    }
    VAR_18 = FUNC_11(VAR_20);


    VAR_22 = FUNC_7(VAR_18);
    if (!FUNC_10(VAR_15, VAR_22)
        || !FUNC_10(VAR_16, VAR_22)
        || !FUNC_10(VAR_17, VAR_22))
        goto err;

    do {

        do {
            if (VAR_12 != ((void*)0)) {
                if (!FUNC_3(VAR_15, VAR_18, VAR_23,
                                           VAR_12, VAR_13, VAR_14)) {
                    FUNC_19(VAR_0,
                          VAR_3);
                    goto err;
                }
            } else {
                if (!FUNC_8(VAR_15, VAR_18, VAR_14)) {
                    FUNC_19(VAR_0,
                          VAR_3);
                    goto err;
                }
            }
        } while (FUNC_4(VAR_15));


        if (!FUNC_17(VAR_20, VAR_19, VAR_15, ((void*)0), ((void*)0), VAR_14)) {
            FUNC_19(VAR_0, VAR_5);
            goto err;
        }

        if (!FUNC_16(VAR_20, VAR_19, VAR_17, ((void*)0), VAR_14)) {
            FUNC_19(VAR_0, VAR_5);
            goto err;
        }

        if (!FUNC_6(VAR_16, VAR_17, VAR_18, VAR_14)) {
            FUNC_19(VAR_0, VAR_4);
            goto err;
        }
    } while (FUNC_4(VAR_16));


    if (!FUNC_20(VAR_20, VAR_15, VAR_15, VAR_14)) {
        FUNC_19(VAR_0, VAR_4);
        goto err;
    }


    FUNC_2(*VAR_11);
    FUNC_2(*VAR_10);

    *VAR_11 = VAR_16;
    *VAR_10 = VAR_15;
    VAR_21 = 1;
 err:
    if (!VAR_21) {
        FUNC_2(VAR_15);
        FUNC_2(VAR_16);
    }
    if (VAR_14 != VAR_9)
        FUNC_0(VAR_14);
    FUNC_15(VAR_19);
    FUNC_2(VAR_17);
    return VAR_21;
}
