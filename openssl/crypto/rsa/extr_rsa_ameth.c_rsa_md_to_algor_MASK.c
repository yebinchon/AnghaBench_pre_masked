
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ALGOR ;
typedef int EVP_MD ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int const*) ;

__attribute__((used)) static int FUNC_3(X509_ALGOR **VAR_1, const EVP_MD *VAR_2)
{
    if (VAR_2 == ((void*)0) || FUNC_0(VAR_2) == VAR_0)
        return 1;
    *VAR_1 = FUNC_1();
    if (*VAR_1 == ((void*)0))
        return 0;
    FUNC_2(*VAR_1, VAR_2);
    return 1;
}
