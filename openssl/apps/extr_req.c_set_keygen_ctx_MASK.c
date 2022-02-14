
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY_ASN1_METHOD ;
typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 int * FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int *,long) ;
 int VAR_0 ;
 int * FUNC_11 (int **,int) ;
 int * FUNC_12 (int **,char const*,int) ;
 int FUNC_13 (int *,int*,int *,int *,char const**,int const*) ;
 int FUNC_14 (int *) ;
 long FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 char* FUNC_19 (char const*) ;
 int * FUNC_20 (int *,int *) ;
 int * FUNC_21 (int *,int *,int *,int *) ;
 int FUNC_22 (int *) ;
 int * FUNC_23 (int *) ;
 long FUNC_24 (char const*) ;
 int VAR_1 ;
 char* FUNC_25 (char const*,char) ;
 int FUNC_26 (char const*) ;
 scalar_t__ FUNC_27 (char const*,char*,int) ;

__attribute__((used)) static EVP_PKEY_CTX *FUNC_28(const char *VAR_2,
                                    int *VAR_3, long *VAR_4,
                                    char **VAR_5, ENGINE *VAR_6)
{
    EVP_PKEY_CTX *VAR_7 = ((void*)0);
    EVP_PKEY *VAR_8 = ((void*)0);
    long VAR_9 = -1;
    BIO *VAR_10 = ((void*)0);
    const char *VAR_11 = ((void*)0);

    if (VAR_2 == ((void*)0)) {
        *VAR_3 = VAR_0;
        VAR_9 = *VAR_4;
    } else if (VAR_2[0] >= '0' && VAR_2[0] <= '9') {
        *VAR_3 = VAR_0;
        VAR_9 = FUNC_24(VAR_2);
        *VAR_4 = VAR_9;
    } else if (FUNC_27(VAR_2, "param:", 6) == 0) {
        VAR_11 = VAR_2 + 6;
    } else {
        const char *VAR_12 = FUNC_25(VAR_2, ':');
        int VAR_13;
        ENGINE *VAR_14;
        const EVP_PKEY_ASN1_METHOD *VAR_15;

        if (VAR_12 != ((void*)0))
            VAR_13 = VAR_12 - VAR_2;
        else
            VAR_13 = FUNC_26(VAR_2);





        VAR_15 = FUNC_12(&VAR_14, VAR_2, VAR_13);

        if (VAR_15 == ((void*)0)) {
            FUNC_2(VAR_1, "Unknown algorithm %.*s\n", VAR_13, VAR_2);
            return ((void*)0);
        }

        FUNC_13(((void*)0), VAR_3, ((void*)0), ((void*)0), ((void*)0), VAR_15);

        FUNC_5(VAR_14);

        if (*VAR_3 == VAR_0) {
            if (VAR_12 != ((void*)0)) {
                VAR_9 = FUNC_24(VAR_12 + 1);
                *VAR_4 = VAR_9;
            } else {
                VAR_9 = *VAR_4;
            }
        } else if (VAR_12 != ((void*)0)) {
            VAR_11 = VAR_12 + 1;
        }
    }

    if (VAR_11 != ((void*)0)) {
        VAR_10 = FUNC_1(VAR_11, "r");
        if (VAR_10 == ((void*)0)) {
            FUNC_2(VAR_1, "Can't open parameter file %s\n", VAR_11);
            return ((void*)0);
        }
        VAR_8 = FUNC_20(VAR_10, ((void*)0));

        if (VAR_8 == ((void*)0)) {
            X509 *VAR_16;

            (void)FUNC_4(VAR_10);
            VAR_16 = FUNC_21(VAR_10, ((void*)0), ((void*)0), ((void*)0));
            if (VAR_16 != ((void*)0)) {
                VAR_8 = FUNC_23(VAR_16);
                FUNC_22(VAR_16);
            }
        }

        FUNC_0(VAR_10);

        if (VAR_8 == ((void*)0)) {
            FUNC_2(VAR_1, "Error reading parameter file %s\n", VAR_11);
            return ((void*)0);
        }
        if (*VAR_3 == -1) {
            *VAR_3 = FUNC_17(VAR_8);
        } else if (*VAR_3 != FUNC_14(VAR_8)) {
            FUNC_2(VAR_1, "Key Type does not match parameters\n");
            FUNC_16(VAR_8);
            return ((void*)0);
        }
    }

    if (VAR_5 != ((void*)0)) {
        const EVP_PKEY_ASN1_METHOD *VAR_17;
        ENGINE *VAR_18;
        const char *VAR_19;

        VAR_17 = FUNC_11(&VAR_18, *VAR_3);
        if (VAR_17 == ((void*)0)) {
            FUNC_3(VAR_1, "Internal error: can't find key algorithm\n");
            return ((void*)0);
        }
        FUNC_13(((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_19, VAR_17);
        *VAR_5 = FUNC_19(VAR_19);

        FUNC_5(VAR_18);

    }

    if (VAR_8 != ((void*)0)) {
        VAR_7 = FUNC_8(VAR_8, VAR_6);
        *VAR_4 = FUNC_15(VAR_8);
        FUNC_16(VAR_8);
    } else {
        VAR_7 = FUNC_9(*VAR_3, VAR_6);
    }

    if (VAR_7 == ((void*)0)) {
        FUNC_3(VAR_1, "Error allocating keygen context\n");
        FUNC_6(VAR_1);
        return ((void*)0);
    }

    if (FUNC_18(VAR_7) <= 0) {
        FUNC_3(VAR_1, "Error initializing keygen context\n");
        FUNC_6(VAR_1);
        FUNC_7(VAR_7);
        return ((void*)0);
    }

    if ((*VAR_3 == VAR_0) && (VAR_9 != -1)) {
        if (FUNC_10(VAR_7, VAR_9) <= 0) {
            FUNC_3(VAR_1, "Error setting RSA keysize\n");
            FUNC_6(VAR_1);
            FUNC_7(VAR_7);
            return ((void*)0);
        }
    }


    return VAR_7;
}
