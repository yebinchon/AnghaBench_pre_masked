
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BIGNUM ;


 int FUNC_0 (int *,void (*) (int,int,void*),void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,int const*,int const*,int *) ;
 int * FUNC_3 () ;

BIGNUM *FUNC_4(BIGNUM *VAR_0, int VAR_1, int VAR_2,
                          const BIGNUM *VAR_3, const BIGNUM *VAR_4,
                          void (*VAR_5) (int, int, void *), void *VAR_6)
{
    BN_GENCB VAR_7;
    BIGNUM *VAR_8 = ((void*)0);

    FUNC_0(&VAR_7, VAR_5, VAR_6);

    if (VAR_0 == ((void*)0)) {
        if ((VAR_8 = FUNC_3()) == ((void*)0))
            goto err;
    } else
        VAR_8 = VAR_0;
    if (!FUNC_2(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7))
        goto err;


    return VAR_8;
 err:
    FUNC_1(VAR_8);
    return ((void*)0);
}
