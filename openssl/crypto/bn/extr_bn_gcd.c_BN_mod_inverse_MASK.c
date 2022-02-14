
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *,int const*,int const*,int *,int*) ;

BIGNUM *FUNC_2(BIGNUM *VAR_2,
                       const BIGNUM *VAR_3, const BIGNUM *VAR_4, BN_CTX *VAR_5)
{
    BIGNUM *VAR_6;
    int VAR_7;
    VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7);
    if (VAR_7)
        FUNC_0(VAR_0, VAR_1);
    return VAR_6;
}
