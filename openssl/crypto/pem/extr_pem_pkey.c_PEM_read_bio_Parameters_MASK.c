
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_STORE_INFO ;
typedef int OSSL_STORE_CTX ;
typedef int EVP_PKEY ;
typedef int BIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;

EVP_PKEY *FUNC_8(BIO *VAR_1, EVP_PKEY **VAR_2)
{
    EVP_PKEY *VAR_3 = ((void*)0);
    OSSL_STORE_CTX *VAR_4 = ((void*)0);
    OSSL_STORE_INFO *VAR_5 = ((void*)0);

    if ((VAR_4 = FUNC_6(VAR_1, FUNC_5(), ((void*)0))) == ((void*)0))
        goto err;

    while (!FUNC_3(VAR_4) && (VAR_5 = FUNC_4(VAR_4)) != ((void*)0)) {
        if (FUNC_2(VAR_5) == VAR_0) {
            VAR_3 = FUNC_1(VAR_5);
            break;
        }
        FUNC_0(VAR_5);
    }

    if (VAR_3 != ((void*)0) && VAR_2 != ((void*)0))
        *VAR_2 = VAR_3;

 err:
    FUNC_7(VAR_4);
    FUNC_0(VAR_5);
    return VAR_3;
}
