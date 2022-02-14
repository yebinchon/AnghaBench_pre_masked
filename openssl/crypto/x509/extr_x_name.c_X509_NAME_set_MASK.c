
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const X509_NAME ;


 int const* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

int FUNC_2(X509_NAME **VAR_0, const X509_NAME *VAR_1)
{
    X509_NAME *VAR_2;

    if (*VAR_0 == VAR_1)
        return *VAR_0 != ((void*)0);
    if ((VAR_2 = FUNC_0(VAR_1)) == ((void*)0))
        return 0;
    FUNC_1(*VAR_0);
    *VAR_0 = VAR_2;
    return 1;
}
