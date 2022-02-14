
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EVP_MAC_CTX ;
typedef int EVP_MAC ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(EVP_PKEY *VAR_0)
{
    EVP_MAC_CTX *VAR_1 = FUNC_3(VAR_0);
    EVP_MAC *VAR_2 = VAR_1 == ((void*)0) ? ((void*)0) : FUNC_1(VAR_1);

    FUNC_0(VAR_1);
    FUNC_2(VAR_2);
}
