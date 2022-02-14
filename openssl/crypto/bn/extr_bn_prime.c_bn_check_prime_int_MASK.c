
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int,int *,int,int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(const BIGNUM *VAR_0, int VAR_1, BN_CTX *VAR_2,
                       int VAR_3, BN_GENCB *VAR_4)
{
    int VAR_5 = FUNC_2(FUNC_0(VAR_0));

    if (VAR_1 < VAR_5)
        VAR_1 = VAR_5;

    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
