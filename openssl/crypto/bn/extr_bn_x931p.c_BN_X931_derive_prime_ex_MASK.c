
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_1__ ;


struct TYPE_37__ {scalar_t__ neg; } ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef TYPE_1__ const BIGNUM ;


 int FUNC_0 (int *) ;
 TYPE_1__ const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*,int *,int *) ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_11 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_12 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_13 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_14 (TYPE_1__ const*,int) ;
 int FUNC_15 (TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;

int FUNC_16(BIGNUM *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2,
                            const BIGNUM *VAR_3, const BIGNUM *VAR_4,
                            const BIGNUM *VAR_5, const BIGNUM *VAR_6, BN_CTX *VAR_7,
                            BN_GENCB *VAR_8)
{
    int VAR_9 = 0;

    BIGNUM *VAR_10, *VAR_11, *VAR_12;


    if (!FUNC_8(VAR_6))
        return 0;

    FUNC_2(VAR_7);
    if (VAR_1 == ((void*)0))
        VAR_1 = FUNC_1(VAR_7);

    if (VAR_2 == ((void*)0))
        VAR_2 = FUNC_1(VAR_7);

    VAR_10 = FUNC_1(VAR_7);

    VAR_11 = FUNC_1(VAR_7);

    VAR_12 = FUNC_1(VAR_7);

    if (VAR_12 == ((void*)0))
        goto err;

    if (!FUNC_15(VAR_1, VAR_4, VAR_7, VAR_8))
        goto err;

    if (!FUNC_15(VAR_2, VAR_5, VAR_7, VAR_8))
        goto err;

    if (!FUNC_12(VAR_11, VAR_1, VAR_2, VAR_7))
        goto err;



    if (!FUNC_10(VAR_0, VAR_2, VAR_1, VAR_7))
        goto err;

    if (!FUNC_12(VAR_0, VAR_0, VAR_2, VAR_7))
        goto err;

    if (!FUNC_10(VAR_10, VAR_1, VAR_2, VAR_7))
        goto err;

    if (!FUNC_12(VAR_10, VAR_10, VAR_1, VAR_7))
        goto err;

    if (!FUNC_13(VAR_0, VAR_0, VAR_10))
        goto err;

    if (VAR_0->neg && !FUNC_4(VAR_0, VAR_0, VAR_11))
        goto err;



    if (!FUNC_11(VAR_0, VAR_0, VAR_3, VAR_11, VAR_7))
        goto err;

    if (!FUNC_4(VAR_0, VAR_0, VAR_3))
        goto err;



    for (;;) {
        int VAR_13 = 1;
        FUNC_3(VAR_8, 0, VAR_13++);
        if (!FUNC_6(VAR_12, VAR_0))
            goto err;
        if (!FUNC_14(VAR_12, 1))
            goto err;
        if (!FUNC_7(VAR_10, VAR_12, VAR_6, VAR_7))
            goto err;
        if (FUNC_9(VAR_10)) {





            int VAR_14 = FUNC_5(VAR_0, VAR_7, VAR_8);
            if (VAR_14 < 0)
                goto err;
            if (VAR_14)
                break;
        }
        if (!FUNC_4(VAR_0, VAR_0, VAR_11))
            goto err;
    }

    FUNC_3(VAR_8, 3, 0);

    VAR_9 = 1;

 err:

    FUNC_0(VAR_7);

    return VAR_9;
}
