
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int const*,int const*) ;
 int FUNC_4 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_5 (int const*,int const*,int const*,int *) ;
 scalar_t__ FUNC_6 (int const*,int) ;
 int * FUNC_7 (int const*,int const*) ;
 scalar_t__ FUNC_8 (int const*,int) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;

int FUNC_13(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                        const int VAR_3[], BN_CTX *VAR_4)
{
    int VAR_5 = 0, VAR_6, VAR_7;
    BIGNUM *VAR_8;

    FUNC_12(VAR_1);
    FUNC_12(VAR_2);

    if (FUNC_9(VAR_2))
        return FUNC_11(VAR_0);

    if (FUNC_6(VAR_2, 1))
        return (FUNC_7(VAR_0, VAR_1) != ((void*)0));

    FUNC_2(VAR_4);
    if ((VAR_8 = FUNC_1(VAR_4)) == ((void*)0))
        goto err;

    if (!FUNC_3(VAR_8, VAR_1, VAR_3))
        goto err;

    VAR_7 = FUNC_10(VAR_2) - 1;
    for (VAR_6 = VAR_7 - 1; VAR_6 >= 0; VAR_6--) {
        if (!FUNC_5(VAR_8, VAR_8, VAR_3, VAR_4))
            goto err;
        if (FUNC_8(VAR_2, VAR_6)) {
            if (!FUNC_4(VAR_8, VAR_8, VAR_1, VAR_3, VAR_4))
                goto err;
        }
    }
    if (!FUNC_7(VAR_0, VAR_8))
        goto err;
    FUNC_12(VAR_0);
    VAR_5 = 1;
 err:
    FUNC_0(VAR_4);
    return VAR_5;
}
