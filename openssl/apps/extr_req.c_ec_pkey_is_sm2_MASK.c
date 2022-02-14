
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_4(EVP_PKEY *VAR_3)
{
    EC_KEY *VAR_4 = ((void*)0);
    const EC_GROUP *VAR_5 = ((void*)0);

    if (FUNC_3(VAR_3) == VAR_1)
        return 1;
    if (FUNC_3(VAR_3) == VAR_0
            && (VAR_4 = FUNC_2(VAR_3)) != ((void*)0)
            && (VAR_5 = FUNC_1(VAR_4)) != ((void*)0)
            && FUNC_0(VAR_5) == VAR_2)
        return 1;
    return 0;
}
