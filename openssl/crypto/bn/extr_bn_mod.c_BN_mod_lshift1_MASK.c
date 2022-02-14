
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int *,int const*,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2, BN_CTX *VAR_3)
{
    if (!FUNC_0(VAR_0, VAR_1))
        return 0;
    FUNC_2(VAR_0);
    return FUNC_1(VAR_0, VAR_0, VAR_2, VAR_3);
}
