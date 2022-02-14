
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pub_key; int * priv_key; int libctx; int * group; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_KEY ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int *) ;
 int * FUNC_6 () ;
 int * FUNC_7 (int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int const*,int *,int *,int *,int *,int *) ;
 int * FUNC_10 (int const*) ;
 int FUNC_11 (int const*,int *) ;

int FUNC_12(EC_KEY *VAR_0)
{
    int VAR_1 = 0;
    BIGNUM *VAR_2 = ((void*)0);
    const BIGNUM *VAR_3 = ((void*)0);
    EC_POINT *VAR_4 = ((void*)0);
    const EC_GROUP *VAR_5 = VAR_0->group;
    BN_CTX *VAR_6 = FUNC_1(VAR_0->libctx);

    if (VAR_6 == ((void*)0))
        goto err;

    if (VAR_0->priv_key == ((void*)0)) {
        VAR_2 = FUNC_6();
        if (VAR_2 == ((void*)0))
            goto err;
    } else
        VAR_2 = VAR_0->priv_key;







    VAR_3 = FUNC_7(VAR_5);
    if (VAR_3 == ((void*)0))
        goto err;
    do
        if (!FUNC_5(VAR_2, VAR_3, VAR_6))
            goto err;
    while (FUNC_4(VAR_2)) ;

    if (VAR_0->pub_key == ((void*)0)) {
        VAR_4 = FUNC_10(VAR_5);
        if (VAR_4 == ((void*)0))
            goto err;
    } else
        VAR_4 = VAR_0->pub_key;


    if (!FUNC_9(VAR_5, VAR_4, VAR_2, ((void*)0), ((void*)0), VAR_6))
        goto err;

    VAR_0->priv_key = VAR_2;
    VAR_0->pub_key = VAR_4;
    VAR_2 = ((void*)0);
    VAR_4 = ((void*)0);

    VAR_1 = 1;

err:

    if (!VAR_1) {
        FUNC_2(VAR_0->priv_key);
        if (VAR_0->pub_key != ((void*)0))
            FUNC_11(VAR_5, VAR_0->pub_key);
    }

    FUNC_8(VAR_4);
    FUNC_3(VAR_2);
    FUNC_0(VAR_6);
    return VAR_1;
}
