
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int DSA ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int const**,int const**,int const**) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(DSA *VAR_3, OSSL_PARAM VAR_4[])
{
    OSSL_PARAM *VAR_5;
    const BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);

    if (VAR_3 == ((void*)0))
        return 0;

    FUNC_0(VAR_3, &VAR_6, &VAR_7, &VAR_8);
    if ((VAR_5 = FUNC_1(VAR_4, VAR_1)) != ((void*)0)
        && !FUNC_2(VAR_5, VAR_6))
        return 0;
    if ((VAR_5 = FUNC_1(VAR_4, VAR_2)) != ((void*)0)
        && !FUNC_2(VAR_5, VAR_7))
        return 0;
    if ((VAR_5 = FUNC_1(VAR_4, VAR_0)) != ((void*)0)
        && !FUNC_2(VAR_5, VAR_8))
        return 0;

    return 1;
}
