
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
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned char*) ;
 int FUNC_6 (int *,int *,int const*,int *) ;
 size_t FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int const*,int *,int *) ;
 int FUNC_9 (int const*) ;
 int * FUNC_10 (TYPE_1__ const*) ;
 int * FUNC_11 (TYPE_1__ const*) ;
 int FUNC_12 (TYPE_1__ const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int const*,int *,int *,int *,int *) ;
 int FUNC_15 (int const*,int *,int *,int const*,int const*,int *) ;
 int * FUNC_16 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_17 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (unsigned char*) ;
 unsigned char* FUNC_19 (size_t) ;
 int FUNC_20 (unsigned char*,int ,size_t) ;

int FUNC_21(unsigned char **VAR_7, size_t *VAR_8,
                            const EC_POINT *VAR_9, const EC_KEY *VAR_10)
{
    BN_CTX *VAR_11;
    EC_POINT *VAR_12 = ((void*)0);
    BIGNUM *VAR_13 = ((void*)0);
    const BIGNUM *VAR_14;
    const EC_GROUP *VAR_15;
    int VAR_16 = 0;
    size_t VAR_17, VAR_18;
    unsigned char *VAR_19 = ((void*)0);

    if ((VAR_11 = FUNC_3(VAR_10->libctx)) == ((void*)0))
        goto err;
    FUNC_4(VAR_11);
    VAR_13 = FUNC_2(VAR_11);
    if (VAR_13 == ((void*)0)) {
        FUNC_17(VAR_1, VAR_6);
        goto err;
    }

    VAR_14 = FUNC_11(VAR_10);
    if (VAR_14 == ((void*)0)) {
        FUNC_17(VAR_1, VAR_2);
        goto err;
    }

    VAR_15 = FUNC_10(VAR_10);

    if (FUNC_12(VAR_10) & VAR_0) {
        if (!FUNC_8(VAR_15, VAR_13, ((void*)0)) ||
            !FUNC_6(VAR_13, VAR_13, VAR_14, VAR_11)) {
            FUNC_17(VAR_1, VAR_6);
            goto err;
        }
        VAR_14 = VAR_13;
    }

    if ((VAR_12 = FUNC_16(VAR_15)) == ((void*)0)) {
        FUNC_17(VAR_1, VAR_6);
        goto err;
    }

    if (!FUNC_15(VAR_15, VAR_12, ((void*)0), VAR_9, VAR_14, VAR_11)) {
        FUNC_17(VAR_1, VAR_3);
        goto err;
    }

    if (!FUNC_14(VAR_15, VAR_12, VAR_13, ((void*)0), VAR_11)) {
        FUNC_17(VAR_1, VAR_3);
        goto err;
    }

    VAR_17 = (FUNC_9(VAR_15) + 7) / 8;
    VAR_18 = FUNC_7(VAR_13);
    if (VAR_18 > VAR_17) {
        FUNC_17(VAR_1, VAR_5);
        goto err;
    }
    if ((VAR_19 = FUNC_19(VAR_17)) == ((void*)0)) {
        FUNC_17(VAR_1, VAR_6);
        goto err;
    }

    FUNC_20(VAR_19, 0, VAR_17 - VAR_18);
    if (VAR_18 != (size_t)FUNC_5(VAR_13, VAR_19 + VAR_17 - VAR_18)) {
        FUNC_17(VAR_1, VAR_4);
        goto err;
    }

    *VAR_7 = VAR_19;
    *VAR_8 = VAR_17;
    VAR_19 = ((void*)0);

    VAR_16 = 1;

 err:
    FUNC_13(VAR_12);
    FUNC_0(VAR_11);
    FUNC_1(VAR_11);
    FUNC_18(VAR_19);
    return VAR_16;
}
