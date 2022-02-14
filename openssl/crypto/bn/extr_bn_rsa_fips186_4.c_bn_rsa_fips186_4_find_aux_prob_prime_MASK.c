
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int const*) ;

__attribute__((used)) static int FUNC_4(const BIGNUM *VAR_0,
                                                BIGNUM *VAR_1, BN_CTX *VAR_2,
                                                BN_GENCB *VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = 0;

    if (FUNC_3(VAR_1, VAR_0) == ((void*)0))
        return 0;


    for(;;) {
        VAR_5++;
        FUNC_0(VAR_3, 0, VAR_5);

        if (FUNC_2(VAR_1, VAR_2, VAR_3))
            break;

        if (!FUNC_1(VAR_1, 2))
            goto err;
    }
    FUNC_0(VAR_3, 2, VAR_5);
    VAR_4 = 1;
err:
    return VAR_4;
}
