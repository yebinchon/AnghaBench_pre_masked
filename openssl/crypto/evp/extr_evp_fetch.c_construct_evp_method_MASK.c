
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evp_method_data_st {void* (* method_from_dispatch ) (int,int const*,int *) ;} ;
typedef int OSSL_PROVIDER ;
typedef int OSSL_NAMEMAP ;
typedef int OSSL_DISPATCH ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 void* FUNC_3 (int,int const*,int *) ;

__attribute__((used)) static void *FUNC_4(const char *VAR_0, const OSSL_DISPATCH *VAR_1,
                                  OSSL_PROVIDER *VAR_2, void *VAR_3)
{






    struct evp_method_data_st *VAR_4 = VAR_3;
    OPENSSL_CTX *VAR_5 = FUNC_2(VAR_2);
    OSSL_NAMEMAP *VAR_6 = FUNC_1(VAR_5);
    int VAR_7 = FUNC_0(VAR_6, VAR_0);

    if (VAR_7 == 0)
        return ((void*)0);
    return VAR_4->method_from_dispatch(VAR_7, VAR_1, VAR_2);
}
