
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * priv_key; int * pub_key; int * q; int * g; int * p; } ;
typedef TYPE_1__ DSA ;
typedef int DH ;
typedef int BIGNUM ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;

DH *FUNC_6(const DSA *VAR_0)
{





    DH *VAR_1 = ((void*)0);
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

    if (VAR_0 == ((void*)0))
        goto err;
    VAR_1 = FUNC_3();
    if (VAR_1 == ((void*)0))
        goto err;
    if (VAR_0->p != ((void*)0) || VAR_0->g != ((void*)0) || VAR_0->q != ((void*)0)) {
        if (VAR_0->p == ((void*)0) || VAR_0->g == ((void*)0) || VAR_0->q == ((void*)0)) {

            goto err;
        }
        VAR_2 = FUNC_0(VAR_0->p);
        VAR_4 = FUNC_0(VAR_0->g);
        VAR_3 = FUNC_0(VAR_0->q);
        if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_3 == ((void*)0) || !FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4))
            goto err;
        VAR_2 = VAR_4 = VAR_3 = ((void*)0);
    }

    if (VAR_0->pub_key != ((void*)0)) {
        VAR_5 = FUNC_0(VAR_0->pub_key);
        if (VAR_5 == ((void*)0))
            goto err;
        if (VAR_0->priv_key != ((void*)0)) {
            VAR_6 = FUNC_0(VAR_0->priv_key);
            if (VAR_6 == ((void*)0))
                goto err;
        }
        if (!FUNC_4(VAR_1, VAR_5, VAR_6))
            goto err;
    } else if (VAR_0->priv_key != ((void*)0)) {

        goto err;
    }

    return VAR_1;

 err:
    FUNC_1(VAR_2);
    FUNC_1(VAR_4);
    FUNC_1(VAR_3);
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_2(VAR_1);
    return ((void*)0);
}
