
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int const*,int *,int *,int,int const*,int *,int *) ;
 int FUNC_9 (int *,int *,int *,int *) ;

int FUNC_10(BIGNUM *VAR_2, BIGNUM *VAR_3,
                                     BIGNUM *VAR_4, BIGNUM *VAR_5,
                                     const BIGNUM *VAR_6, const BIGNUM *VAR_7,
                                     const BIGNUM *VAR_8, int VAR_9,
                                     const BIGNUM *VAR_10, BN_CTX *VAR_11, BN_GENCB *VAR_12)
{
    int VAR_13 = 0;
    BIGNUM *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    int VAR_18;

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
        return 0;

    FUNC_2(VAR_11);

    VAR_14 = (VAR_4 != ((void*)0)) ? VAR_4 : FUNC_1(VAR_11);
    VAR_15 = (VAR_5 != ((void*)0)) ? VAR_5 : FUNC_1(VAR_11);
    VAR_16 = (VAR_7 != ((void*)0)) ? (BIGNUM *)VAR_7 : FUNC_1(VAR_11);
    VAR_17 = (VAR_8 != ((void*)0)) ? (BIGNUM *)VAR_8 : FUNC_1(VAR_11);
    if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0) || VAR_16 == ((void*)0) || VAR_17 == ((void*)0))
        goto err;

    VAR_18 = FUNC_7(VAR_9);
    if (VAR_18 == 0)
        goto err;


    if (VAR_7 == ((void*)0)) {

        if (!FUNC_5(VAR_16, VAR_18, VAR_1, VAR_0,
                             VAR_11))
            goto err;
    }

    if (VAR_8 == ((void*)0)) {

        if (!FUNC_5(VAR_17, VAR_18, VAR_1, VAR_0,
                             VAR_11))
            goto err;
    }


    if (!FUNC_9(VAR_16, VAR_14, VAR_11, VAR_12)
            || !FUNC_9(VAR_17, VAR_15, VAR_11, VAR_12))
        goto err;

    if ((FUNC_4(VAR_14) + FUNC_4(VAR_15)) >=
            FUNC_6(VAR_9))
        goto err;

    if (!FUNC_8(VAR_2, VAR_3, VAR_6, VAR_14, VAR_15, VAR_9, VAR_10, VAR_11, VAR_12))
        goto err;
    VAR_13 = 1;
err:

    if (VAR_4 == ((void*)0))
        FUNC_3(VAR_14);
    if (VAR_5 == ((void*)0))
        FUNC_3(VAR_15);
    if (VAR_7 == ((void*)0))
        FUNC_3(VAR_16);
    if (VAR_8 == ((void*)0))
        FUNC_3(VAR_17);
    FUNC_0(VAR_11);
    return VAR_13;
}
