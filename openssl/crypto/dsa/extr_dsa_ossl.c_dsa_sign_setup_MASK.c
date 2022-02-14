
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int * q; int method_mont_p; int * p; int * g; TYPE_1__* meth; int lock; int * priv_key; } ;
struct TYPE_5__ {int (* bn_mod_exp ) (TYPE_2__*,int *,int *,int *,int *,int *,int ) ;} ;
typedef TYPE_2__ DSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *,int) ;
 int FUNC_6 (int *,int *,int *,unsigned char const*,int,int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int *,int ) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int ,int ) ;
 int VAR_6 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;
 int * FUNC_18 (int *,int *,int *) ;
 int FUNC_19 (TYPE_2__*,int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static int FUNC_20(DSA *VAR_7, BN_CTX *VAR_8,
                          BIGNUM **VAR_9, BIGNUM **VAR_10,
                          const unsigned char *VAR_11, int VAR_12)
{
    BN_CTX *VAR_13 = ((void*)0);
    BIGNUM *VAR_14, *VAR_15 = ((void*)0), *VAR_16 = *VAR_10;
    BIGNUM *VAR_17;
    int VAR_18 = 0;
    int VAR_19, VAR_20;

    if (!VAR_7->p || !VAR_7->q || !VAR_7->g) {
        FUNC_15(VAR_2, VAR_4);
        return 0;
    }


    if (FUNC_8(VAR_7->p) || FUNC_8(VAR_7->q) || FUNC_8(VAR_7->g)) {
        FUNC_15(VAR_2, VAR_3);
        return 0;
    }
    if (VAR_7->priv_key == ((void*)0)) {
        FUNC_15(VAR_2, VAR_5);
        return 0;
    }

    VAR_14 = FUNC_11();
    VAR_17 = FUNC_11();
    if (VAR_14 == ((void*)0) || VAR_17 == ((void*)0))
        goto err;

    if (VAR_8 == ((void*)0)) {
        if ((VAR_13 = FUNC_1()) == ((void*)0))
            goto err;
    } else
        VAR_13 = VAR_8;


    VAR_19 = FUNC_12(VAR_7->q);
    VAR_20 = FUNC_16(VAR_7->q);
    if (!FUNC_17(VAR_14, VAR_20 + 2)
        || !FUNC_17(VAR_17, VAR_20 + 2))
        goto err;


    do {
        if (VAR_11 != ((void*)0)) {




            if (!FUNC_6(VAR_14, VAR_7->q, VAR_7->priv_key, VAR_11,
                                       VAR_12, VAR_13))
                goto err;
        } else if (!FUNC_13(VAR_14, VAR_7->q))
            goto err;
    } while (FUNC_8(VAR_14));

    FUNC_14(VAR_14, VAR_0);
    FUNC_14(VAR_17, VAR_0);

    if (VAR_7->flags & VAR_1) {
        if (!FUNC_2(&VAR_7->method_mont_p,
                                    VAR_7->lock, VAR_7->p, VAR_13))
            goto err;
    }
    if (!FUNC_3(VAR_17, VAR_14, VAR_7->q)
        || !FUNC_3(VAR_14, VAR_17, VAR_7->q))
        goto err;

    FUNC_5(FUNC_7(VAR_17, VAR_19), VAR_14, VAR_17, VAR_20 + 2);

    if ((VAR_7)->meth->bn_mod_exp != ((void*)0)) {
            if (!VAR_7->meth->bn_mod_exp(VAR_7, VAR_16, VAR_7->g, VAR_14, VAR_7->p, VAR_13,
                                       VAR_7->method_mont_p))
                goto err;
    } else {
            if (!FUNC_10(VAR_16, VAR_7->g, VAR_14, VAR_7->p, VAR_13, VAR_7->method_mont_p))
                goto err;
    }

    if (!FUNC_9(VAR_16, VAR_16, VAR_7->q, VAR_13))
        goto err;


    if ((VAR_15 = FUNC_18(VAR_14, VAR_7->q, VAR_13)) == ((void*)0))
        goto err;

    FUNC_4(*VAR_9);
    *VAR_9 = VAR_15;
    VAR_15 = ((void*)0);
    VAR_18 = 1;
 err:
    if (!VAR_18)
        FUNC_15(VAR_2, VAR_6);
    if (VAR_13 != VAR_8)
        FUNC_0(VAR_13);
    FUNC_4(VAR_14);
    FUNC_4(VAR_17);
    return VAR_18;
}
