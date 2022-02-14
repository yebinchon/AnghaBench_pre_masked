
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,char const*,size_t,int,void*,size_t,int *) ;
 int FUNC_2 (int const*,char const*,char const*,size_t,int const**,int*,size_t*,int **) ;

int FUNC_3(OSSL_PARAM *VAR_0,
                                   const OSSL_PARAM *VAR_1,
                                   const char *VAR_2, const char *VAR_3,
                                   size_t VAR_4,
                                   void *VAR_5, size_t *VAR_6)
{
    const OSSL_PARAM *VAR_7 = ((void*)0);
    int VAR_8 = 0;
    BIGNUM *VAR_9 = ((void*)0);
    int VAR_10 = 0;

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
        return 0;

    if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
                           &VAR_7, &VAR_8, VAR_6, &VAR_9))
        return 0;





    if (VAR_5 == ((void*)0))
        return 1;

    VAR_10 = FUNC_1(VAR_0, VAR_7, VAR_3, VAR_4, VAR_8,
                             VAR_5, *VAR_6, VAR_9);
    FUNC_0(VAR_9);
    return VAR_10;
}
