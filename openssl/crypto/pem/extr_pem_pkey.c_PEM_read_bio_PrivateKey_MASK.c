
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int UI_METHOD ;
typedef int OSSL_STORE_INFO ;
typedef int OSSL_STORE_CTX ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *,void*) ;
 int FUNC_9 (int *) ;

EVP_PKEY *FUNC_10(BIO *VAR_2, EVP_PKEY **VAR_3, pem_password_cb *VAR_4,
                                  void *VAR_5)
{
    EVP_PKEY *VAR_6 = ((void*)0);
    OSSL_STORE_CTX *VAR_7 = ((void*)0);
    OSSL_STORE_INFO *VAR_8 = ((void*)0);
    UI_METHOD *VAR_9 = ((void*)0);

    if ((VAR_9 = FUNC_6(VAR_4, 0)) == ((void*)0))
        return ((void*)0);

    if ((VAR_7 = FUNC_8(VAR_2, VAR_9, VAR_5)) == ((void*)0))
        goto err;

    {
        int VAR_10 = 1;
        if (!FUNC_3(VAR_7, VAR_0, &VAR_10))
            goto err;
    }


    while (!FUNC_4(VAR_7) && (VAR_8 = FUNC_5(VAR_7)) != ((void*)0)) {
        if (FUNC_2(VAR_8) == VAR_1) {
            VAR_6 = FUNC_1(VAR_8);
            break;
        }
        FUNC_0(VAR_8);
    }

    if (VAR_6 != ((void*)0) && VAR_3 != ((void*)0))
        *VAR_3 = VAR_6;

 err:
    FUNC_9(VAR_7);
    FUNC_7(VAR_9);
    FUNC_0(VAR_8);
    return VAR_6;
}
