
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int length; int * priv_key; int * pub_key; int dirty_cnt; int p; int g; TYPE_1__* meth; int q; int lock; int method_mont_p; } ;
struct TYPE_5__ {int (* bn_mod_exp ) (TYPE_2__*,int *,int ,int *,int ,int *,int *) ;} ;
typedef TYPE_2__ DH ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,unsigned int,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (TYPE_2__*,int *,int ,int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_18(DH *VAR_11)
{
    int VAR_12 = 0;
    int VAR_13 = 0;
    unsigned VAR_14;
    BN_CTX *VAR_15 = ((void*)0);
    BN_MONT_CTX *VAR_16 = ((void*)0);
    BIGNUM *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);

    if (FUNC_11(VAR_11->p) > VAR_10) {
        FUNC_16(VAR_4, VAR_7);
        return 0;
    }

    if (FUNC_11(VAR_11->p) < VAR_6) {
        FUNC_16(VAR_4, VAR_8);
        return 0;
    }

    VAR_15 = FUNC_1();
    if (VAR_15 == ((void*)0))
        goto err;

    if (VAR_11->priv_key == ((void*)0)) {
        VAR_18 = FUNC_14();
        if (VAR_18 == ((void*)0))
            goto err;
        VAR_13 = 1;
    } else
        VAR_18 = VAR_11->priv_key;

    if (VAR_11->pub_key == ((void*)0)) {
        VAR_17 = FUNC_10();
        if (VAR_17 == ((void*)0))
            goto err;
    } else
        VAR_17 = VAR_11->pub_key;

    if (VAR_11->flags & VAR_3) {
        VAR_16 = FUNC_2(&VAR_11->method_mont_p,
                                      VAR_11->lock, VAR_11->p, VAR_15);
        if (!VAR_16)
            goto err;
    }

    if (VAR_13) {
        if (VAR_11->q) {
            do {
                if (!FUNC_13(VAR_18, VAR_11->q))
                    goto err;
            }
            while (FUNC_9(VAR_18) || FUNC_7(VAR_18));
        } else {

            VAR_14 = VAR_11->length ? VAR_11->length : FUNC_11(VAR_11->p) - 1;
            if (!FUNC_12(VAR_18, VAR_14, VAR_2, VAR_1))
                goto err;




            if (FUNC_8(VAR_11->g, VAR_5) && !FUNC_6(VAR_11->p, 2)) {

                if (!FUNC_3(VAR_18, 0))
                    goto err;
            }
        }
    }

    {
        BIGNUM *VAR_19 = FUNC_10();

        if (VAR_19 == ((void*)0))
            goto err;
        FUNC_15(VAR_19, VAR_18, VAR_0);

        if (!VAR_11->meth->bn_mod_exp(VAR_11, VAR_17, VAR_11->g, VAR_19, VAR_11->p, VAR_15, VAR_16)) {
            FUNC_4(VAR_19);
            goto err;
        }

        FUNC_4(VAR_19);
    }

    VAR_11->pub_key = VAR_17;
    VAR_11->priv_key = VAR_18;
    VAR_11->dirty_cnt++;
    VAR_12 = 1;
 err:
    if (VAR_12 != 1)
        FUNC_16(VAR_4, VAR_9);

    if (VAR_17 != VAR_11->pub_key)
        FUNC_5(VAR_17);
    if (VAR_18 != VAR_11->priv_key)
        FUNC_5(VAR_18);
    FUNC_0(VAR_15);
    return VAR_12;
}
