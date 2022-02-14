
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int *,int const*,char const*,size_t,int,void*,size_t,int *) ;
 int FUNC_5 (int const*,char const*,char const*,size_t,int const**,int*,size_t*,int **) ;

int FUNC_6(OSSL_PARAM *VAR_1,
                                  const OSSL_PARAM *VAR_2,
                                  const char *VAR_3, const char *VAR_4,
                                  size_t VAR_5)
{
    const OSSL_PARAM *VAR_6 = ((void*)0);
    int VAR_7 = 0;
    void *VAR_8 = ((void*)0);
    size_t VAR_9 = 0;
    BIGNUM *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
        return 0;

    if (!FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5,
                           &VAR_6, &VAR_7, &VAR_9, &VAR_10))
        return 0;

    if ((VAR_8 = FUNC_3(VAR_9 > 0 ? VAR_9 : 1)) == ((void*)0)) {
        FUNC_1(0, VAR_0);
        return 0;
    }

    VAR_11 = FUNC_4(VAR_1, VAR_6, VAR_4, VAR_5, VAR_7,
                             VAR_8, VAR_9, VAR_10);
    FUNC_0(VAR_10);
    if (!VAR_11)
        FUNC_2(VAR_8);
    return VAR_11;
}
