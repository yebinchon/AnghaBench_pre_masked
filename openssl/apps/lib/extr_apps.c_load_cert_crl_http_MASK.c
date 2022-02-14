
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_CRL ;
typedef int X509 ;
typedef int OCSP_REQ_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char*) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (char const*,char**,char**,char**,int*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int **) ;
 int FUNC_13 (int *,int **) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_14(const char *VAR_1, X509 **VAR_2, X509_CRL **VAR_3)
{
    char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    BIO *VAR_7 = ((void*)0);
    OCSP_REQ_CTX *VAR_8 = ((void*)0);
    int VAR_9, VAR_10 = 0;
    if (!FUNC_10(VAR_1, &VAR_4, &VAR_5, &VAR_6, &VAR_9))
        goto err;
    if (VAR_9) {
        FUNC_3(VAR_0, "https not supported\n");
        goto err;
    }
    VAR_7 = FUNC_1(VAR_4);
    if (!VAR_7 || !FUNC_4(VAR_7, VAR_5))
        goto err;
    VAR_8 = FUNC_9(VAR_7, 1024);
    if (VAR_8 == ((void*)0))
        goto err;
    if (!FUNC_8(VAR_8, "GET", VAR_6))
        goto err;
    if (!FUNC_6(VAR_8, "Host", VAR_4))
        goto err;
    if (VAR_2) {
        do {
            VAR_10 = FUNC_13(VAR_8, VAR_2);
        } while (VAR_10 == -1);
    } else {
        do {
            VAR_10 = FUNC_12(VAR_8, VAR_3);
        } while (VAR_10 == -1);
    }

 err:
    FUNC_11(VAR_4);
    FUNC_11(VAR_6);
    FUNC_11(VAR_5);
    FUNC_0(VAR_7);
    FUNC_7(VAR_8);
    if (VAR_10 != 1) {
        FUNC_2(VAR_0, "Error loading %s from %s\n",
                   VAR_2 ? "certificate" : "CRL", VAR_1);
        FUNC_5(VAR_0);
    }
    return VAR_10;
}
