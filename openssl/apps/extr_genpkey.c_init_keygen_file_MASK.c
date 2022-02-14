
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_10(EVP_PKEY_CTX **VAR_1, const char *VAR_2, ENGINE *VAR_3)
{
    BIO *VAR_4;
    EVP_PKEY *VAR_5 = ((void*)0);
    EVP_PKEY_CTX *VAR_6 = ((void*)0);
    if (*VAR_1) {
        FUNC_3(VAR_0, "Parameters already set!\n");
        return 0;
    }

    VAR_4 = FUNC_1(VAR_2, "r");
    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_0, "Can't open parameter file %s\n", VAR_2);
        return 0;
    }

    VAR_5 = FUNC_9(VAR_4, ((void*)0));
    FUNC_0(VAR_4);

    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_0, "Error reading parameter file %s\n", VAR_2);
        return 0;
    }

    VAR_6 = FUNC_6(VAR_5, VAR_3);
    if (VAR_6 == ((void*)0))
        goto err;
    if (FUNC_8(VAR_6) <= 0)
        goto err;
    FUNC_7(VAR_5);
    *VAR_1 = VAR_6;
    return 1;

 err:
    FUNC_3(VAR_0, "Error initializing context\n");
    FUNC_4(VAR_0);
    FUNC_5(VAR_6);
    FUNC_7(VAR_5);
    return 0;

}
