
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int DSA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int const*,int **) ;
 int * FUNC_3 (int const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(DSA *VAR_3, const OSSL_PARAM VAR_4[])
{
    const OSSL_PARAM *VAR_5, *VAR_6, *VAR_7;
    BIGNUM *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

    if (VAR_3 == ((void*)0))
        return 0;

    VAR_5 = FUNC_3(VAR_4, VAR_1);
    VAR_6 = FUNC_3(VAR_4, VAR_2);
    VAR_7 = FUNC_3(VAR_4, VAR_0);

    if ((VAR_5 != ((void*)0) && !FUNC_2(VAR_5, &VAR_8))
        || (VAR_6 != ((void*)0) && !FUNC_2(VAR_6, &VAR_9))
        || (VAR_7 != ((void*)0) && !FUNC_2(VAR_7, &VAR_10)))
        goto err;

    if (!FUNC_1(VAR_3, VAR_8, VAR_9, VAR_10))
        goto err;

    return 1;

 err:
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    return 0;
}
