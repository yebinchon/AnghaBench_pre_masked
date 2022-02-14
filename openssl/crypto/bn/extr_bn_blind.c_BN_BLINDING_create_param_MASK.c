
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* bn_mod_exp ) (int const*,int const*,int const*,int const*,int *,int *) ;int * m_ctx; int const* A; int const* Ai; int const* mod; int const* e; } ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef TYPE_1__ BN_BLINDING ;
typedef int const BIGNUM ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int const*,int const*,int const*,int *) ;
 void* FUNC_5 () ;
 int FUNC_6 (int const*,int const*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int const*,int const*,int *,int *) ;
 scalar_t__ FUNC_9 (int const*,int const*,int const*,int *,int*) ;
 int FUNC_10 (int const*,int const*,int const*,int const*,int *,int *) ;

BN_BLINDING *FUNC_11(BN_BLINDING *VAR_2,
                                      const BIGNUM *VAR_3, BIGNUM *VAR_4, BN_CTX *VAR_5,
                                      int (*VAR_6) (BIGNUM *VAR_7,
                                                         const BIGNUM *VAR_8,
                                                         const BIGNUM *VAR_9,
                                                         const BIGNUM *VAR_10,
                                                         BN_CTX *VAR_11,
                                                         BN_MONT_CTX *VAR_12),
                                      BN_MONT_CTX *VAR_13)
{
    int VAR_14 = 32;
    BN_BLINDING *VAR_15 = ((void*)0);

    if (VAR_2 == ((void*)0))
        VAR_15 = FUNC_1(((void*)0), ((void*)0), VAR_4);
    else
        VAR_15 = VAR_2;

    if (VAR_15 == ((void*)0))
        goto err;

    if (VAR_15->A == ((void*)0) && (VAR_15->A = FUNC_5()) == ((void*)0))
        goto err;
    if (VAR_15->Ai == ((void*)0) && (VAR_15->Ai = FUNC_5()) == ((void*)0))
        goto err;

    if (VAR_3 != ((void*)0)) {
        FUNC_3(VAR_15->e);
        VAR_15->e = FUNC_2(VAR_3);
    }
    if (VAR_15->e == ((void*)0))
        goto err;

    if (VAR_6 != ((void*)0))
        VAR_15->bn_mod_exp = VAR_6;
    if (VAR_13 != ((void*)0))
        VAR_15->m_ctx = VAR_13;

    do {
        int VAR_16;
        if (!FUNC_6(VAR_15->A, VAR_15->mod, VAR_5))
            goto err;
        if (FUNC_9(VAR_15->Ai, VAR_15->A, VAR_15->mod, VAR_5, &VAR_16))
            break;




        if (!VAR_16)
            goto err;

        if (VAR_14-- == 0) {
            FUNC_7(VAR_0, VAR_1);
            goto err;
        }
    } while (1);

    if (VAR_15->bn_mod_exp != ((void*)0) && VAR_15->m_ctx != ((void*)0)) {
        if (!VAR_15->bn_mod_exp(VAR_15->A, VAR_15->A, VAR_15->e, VAR_15->mod, VAR_5, VAR_15->m_ctx))
            goto err;
    } else {
        if (!FUNC_4(VAR_15->A, VAR_15->A, VAR_15->e, VAR_15->mod, VAR_5))
            goto err;
    }

    if (VAR_15->m_ctx != ((void*)0)) {
        if (!FUNC_8(VAR_15->Ai, VAR_15->Ai, VAR_15->m_ctx, VAR_5)
            || !FUNC_8(VAR_15->A, VAR_15->A, VAR_15->m_ctx, VAR_5))
            goto err;
    }

    return VAR_15;
 err:
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_15);
        VAR_15 = ((void*)0);
    }

    return VAR_15;
}
