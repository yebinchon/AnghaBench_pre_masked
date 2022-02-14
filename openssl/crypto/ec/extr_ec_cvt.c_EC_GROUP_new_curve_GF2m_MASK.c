
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_METHOD ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int const*) ;
 int FUNC_3 (int *,int const*,int const*,int const*,int *) ;
 int FUNC_4 (int *) ;

EC_GROUP *FUNC_5(const BIGNUM *VAR_0, const BIGNUM *VAR_1,
                                  const BIGNUM *VAR_2, BN_CTX *VAR_3)
{
    const EC_METHOD *VAR_4;
    EC_GROUP *VAR_5;

    VAR_4 = FUNC_0();

    VAR_5 = FUNC_2(FUNC_4(VAR_3), VAR_4);
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    if (!FUNC_3(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3)) {
        FUNC_1(VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}
