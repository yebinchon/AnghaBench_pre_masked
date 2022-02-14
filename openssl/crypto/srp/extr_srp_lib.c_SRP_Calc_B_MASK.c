
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int const*,int *) ;
 int FUNC_5 (int *,int const*,int const*,int const*,int *) ;
 int FUNC_6 (int *,int const*,int *,int const*,int *) ;
 int * FUNC_7 () ;
 int * FUNC_8 (int const*,int const*) ;

BIGNUM *FUNC_9(const BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                   const BIGNUM *VAR_3)
{
    BIGNUM *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    BN_CTX *VAR_8;

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) ||
        (VAR_8 = FUNC_1()) == ((void*)0))
        return ((void*)0);

    if ((VAR_4 = FUNC_7()) == ((void*)0) ||
        (VAR_5 = FUNC_7()) == ((void*)0) || (VAR_6 = FUNC_7()) == ((void*)0))
        goto err;



    if (!FUNC_5(VAR_5, VAR_2, VAR_0, VAR_1, VAR_8)
        || (VAR_7 = FUNC_8(VAR_1, VAR_2)) == ((void*)0)
        || !FUNC_6(VAR_4, VAR_3, VAR_7, VAR_1, VAR_8)
        || !FUNC_4(VAR_6, VAR_5, VAR_4, VAR_1, VAR_8)) {
        FUNC_3(VAR_6);
        VAR_6 = ((void*)0);
    }
 err:
    FUNC_0(VAR_8);
    FUNC_2(VAR_4);
    FUNC_2(VAR_5);
    FUNC_3(VAR_7);
    return VAR_6;
}
