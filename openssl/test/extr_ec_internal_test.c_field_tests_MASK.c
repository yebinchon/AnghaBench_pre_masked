
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_METHOD ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned char const*,int,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int const*) ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(const EC_METHOD *VAR_0, const unsigned char *VAR_1,
                       int VAR_2)
{
    BN_CTX *VAR_3 = ((void*)0);
    BIGNUM *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    EC_GROUP *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!FUNC_9(VAR_3 = FUNC_3()))
        return 0;

    FUNC_4(VAR_3);
    VAR_4 = FUNC_2(VAR_3);
    VAR_5 = FUNC_2(VAR_3);
    if (!FUNC_9(VAR_6 = FUNC_2(VAR_3))
        || !FUNC_9(VAR_7 = FUNC_7(VAR_0))
        || !FUNC_10(FUNC_5(VAR_1, VAR_2, VAR_4))
        || !FUNC_10(FUNC_5(VAR_1 + VAR_2, VAR_2, VAR_5))
        || !FUNC_10(FUNC_5(VAR_1 + 2 * VAR_2, VAR_2, VAR_6))
        || !FUNC_10(FUNC_8(VAR_7, VAR_4, VAR_5, VAR_6, VAR_3))
        || !FUNC_11(VAR_7, VAR_3))
        goto err;
    VAR_8 = 1;

 err:
    FUNC_0(VAR_3);
    FUNC_1(VAR_3);
    if (VAR_7 != ((void*)0))
        FUNC_6(VAR_7);
    return VAR_8;
}
