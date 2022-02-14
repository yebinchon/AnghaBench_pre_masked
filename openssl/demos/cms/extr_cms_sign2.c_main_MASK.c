
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int EVP_PKEY ;
typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int *,int *,int ) ;
 int * FUNC_5 (int *,int *,int *,int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int * FUNC_10 (int *,int *,int ,int *) ;
 int * FUNC_11 (int *,int *,int ,int *) ;
 int FUNC_12 (int *,int *,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*) ;
 int VAR_2 ;

int FUNC_15(int VAR_3, char **VAR_4)
{
    BIO *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    X509 *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    EVP_PKEY *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    CMS_ContentInfo *VAR_12 = ((void*)0);
    int VAR_13 = 1;

    FUNC_9();
    FUNC_6();

    VAR_7 = FUNC_1("signer.pem", "r");

    if (!VAR_7)
        goto err;

    VAR_8 = FUNC_11(VAR_7, ((void*)0), 0, ((void*)0));

    FUNC_2(VAR_7);

    VAR_10 = FUNC_10(VAR_7, ((void*)0), 0, ((void*)0));

    FUNC_0(VAR_7);

    VAR_7 = FUNC_1("signer2.pem", "r");

    if (!VAR_7)
        goto err;

    VAR_9 = FUNC_11(VAR_7, ((void*)0), 0, ((void*)0));

    FUNC_2(VAR_7);

    VAR_11 = FUNC_10(VAR_7, ((void*)0), 0, ((void*)0));

    if (!VAR_9 || !VAR_11)
        goto err;

    VAR_5 = FUNC_1("sign.txt", "r");

    if (!VAR_5)
        goto err;

    VAR_12 = FUNC_5(((void*)0), ((void*)0), ((void*)0), VAR_5, VAR_1 | VAR_0);

    if (!VAR_12)
        goto err;



    if (!FUNC_4(VAR_12, VAR_8, VAR_10, ((void*)0), 0))
        goto err;

    if (!FUNC_4(VAR_12, VAR_9, VAR_11, ((void*)0), 0))
        goto err;

    VAR_6 = FUNC_1("smout.txt", "w");
    if (!VAR_6)
        goto err;



    if (!FUNC_12(VAR_6, VAR_12, VAR_5, VAR_1))
        goto err;

    VAR_13 = 0;

 err:

    if (VAR_13) {
        FUNC_14(VAR_2, "Error Signing Data\n");
        FUNC_7(VAR_2);
    }

    FUNC_3(VAR_12);
    FUNC_13(VAR_8);
    FUNC_8(VAR_10);
    FUNC_13(VAR_9);
    FUNC_8(VAR_11);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    return VAR_13;
}
