
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_provider_init_fn ;
typedef int OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,int *,int ) ;

int FUNC_3(OPENSSL_CTX *VAR_2, const char *VAR_3,
                              OSSL_provider_init_fn *VAR_4)
{
    OSSL_PROVIDER *VAR_5 = ((void*)0);

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0,
                  VAR_1);
        return 0;
    }


    if ((VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, 0)) == ((void*)0))
        return 0;





    FUNC_1(VAR_5);

    return 1;
}
