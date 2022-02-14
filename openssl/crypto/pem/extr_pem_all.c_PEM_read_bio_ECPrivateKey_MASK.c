
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int BIO ;


 int * FUNC_0 (int *,int *,int *,void*) ;
 int * FUNC_1 (int *,int **) ;

EC_KEY *FUNC_2(BIO *VAR_0, EC_KEY **VAR_1, pem_password_cb *VAR_2,
                                  void *VAR_3)
{
    EVP_PKEY *VAR_4;
    VAR_4 = FUNC_0(VAR_0, ((void*)0), VAR_2, VAR_3);
    return FUNC_1(VAR_4, VAR_1);
}
