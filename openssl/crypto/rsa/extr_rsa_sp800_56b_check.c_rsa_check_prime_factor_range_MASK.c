
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int const*,int *) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int *,int *,int) ;
 int const VAR_0 ;

int FUNC_8(const BIGNUM *VAR_1, int VAR_2, BN_CTX *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5;
    int VAR_6;

    VAR_2 >>= 1;
    VAR_6 = VAR_2 - FUNC_6(&VAR_0);


    if (FUNC_6(VAR_1) != VAR_2)
        return 0;

    FUNC_2(VAR_3);
    VAR_5 = FUNC_1(VAR_3);
    if (VAR_5 == ((void*)0))
        goto err;


    if (!FUNC_4(VAR_5, &VAR_0))
        goto err;

    if (VAR_6 >= 0) {





        if (!FUNC_5(VAR_5, VAR_5, VAR_6))
            goto err;
    } else if (!FUNC_7(VAR_5, VAR_5, -VAR_6)) {
        goto err;
    }
    if (FUNC_3(VAR_1, VAR_5) <= 0)
        goto err;
    VAR_4 = 1;
err:
    FUNC_0(VAR_3);
    return VAR_4;
}
