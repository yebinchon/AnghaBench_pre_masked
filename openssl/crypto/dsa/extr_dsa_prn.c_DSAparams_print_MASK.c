
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int DSA ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int,int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(BIO *VAR_0, const DSA *VAR_1)
{
    EVP_PKEY *VAR_2;
    int VAR_3;
    VAR_2 = FUNC_1();
    if (VAR_2 == ((void*)0) || !FUNC_3(VAR_2, (DSA *)VAR_1))
        return 0;
    VAR_3 = FUNC_2(VAR_0, VAR_2, 4, ((void*)0));
    FUNC_0(VAR_2);
    return VAR_3;
}
