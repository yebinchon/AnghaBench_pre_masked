
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int const*,int const*,int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_6 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_7 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_8 (int const*,int const*,int const*,int *) ;
 int const* FUNC_9 () ;
 int const* FUNC_10 (int const*,int const*) ;

BIGNUM *FUNC_11(const BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                            const BIGNUM *VAR_3, const BIGNUM *VAR_4, const BIGNUM *VAR_5)
{
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    BN_CTX *VAR_11;

    if (VAR_5 == ((void*)0) || VAR_1 == ((void*)0) || VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0)
        || VAR_4 == ((void*)0) || (VAR_11 = FUNC_1()) == ((void*)0))
        return ((void*)0);

    if ((VAR_6 = FUNC_9()) == ((void*)0) ||
        (VAR_7 = FUNC_9()) == ((void*)0) ||
        (VAR_8 = FUNC_9()) == ((void*)0))
        goto err;

    if (!FUNC_5(VAR_6, VAR_2, VAR_3, VAR_0, VAR_11))
        goto err;
    if ((VAR_9 = FUNC_10(VAR_0, VAR_2)) == ((void*)0))
        goto err;
    if (!FUNC_6(VAR_7, VAR_6, VAR_9, VAR_0, VAR_11))
        goto err;
    if (!FUNC_7(VAR_6, VAR_1, VAR_7, VAR_0, VAR_11))
        goto err;
    if (!FUNC_8(VAR_8, VAR_5, VAR_3, VAR_11))
        goto err;
    if (!FUNC_2(VAR_7, VAR_4, VAR_8))
        goto err;
    VAR_10 = FUNC_9();
    if (VAR_10 != ((void*)0) && !FUNC_5(VAR_10, VAR_6, VAR_7, VAR_0, VAR_11)) {
        FUNC_4(VAR_10);
        VAR_10 = ((void*)0);
    }

 err:
    FUNC_0(VAR_11);
    FUNC_3(VAR_6);
    FUNC_3(VAR_7);
    FUNC_3(VAR_8);
    FUNC_4(VAR_9);
    return VAR_10;
}
