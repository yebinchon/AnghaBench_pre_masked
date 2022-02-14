
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int const**,int const**) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(DH *VAR_2, OSSL_PARAM VAR_3[])
{
    OSSL_PARAM *VAR_4;
    const BIGNUM *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

    if (VAR_2 == ((void*)0))
        return 0;
    if (!FUNC_3(VAR_2, VAR_3))
        return 0;

    FUNC_0(VAR_2, &VAR_6, &VAR_5);
    if ((VAR_4 = FUNC_1(VAR_3,
                                     VAR_0)) != ((void*)0)
        && !FUNC_2(VAR_4, VAR_5))
        return 0;
    if ((VAR_4 = FUNC_1(VAR_3,
                                     VAR_1)) != ((void*)0)
        && !FUNC_2(VAR_4, VAR_6))
        return 0;

    return 1;
}
