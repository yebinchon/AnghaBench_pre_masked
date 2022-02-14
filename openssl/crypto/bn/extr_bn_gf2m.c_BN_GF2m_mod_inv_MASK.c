
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int const*,int const*,int *) ;
 int FUNC_4 (int const*,int const*,int const*,int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*,scalar_t__,int ,int ,int *) ;

int FUNC_8(BIGNUM *VAR_2, const BIGNUM *VAR_3, const BIGNUM *VAR_4, BN_CTX *VAR_5)
{
    BIGNUM *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    FUNC_2(VAR_5);
    if ((VAR_6 = FUNC_1(VAR_5)) == ((void*)0))
        goto err;


    do {
        if (!FUNC_7(VAR_6, FUNC_6(VAR_4) - 1,
                             VAR_1, VAR_0, VAR_5))
            goto err;
    } while (FUNC_5(VAR_6));


    if (!FUNC_4(VAR_2, VAR_3, VAR_6, VAR_4, VAR_5))
        goto err;


    if (!FUNC_3(VAR_2, VAR_2, VAR_4, VAR_5))
        goto err;


    if (!FUNC_4(VAR_2, VAR_2, VAR_6, VAR_4, VAR_5))
        goto err;

    VAR_7 = 1;

 err:
    FUNC_0(VAR_5);
    return VAR_7;
}
