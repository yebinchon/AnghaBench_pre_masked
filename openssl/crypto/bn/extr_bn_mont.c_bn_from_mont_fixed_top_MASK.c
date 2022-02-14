
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int N; int ri; int Ni; } ;
typedef TYPE_1__ BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int *) ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,TYPE_1__*) ;

int FUNC_12(BIGNUM *VAR_0, const BIGNUM *VAR_1, BN_MONT_CTX *VAR_2,
                           BN_CTX *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5, *VAR_6;

    FUNC_2(VAR_3);
    VAR_5 = FUNC_1(VAR_3);
    VAR_6 = FUNC_1(VAR_3);
    if (VAR_6 == ((void*)0))
        goto err;

    if (!FUNC_4(VAR_5, VAR_1))
        goto err;
    FUNC_5(VAR_5, VAR_2->ri);

    if (!FUNC_6(VAR_6, VAR_5, &VAR_2->Ni, VAR_3))
        goto err;
    FUNC_5(VAR_6, VAR_2->ri);

    if (!FUNC_6(VAR_5, VAR_6, &VAR_2->N, VAR_3))
        goto err;
    if (!FUNC_3(VAR_6, VAR_1, VAR_5))
        goto err;
    if (!FUNC_7(VAR_0, VAR_6, VAR_2->ri))
        goto err;

    if (FUNC_8(VAR_0, &(VAR_2->N)) >= 0) {
        if (!FUNC_9(VAR_0, VAR_0, &(VAR_2->N)))
            goto err;
    }
    VAR_4 = 1;
    FUNC_10(VAR_0);
 err:
    FUNC_0(VAR_3);

    return VAR_4;
}
