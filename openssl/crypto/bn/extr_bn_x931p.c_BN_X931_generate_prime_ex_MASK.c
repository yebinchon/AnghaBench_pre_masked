
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int *,int const*,int *,int *,int const*,int *,int *) ;
 int FUNC_4 (int *,int,int ,int ,int *) ;

int FUNC_5(BIGNUM *VAR_2, BIGNUM *VAR_3, BIGNUM *VAR_4,
                              BIGNUM *VAR_5, BIGNUM *VAR_6,
                              const BIGNUM *VAR_7,
                              const BIGNUM *VAR_8, BN_CTX *VAR_9, BN_GENCB *VAR_10)
{
    int VAR_11 = 0;

    FUNC_2(VAR_9);
    if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_1(VAR_9);
    if (VAR_6 == ((void*)0))
        VAR_6 = FUNC_1(VAR_9);
    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
        goto error;

    if (!FUNC_4(VAR_5, 101, VAR_1, VAR_0, VAR_9))
        goto error;
    if (!FUNC_4(VAR_6, 101, VAR_1, VAR_0, VAR_9))
        goto error;
    if (!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7, VAR_5, VAR_6, VAR_8, VAR_9, VAR_10))
        goto error;

    VAR_11 = 1;

 error:
    FUNC_0(VAR_9);

    return VAR_11;

}
