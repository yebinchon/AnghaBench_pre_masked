
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_REQ ;
typedef int BIO ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int * FUNC_6 (int *,int *,int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(void)
{

    X509_REQ *VAR_1 = ((void*)0);
    BIO *VAR_2 = ((void*)0);
    int VAR_3 = 0;
    ASN1_OCTET_STRING *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    char *VAR_6 = "this is an ID";

    VAR_2 = FUNC_5(VAR_0, "r");
    if (VAR_2 == ((void*)0))
        goto err;

    VAR_1 = FUNC_6(VAR_2, ((void*)0), 0, ((void*)0));
    if (VAR_1 == ((void*)0))
        goto err;

    VAR_4 = FUNC_2();
    if (VAR_4 == ((void*)0))
        goto err;

    if (!FUNC_3(VAR_4, (unsigned char *)VAR_6, (int)FUNC_12(VAR_6))) {
        FUNC_1(VAR_4);
        goto err;
    }

    FUNC_11(VAR_1, VAR_4);

    VAR_5 = FUNC_10(VAR_1);
    if (!FUNC_8(VAR_5)
            || !FUNC_7(FUNC_0(VAR_4, VAR_5), 0))
        goto err;

    VAR_3 = 1;
 err:
    FUNC_9(VAR_1);
    FUNC_4(VAR_2);
    return VAR_3;
}
