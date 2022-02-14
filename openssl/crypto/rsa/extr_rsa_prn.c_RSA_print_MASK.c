
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int,int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(BIO *VAR_0, const RSA *VAR_1, int VAR_2)
{
    EVP_PKEY *VAR_3;
    int VAR_4;
    VAR_3 = FUNC_1();
    if (VAR_3 == ((void*)0) || !FUNC_3(VAR_3, (RSA *)VAR_1))
        return 0;
    VAR_4 = FUNC_2(VAR_0, VAR_3, VAR_2, ((void*)0));
    FUNC_0(VAR_3);
    return VAR_4;
}
