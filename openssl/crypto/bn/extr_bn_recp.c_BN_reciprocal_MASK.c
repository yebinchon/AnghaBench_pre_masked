
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int const*,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(BIGNUM *VAR_0, const BIGNUM *VAR_1, int VAR_2, BN_CTX *VAR_3)
{
    int VAR_4 = -1;
    BIGNUM *VAR_5;

    FUNC_2(VAR_3);
    if ((VAR_5 = FUNC_1(VAR_3)) == ((void*)0))
        goto err;

    if (!FUNC_4(VAR_5, VAR_2))
        goto err;

    if (!FUNC_3(VAR_0, ((void*)0), VAR_5, VAR_1, VAR_3))
        goto err;

    VAR_4 = VAR_2;
 err:
    FUNC_5(VAR_0);
    FUNC_0(VAR_3);
    return VAR_4;
}
