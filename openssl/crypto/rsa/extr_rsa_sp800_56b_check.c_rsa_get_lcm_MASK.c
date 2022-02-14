
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 () ;

int FUNC_5(BN_CTX *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                BIGNUM *VAR_3, BIGNUM *VAR_4, BIGNUM *VAR_5, BIGNUM *VAR_6,
                BIGNUM *VAR_7)
{
    return FUNC_3(VAR_5, VAR_1, FUNC_4())
           && FUNC_3(VAR_6, VAR_2, FUNC_4())
           && FUNC_2(VAR_7, VAR_5, VAR_6, VAR_0)
           && FUNC_1(VAR_4, VAR_5, VAR_6, VAR_0)
           && FUNC_0(VAR_3, ((void*)0), VAR_7, VAR_4, VAR_0);
}
