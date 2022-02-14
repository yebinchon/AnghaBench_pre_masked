
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_4 (int const*,int const) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;

int FUNC_7(BIGNUM *VAR_0, const BIGNUM *VAR_1, const int VAR_2[],
                         BN_CTX *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5;

    FUNC_6(VAR_1);

    if (VAR_2[0] == 0) {

        FUNC_5(VAR_0);
        return 1;
    }

    FUNC_2(VAR_3);
    if ((VAR_5 = FUNC_1(VAR_3)) == ((void*)0))
        goto err;

    if (!FUNC_4(VAR_5, VAR_2[0] - 1))
        goto err;
    VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_5, VAR_2, VAR_3);
    FUNC_6(VAR_0);

 err:
    FUNC_0(VAR_3);
    return VAR_4;
}
