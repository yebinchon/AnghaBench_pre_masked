
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME ;
typedef int X509 ;
typedef int BIO ;
typedef int ASN1_BIT_STRING ;


 unsigned char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 int FUNC_3 (unsigned char*,int,unsigned char*,int *,int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (int) ;
 int VAR_0 ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned char**) ;

int FUNC_10(BIO *VAR_1, X509 *VAR_2)
{
    unsigned char *VAR_3 = ((void*)0);
    unsigned char *VAR_4;
    int VAR_5;
    int VAR_6;
    unsigned char VAR_7[VAR_0];
    ASN1_BIT_STRING *VAR_8;
    X509_NAME *VAR_9;




    if (FUNC_2(VAR_1, "        Subject OCSP hash: ") <= 0)
        goto err;
    VAR_9 = FUNC_8(VAR_2);
    VAR_5 = FUNC_9(VAR_9, ((void*)0));
    if ((VAR_3 = VAR_4 = FUNC_6(VAR_5)) == ((void*)0))
        goto err;
    FUNC_9(VAR_9, &VAR_4);

    if (!FUNC_3(VAR_3, VAR_5, VAR_7, ((void*)0), FUNC_4(), ((void*)0)))
        goto err;
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (FUNC_2(VAR_1, "%02X", VAR_7[VAR_6]) <= 0)
            goto err;
    }
    FUNC_5(VAR_3);
    VAR_3 = ((void*)0);




    if (FUNC_2(VAR_1, "\n        Public key OCSP hash: ") <= 0)
        goto err;

    VAR_8 = FUNC_7(VAR_2);

    if (VAR_8 == ((void*)0))
        goto err;

    if (!FUNC_3(FUNC_0(VAR_8),
                    FUNC_1(VAR_8), VAR_7, ((void*)0), FUNC_4(),
                    ((void*)0)))
        goto err;
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (FUNC_2(VAR_1, "%02X", VAR_7[VAR_6]) <= 0)
            goto err;
    }
    FUNC_2(VAR_1, "\n");

    return 1;
 err:
    FUNC_5(VAR_3);
    return 0;
}
