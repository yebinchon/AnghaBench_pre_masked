
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*) ;
 int * FUNC_2 (int const*,int *,int *,int *) ;

EC_POINT *FUNC_3(const EC_GROUP *VAR_0,
                             const char *VAR_1, EC_POINT *VAR_2, BN_CTX *VAR_3)
{
    EC_POINT *VAR_4 = ((void*)0);
    BIGNUM *VAR_5 = ((void*)0);

    if (!FUNC_1(&VAR_5, VAR_1))
        return ((void*)0);

    VAR_4 = FUNC_2(VAR_0, VAR_5, VAR_2, VAR_3);

    FUNC_0(VAR_5);

    return VAR_4;
}
