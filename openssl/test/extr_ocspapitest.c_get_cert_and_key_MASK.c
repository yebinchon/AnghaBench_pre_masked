
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int * FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(X509 **VAR_2, EVP_PKEY **VAR_3)
{
    BIO *VAR_4, *VAR_5;
    X509 *VAR_6 = ((void*)0);
    EVP_PKEY *VAR_7 = ((void*)0);

    if (!FUNC_5(VAR_4 = FUNC_1(VAR_0, "r")))
        return 0;
    VAR_6 = FUNC_4(VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_4);
    if (!FUNC_5(VAR_5 = FUNC_1(VAR_1, "r")))
        goto end;
    VAR_7 = FUNC_3(VAR_5, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_5);
    if (!FUNC_5(VAR_6) || !FUNC_5(VAR_7))
        goto end;
    *VAR_2 = VAR_6;
    *VAR_3 = VAR_7;
    return 1;
 end:
    FUNC_6(VAR_6);
    FUNC_2(VAR_7);
    return 0;
}
