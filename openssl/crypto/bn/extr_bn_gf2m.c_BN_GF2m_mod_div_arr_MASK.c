
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_5 (int const*) ;

int FUNC_6(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                        const int VAR_3[], BN_CTX *VAR_4)
{
    BIGNUM *VAR_5;
    int VAR_6 = 0;

    FUNC_5(VAR_1);
    FUNC_5(VAR_2);

    FUNC_2(VAR_4);
    if ((VAR_5 = FUNC_1(VAR_4)) == ((void*)0))
        goto err;
    if (!FUNC_3(VAR_3, VAR_5))
        goto err;

    VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4);
    FUNC_5(VAR_0);

 err:
    FUNC_0(VAR_4);
    return VAR_6;
}
