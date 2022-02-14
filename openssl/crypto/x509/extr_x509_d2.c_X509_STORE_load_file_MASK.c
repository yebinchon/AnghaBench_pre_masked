
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,char const*,int ) ;
 int * FUNC_2 (int *,int ) ;

int FUNC_3(X509_STORE *VAR_1, const char *VAR_2)
{
    X509_LOOKUP *VAR_3;

    if (VAR_2 == ((void*)0)
        || (VAR_3 = FUNC_2(VAR_1, FUNC_0())) == ((void*)0)
        || FUNC_1(VAR_3, VAR_2, VAR_0) == 0)
        return 0;

    return 1;
}
