
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const X509_REQ ;
typedef char const BIO ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int *) ;

X509_REQ *FUNC_4(const char *VAR_0)
{
    X509_REQ *VAR_1 = ((void*)0);
    BIO *VAR_2 = ((void*)0);

    if (!FUNC_2(VAR_0) || !FUNC_2(VAR_2 = FUNC_1(VAR_0, "rb")))
        return ((void*)0);
    (void)FUNC_2(VAR_1 = FUNC_3(VAR_2, ((void*)0)));
    FUNC_0(VAR_2);
    return VAR_1;
}
