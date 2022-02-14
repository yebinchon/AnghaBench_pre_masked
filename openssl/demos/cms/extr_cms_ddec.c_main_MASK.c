
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
 int FUNC_4 (int *,int *,int *,int *,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int * FUNC_9 (int *,int *,int ,int *) ;
 int * FUNC_10 (int *,int *,int ,int *) ;
 int * FUNC_11 (int *,int *,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*) ;
 int VAR_0 ;

int FUNC_14(int VAR_1, char **VAR_2)
{
    BIO *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    X509 *VAR_7 = ((void*)0);
    EVP_PKEY *VAR_8 = ((void*)0);
    CMS_ContentInfo *VAR_9 = ((void*)0);
    int VAR_10 = 1;

    FUNC_8();
    FUNC_5();


    VAR_5 = FUNC_1("signer.pem", "r");

    if (!VAR_5)
        goto err;

    VAR_7 = FUNC_11(VAR_5, ((void*)0), 0, ((void*)0));

    FUNC_2(VAR_5);

    VAR_8 = FUNC_10(VAR_5, ((void*)0), 0, ((void*)0));

    if (!VAR_7 || !VAR_8)
        goto err;



    VAR_3 = FUNC_1("smencr.pem", "r");

    if (!VAR_3)
        goto err;


    VAR_9 = FUNC_9(VAR_3, ((void*)0), 0, ((void*)0));

    if (!VAR_9)
        goto err;


    VAR_6 = FUNC_1("smencr.out", "rb");

    if (!VAR_3)
        goto err;

    VAR_4 = FUNC_1("encrout.txt", "w");
    if (!VAR_4)
        goto err;


    if (!FUNC_4(VAR_9, VAR_8, VAR_7, VAR_6, VAR_4, 0))
        goto err;

    VAR_10 = 0;

 err:

    if (VAR_10) {
        FUNC_13(VAR_0, "Error Decrypting Data\n");
        FUNC_6(VAR_0);
    }

    FUNC_3(VAR_9);
    FUNC_12(VAR_7);
    FUNC_7(VAR_8);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    return VAR_10;
}
