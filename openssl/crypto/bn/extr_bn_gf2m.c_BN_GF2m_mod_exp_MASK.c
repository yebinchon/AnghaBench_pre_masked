
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int const*,int*,int *) ;
 int FUNC_1 (int const*,int*,int const) ;
 int VAR_1 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int const*) ;

int FUNC_7(BIGNUM *VAR_2, const BIGNUM *VAR_3, const BIGNUM *VAR_4,
                    const BIGNUM *VAR_5, BN_CTX *VAR_6)
{
    int VAR_7 = 0;
    const int VAR_8 = FUNC_2(VAR_5) + 1;
    int *VAR_9 = ((void*)0);
    FUNC_6(VAR_3);
    FUNC_6(VAR_4);
    FUNC_6(VAR_5);
    if ((VAR_9 = FUNC_5(sizeof(*VAR_9) * VAR_8)) == ((void*)0))
        goto err;
    VAR_7 = FUNC_1(VAR_5, VAR_9, VAR_8);
    if (!VAR_7 || VAR_7 > VAR_8) {
        FUNC_3(VAR_0, VAR_1);
        goto err;
    }
    VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_9, VAR_6);
    FUNC_6(VAR_2);
 err:
    FUNC_4(VAR_9);
    return VAR_7;
}
