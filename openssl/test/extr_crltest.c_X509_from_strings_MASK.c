
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int * FUNC_3 (char const**,char**) ;

__attribute__((used)) static X509 *FUNC_4(const char **VAR_0)
{
    char *VAR_1;
    BIO *VAR_2 = FUNC_3(VAR_0, &VAR_1);
    X509 *VAR_3 = FUNC_2(VAR_2, ((void*)0), ((void*)0), ((void*)0));

    FUNC_1(VAR_1);
    FUNC_0(VAR_2);
    return VAR_3;
}
