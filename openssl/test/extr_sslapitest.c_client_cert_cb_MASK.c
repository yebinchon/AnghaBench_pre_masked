
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(SSL *VAR_2, X509 **VAR_3, EVP_PKEY **VAR_4)
{
    X509 *VAR_5, *VAR_6;
    EVP_PKEY *VAR_7;
    BIO *VAR_8 = ((void*)0);


    VAR_6 = FUNC_4(VAR_2);
    if (!FUNC_5(VAR_6))
        return 0;
    FUNC_6(VAR_6);

    VAR_8 = FUNC_1(VAR_0, "r");
    if (!FUNC_5(VAR_8))
        return 0;

    VAR_5 = FUNC_3(VAR_8, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_8);
    if (!FUNC_5(VAR_5))
        return 0;

    VAR_8 = FUNC_1(VAR_1, "r");
    if (!FUNC_5(VAR_8)) {
        FUNC_6(VAR_5);
        return 0;
    }

    VAR_7 = FUNC_2(VAR_8, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_8);
    if (!FUNC_5(VAR_7)) {
        FUNC_6(VAR_5);
        return 0;
    }

    *VAR_3 = VAR_5;
    *VAR_4 = VAR_7;

    return 1;
}
