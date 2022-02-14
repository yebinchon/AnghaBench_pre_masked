
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,int,int const*,int const*,int *,int *) ;

int FUNC_3(BIGNUM *VAR_0, int VAR_1, int VAR_2,
                         const BIGNUM *VAR_3, const BIGNUM *VAR_4, BN_GENCB *VAR_5)
{
    BN_CTX *VAR_6 = FUNC_1();
    int VAR_7;

    if (VAR_6 == ((void*)0))
        return 0;

    VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

    FUNC_0(VAR_6);
    return VAR_7;
}
