
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p; int * q; scalar_t__ j; scalar_t__ g; } ;
typedef TYPE_1__ DH ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,int *,int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (TYPE_1__ const*,int*) ;

int FUNC_13(const DH *VAR_6, int *VAR_7)
{
    int VAR_8 = 0, VAR_9;
    BN_CTX *VAR_10 = ((void*)0);
    BIGNUM *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

    if (!FUNC_12(VAR_6, VAR_7))
        return 0;

    VAR_10 = FUNC_3();
    if (VAR_10 == ((void*)0))
        goto err;
    FUNC_4(VAR_10);
    VAR_11 = FUNC_2(VAR_10);
    VAR_12 = FUNC_2(VAR_10);
    if (VAR_12 == ((void*)0))
        goto err;

    if (VAR_6->q) {
        if (FUNC_6(VAR_6->g, FUNC_11()) <= 0)
            *VAR_7 |= VAR_5;
        else if (FUNC_6(VAR_6->g, VAR_6->p) >= 0)
            *VAR_7 |= VAR_5;
        else {

            if (!FUNC_9(VAR_11, VAR_6->g, VAR_6->q, VAR_6->p, VAR_10))
                goto err;
            if (!FUNC_8(VAR_11))
                *VAR_7 |= VAR_5;
        }
        VAR_9 = FUNC_5(VAR_6->q, VAR_10, ((void*)0));
        if (VAR_9 < 0)
            goto err;
        if (!VAR_9)
            *VAR_7 |= VAR_4;

        if (!FUNC_7(VAR_11, VAR_12, VAR_6->p, VAR_6->q, VAR_10))
            goto err;
        if (!FUNC_8(VAR_12))
            *VAR_7 |= VAR_1;
        if (VAR_6->j && FUNC_6(VAR_6->j, VAR_11))
            *VAR_7 |= VAR_0;
    }

    VAR_9 = FUNC_5(VAR_6->p, VAR_10, ((void*)0));
    if (VAR_9 < 0)
        goto err;
    if (!VAR_9)
        *VAR_7 |= VAR_2;
    else if (!VAR_6->q) {
        if (!FUNC_10(VAR_11, VAR_6->p))
            goto err;
        VAR_9 = FUNC_5(VAR_11, VAR_10, ((void*)0));
        if (VAR_9 < 0)
            goto err;
        if (!VAR_9)
            *VAR_7 |= VAR_3;
    }
    VAR_8 = 1;
 err:
    FUNC_0(VAR_10);
    FUNC_1(VAR_10);
    return VAR_8;
}
