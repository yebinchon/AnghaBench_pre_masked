
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int PKCS12 ;
typedef int FILE ;
typedef int EVP_PKEY ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int * FUNC_4 (int *,int *,int *,int *) ;
 int * FUNC_5 (char*,char*,int *,int *,int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int VAR_0 ;

int FUNC_13(int VAR_1, char **VAR_2)
{
    FILE *VAR_3;
    EVP_PKEY *VAR_4;
    X509 *VAR_5;
    PKCS12 *VAR_6;
    if (VAR_1 != 5) {
        FUNC_10(VAR_0, "Usage: pkwrite infile password name p12file\n");
        FUNC_7(1);
    }
    FUNC_2();
    FUNC_0();
    if ((VAR_3 = FUNC_9(VAR_2[1], "r")) == ((void*)0)) {
        FUNC_10(VAR_0, "Error opening file %s\n", VAR_2[1]);
        FUNC_7(1);
    }
    VAR_5 = FUNC_4(VAR_3, ((void*)0), ((void*)0), ((void*)0));
    FUNC_12(VAR_3);
    VAR_4 = FUNC_3(VAR_3, ((void*)0), ((void*)0), ((void*)0));
    FUNC_8(VAR_3);
    VAR_6 = FUNC_5(VAR_2[2], VAR_2[3], VAR_4, VAR_5, ((void*)0), 0, 0, 0, 0, 0);
    if (!VAR_6) {
        FUNC_10(VAR_0, "Error creating PKCS#12 structure\n");
        FUNC_1(VAR_0);
        FUNC_7(1);
    }
    if ((VAR_3 = FUNC_9(VAR_2[4], "wb")) == ((void*)0)) {
        FUNC_10(VAR_0, "Error opening file %s\n", VAR_2[1]);
        FUNC_1(VAR_0);
        FUNC_7(1);
    }
    FUNC_11(VAR_3, VAR_6);
    FUNC_6(VAR_6);
    FUNC_8(VAR_3);
    return 0;
}
