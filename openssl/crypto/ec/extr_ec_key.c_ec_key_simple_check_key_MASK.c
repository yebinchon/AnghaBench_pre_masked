
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * order; } ;
struct TYPE_9__ {int * pub_key; TYPE_4__* group; int * priv_key; int libctx; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_KEY ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int const* FUNC_4 () ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int *,int *) ;
 int FUNC_9 (TYPE_4__*,int *,int *,int *,int const*,int *) ;
 int * FUNC_10 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int *,TYPE_1__ const*) ;

int FUNC_13(const EC_KEY *VAR_9)
{
    int VAR_10 = 0;
    BN_CTX *VAR_11 = ((void*)0);
    const BIGNUM *VAR_12 = ((void*)0);
    EC_POINT *VAR_13 = ((void*)0);

    if (VAR_9 == ((void*)0) || VAR_9->group == ((void*)0) || VAR_9->pub_key == ((void*)0)) {
        FUNC_11(VAR_0, VAR_8);
        return 0;
    }


    if (FUNC_7(VAR_9->group, VAR_9->pub_key)) {
        FUNC_11(VAR_0, VAR_4);
        goto err;
    }

    if ((VAR_11 = FUNC_1(VAR_9->libctx)) == ((void*)0))
        goto err;

    if ((VAR_13 = FUNC_10(VAR_9->group)) == ((void*)0))
        goto err;


    if (!FUNC_12(VAR_11, VAR_9)) {
        FUNC_11(VAR_0, VAR_1);
        goto err;
    }


    if (FUNC_8(VAR_9->group, VAR_9->pub_key, VAR_11) <= 0) {
        FUNC_11(VAR_0, VAR_5);
        goto err;
    }

    VAR_12 = VAR_9->group->order;
    if (FUNC_3(VAR_12)) {
        FUNC_11(VAR_0, VAR_2);
        goto err;
    }

    if (!FUNC_9(VAR_9->group, VAR_13, ((void*)0), VAR_9->pub_key, VAR_12, VAR_11)) {
        FUNC_11(VAR_0, VAR_7);
        goto err;
    }
    if (!FUNC_7(VAR_9->group, VAR_13)) {
        FUNC_11(VAR_0, VAR_6);
        goto err;
    }

    if (VAR_9->priv_key != ((void*)0)) {




        if (FUNC_2(VAR_9->priv_key, FUNC_4()) < 0
                || FUNC_2(VAR_9->priv_key, VAR_12) >= 0) {
            FUNC_11(VAR_0, VAR_6);
            goto err;
        }




        if (!FUNC_9(VAR_9->group, VAR_13, VAR_9->priv_key,
                          ((void*)0), ((void*)0), VAR_11)) {
            FUNC_11(VAR_0, VAR_7);
            goto err;
        }
        if (FUNC_5(VAR_9->group, VAR_13, VAR_9->pub_key, VAR_11) != 0) {
            FUNC_11(VAR_0, VAR_3);
            goto err;
        }
    }
    VAR_10 = 1;
 err:
    FUNC_0(VAR_11);
    FUNC_6(VAR_13);
    return VAR_10;
}
