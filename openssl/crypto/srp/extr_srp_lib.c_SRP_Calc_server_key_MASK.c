
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_5 (int const*,int const*,int const*,int const*,int *) ;
 int const* FUNC_6 () ;

BIGNUM *FUNC_7(const BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                            const BIGNUM *VAR_3, const BIGNUM *VAR_4)
{
    BIGNUM *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    BN_CTX *VAR_7;

    if (VAR_2 == ((void*)0) || VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
        return ((void*)0);

    if ((VAR_7 = FUNC_1()) == ((void*)0) || (VAR_5 = FUNC_6()) == ((void*)0))
        goto err;



    if (!FUNC_4(VAR_5, VAR_1, VAR_2, VAR_4, VAR_7))
        goto err;
    if (!FUNC_5(VAR_5, VAR_0, VAR_5, VAR_4, VAR_7))
        goto err;

    VAR_6 = FUNC_6();
    if (VAR_6 != ((void*)0) && !FUNC_4(VAR_6, VAR_5, VAR_3, VAR_4, VAR_7)) {
        FUNC_3(VAR_6);
        VAR_6 = ((void*)0);
    }
 err:
    FUNC_0(VAR_7);
    FUNC_2(VAR_5);
    return VAR_6;
}
