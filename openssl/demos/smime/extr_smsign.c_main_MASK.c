
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int PKCS7 ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int * FUNC_7 (int *,int *,int ,int *) ;
 int * FUNC_8 (int *,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *,int *,int *,int) ;
 int FUNC_11 (int *,int *,int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*) ;
 int VAR_2 ;

int FUNC_14(int VAR_3, char **VAR_4)
{
    BIO *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    X509 *VAR_8 = ((void*)0);
    EVP_PKEY *VAR_9 = ((void*)0);
    PKCS7 *VAR_10 = ((void*)0);
    int VAR_11 = 1;






    int VAR_12 = VAR_0 | VAR_1;

    FUNC_6();
    FUNC_3();


    VAR_7 = FUNC_1("signer.pem", "r");

    if (!VAR_7)
        goto err;

    VAR_8 = FUNC_8(VAR_7, ((void*)0), 0, ((void*)0));

    FUNC_2(VAR_7);

    VAR_9 = FUNC_7(VAR_7, ((void*)0), 0, ((void*)0));

    if (!VAR_8 || !VAR_9)
        goto err;



    VAR_5 = FUNC_1("sign.txt", "r");

    if (!VAR_5)
        goto err;


    VAR_10 = FUNC_10(VAR_8, VAR_9, ((void*)0), VAR_5, VAR_12);

    if (!VAR_10)
        goto err;

    VAR_6 = FUNC_1("smout.txt", "w");
    if (!VAR_6)
        goto err;

    if (!(VAR_12 & VAR_1))
        FUNC_2(VAR_5);


    if (!FUNC_11(VAR_6, VAR_10, VAR_5, VAR_12))
        goto err;

    VAR_11 = 0;

 err:
    if (VAR_11) {
        FUNC_13(VAR_2, "Error Signing Data\n");
        FUNC_4(VAR_2);
    }
    FUNC_9(VAR_10);
    FUNC_12(VAR_8);
    FUNC_5(VAR_9);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);

    return VAR_11;

}
