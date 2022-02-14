
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY_ASN1_METHOD ;
typedef int ENGINE ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char const*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,int *) ;
 int * FUNC_8 (int **,char const*,int) ;
 int FUNC_9 (int*,int *,int *,int *,int *,int const*) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_0 ;

int FUNC_12(EVP_PKEY_CTX **VAR_1,
                 const char *VAR_2, ENGINE *VAR_3, int VAR_4)
{
    EVP_PKEY_CTX *VAR_5 = ((void*)0);
    const EVP_PKEY_ASN1_METHOD *VAR_6;
    ENGINE *VAR_7 = ((void*)0);
    int VAR_8;

    if (*VAR_1) {
        FUNC_1(VAR_0, "Algorithm already set!\n");
        return 0;
    }

    VAR_6 = FUNC_8(&VAR_7, VAR_2, -1);


    if (!VAR_6 && VAR_3)
        VAR_6 = FUNC_3(VAR_3, VAR_2, -1);


    if (!VAR_6) {
        FUNC_0(VAR_0, "Algorithm %s not found\n", VAR_2);
        return 0;
    }

    FUNC_4();

    FUNC_9(&VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_6);

    FUNC_2(VAR_7);

    VAR_5 = FUNC_7(VAR_8, VAR_3);

    if (!VAR_5)
        goto err;
    if (VAR_4) {
        if (FUNC_11(VAR_5) <= 0)
            goto err;
    } else {
        if (FUNC_10(VAR_5) <= 0)
            goto err;
    }

    *VAR_1 = VAR_5;
    return 1;

 err:
    FUNC_0(VAR_0, "Error initializing %s context\n", VAR_2);
    FUNC_5(VAR_0);
    FUNC_6(VAR_5);
    return 0;

}
