
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * e; int _method_mod_n; TYPE_1__* meth; int n; int q; int p; int d; } ;
struct TYPE_4__ {int bn_mod_exp; } ;
typedef TYPE_2__ RSA ;
typedef int BN_CTX ;
typedef int BN_BLINDING ;
typedef int BIGNUM ;


 int * FUNC_0 (int *,int *,int *,int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ,int ,int ,int *) ;

BN_BLINDING *FUNC_12(RSA *VAR_5, BN_CTX *VAR_6)
{
    BIGNUM *VAR_7;
    BN_CTX *VAR_8;
    BN_BLINDING *VAR_9 = ((void*)0);

    if (VAR_6 == ((void*)0)) {
        if ((VAR_8 = FUNC_5()) == ((void*)0))
            return 0;
    } else {
        VAR_8 = VAR_6;
    }

    FUNC_6(VAR_8);
    VAR_7 = FUNC_4(VAR_8);
    if (VAR_7 == ((void*)0)) {
        FUNC_10(VAR_3, VAR_2);
        goto err;
    }

    if (VAR_5->e == ((void*)0)) {
        VAR_7 = FUNC_11(VAR_5->d, VAR_5->p, VAR_5->q, VAR_8);
        if (VAR_7 == ((void*)0)) {
            FUNC_10(VAR_3, VAR_4);
            goto err;
        }
    } else {
        VAR_7 = VAR_5->e;
    }

    {
        BIGNUM *VAR_10 = FUNC_8();

        if (VAR_10 == ((void*)0)) {
            FUNC_10(VAR_3, VAR_2);
            goto err;
        }
        FUNC_9(VAR_10, VAR_5->n, VAR_0);

        VAR_9 = FUNC_0(((void*)0), VAR_7, VAR_10, VAR_8, VAR_5->meth->bn_mod_exp,
                                       VAR_5->_method_mod_n);

        FUNC_7(VAR_10);
    }
    if (VAR_9 == ((void*)0)) {
        FUNC_10(VAR_3, VAR_1);
        goto err;
    }

    FUNC_1(VAR_9);

 err:
    FUNC_2(VAR_8);
    if (VAR_8 != VAR_6)
        FUNC_3(VAR_8);
    if (VAR_7 != VAR_5->e)
        FUNC_7(VAR_7);

    return VAR_9;
}
