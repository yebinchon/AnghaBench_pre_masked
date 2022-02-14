
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int DH ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;

EVP_PKEY *FUNC_3(DH *VAR_0)
{
    EVP_PKEY *VAR_1;
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    VAR_1 = FUNC_1();
    if (FUNC_2(VAR_1, VAR_0) <= 0) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
