
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int c448_error_t ;
typedef int OPENSSL_CTX ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static c448_error_t FUNC_7(OPENSSL_CTX *VAR_2, uint8_t *VAR_3, size_t VAR_4,
                                 const uint8_t *VAR_5, size_t VAR_6)
{
    EVP_MD_CTX *VAR_7 = FUNC_4();
    EVP_MD *VAR_8 = ((void*)0);
    c448_error_t VAR_9 = VAR_0;

    if (VAR_7 == ((void*)0))
        return VAR_0;

    VAR_8 = FUNC_5(VAR_2, "SHAKE256", ((void*)0));
    if (VAR_8 == ((void*)0))
        goto err;

    if (!FUNC_1(VAR_7, VAR_8, ((void*)0))
            || !FUNC_2(VAR_7, VAR_5, VAR_6)
            || !FUNC_0(VAR_7, VAR_3, VAR_4))
        goto err;

    VAR_9 = VAR_1;
 err:
    FUNC_3(VAR_7);
    FUNC_6(VAR_8);
    return VAR_9;
}
