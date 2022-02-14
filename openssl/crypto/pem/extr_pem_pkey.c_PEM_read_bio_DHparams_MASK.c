
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int UI_METHOD ;
typedef int OSSL_STORE_INFO ;
typedef int OSSL_STORE_CTX ;
typedef int EVP_PKEY ;
typedef int DH ;
typedef int BIO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *,void*) ;
 int FUNC_10 (int *) ;

DH *FUNC_11(BIO *VAR_3, DH **VAR_4, pem_password_cb *VAR_5, void *VAR_6)
{
    DH *VAR_7 = ((void*)0);
    EVP_PKEY *VAR_8 = ((void*)0);
    OSSL_STORE_CTX *VAR_9 = ((void*)0);
    OSSL_STORE_INFO *VAR_10 = ((void*)0);
    UI_METHOD *VAR_11 = ((void*)0);

    if ((VAR_11 = FUNC_7(VAR_5, 0)) == ((void*)0))
        return ((void*)0);

    if ((VAR_9 = FUNC_9(VAR_3, VAR_11, VAR_6)) == ((void*)0))
        goto err;

    while (!FUNC_5(VAR_9) && (VAR_10 = FUNC_6(VAR_9)) != ((void*)0)) {
        if (FUNC_4(VAR_10) == VAR_2) {
            VAR_8 = FUNC_3(VAR_10);
            if (FUNC_1(VAR_8) == VAR_1
                || FUNC_1(VAR_8) == VAR_0) {
                VAR_7 = FUNC_0(VAR_8);
                break;
            }
        }
        FUNC_2(VAR_10);
    }

    if (VAR_7 != ((void*)0) && VAR_4 != ((void*)0))
        *VAR_4 = VAR_7;

 err:
    FUNC_10(VAR_9);
    FUNC_8(VAR_11);
    FUNC_2(VAR_10);
    return VAR_7;
}
