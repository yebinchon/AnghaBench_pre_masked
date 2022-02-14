
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int prime_infos; int * q; int * p; } ;
struct TYPE_5__ {int * r; int * pp; } ;
typedef TYPE_1__ RSA_PRIME_INFO ;
typedef TYPE_2__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int) ;

int FUNC_6(RSA *VAR_0)
{
    RSA_PRIME_INFO *VAR_1;
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    BN_CTX *VAR_4 = ((void*)0);
    int VAR_5, VAR_6 = 0, VAR_7;

    if ((VAR_7 = FUNC_4(VAR_0->prime_infos)) <= 0) {

        goto err;
    }

    if ((VAR_4 = FUNC_1()) == ((void*)0))
        goto err;


    VAR_2 = VAR_0->p;
    VAR_3 = VAR_0->q;

    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
        VAR_1 = FUNC_5(VAR_0->prime_infos, VAR_5);
        if (VAR_1->pp == ((void*)0)) {
            VAR_1->pp = FUNC_3();
            if (VAR_1->pp == ((void*)0))
                goto err;
        }
        if (!FUNC_2(VAR_1->pp, VAR_2, VAR_3, VAR_4))
            goto err;

        VAR_2 = VAR_1->pp;
        VAR_3 = VAR_1->r;
    }

    VAR_6 = 1;
 err:
    FUNC_0(VAR_4);
    return VAR_6;
}
