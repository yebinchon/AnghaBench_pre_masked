
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int const*,int const*,int *) ;
 int * FUNC_4 () ;

BIGNUM *FUNC_5(const BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2)
{
    BN_CTX *VAR_3;
    BIGNUM *VAR_4 = ((void*)0);

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || (VAR_3 = FUNC_1()) == ((void*)0))
        return ((void*)0);

    if ((VAR_4 = FUNC_4()) != ((void*)0) && !FUNC_3(VAR_4, VAR_2, VAR_0, VAR_1, VAR_3)) {
        FUNC_2(VAR_4);
        VAR_4 = ((void*)0);
    }
    FUNC_0(VAR_3);
    return VAR_4;
}
