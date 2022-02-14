
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int,int *) ;
 scalar_t__ VAR_0 ;






 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int *) ;
 int FUNC_22 (char*,int *,char**,int *) ;
 int VAR_4 ;
 int * FUNC_23 (char const*,int,char*) ;
 int * FUNC_24 (char const*,int,int ,char*,int *,char*) ;
 int * FUNC_25 (char const*,int,int ,int *,int *,char*) ;

__attribute__((used)) static EVP_PKEY_CTX *FUNC_26(const char *VAR_5, int *VAR_6,
                              const char *VAR_7, int VAR_8, int VAR_9,
                              char *VAR_10, int VAR_11, ENGINE *VAR_12,
                              const int VAR_13, int VAR_14,
                              EVP_PKEY **VAR_15)
{
    EVP_PKEY *VAR_16 = ((void*)0);
    EVP_PKEY_CTX *VAR_17 = ((void*)0);
    ENGINE *VAR_18 = ((void*)0);
    char *VAR_19 = ((void*)0);
    int VAR_20 = -1;
    X509 *VAR_21;
    if (((VAR_11 == 134) || (VAR_11 == 137)
         || (VAR_11 == 136))
        && (VAR_9 != 129 && VAR_5 == ((void*)0))) {
        FUNC_0(VAR_4, "A private key is needed for this operation\n");
        goto end;
    }
    if (!FUNC_22(VAR_10, ((void*)0), &VAR_19, ((void*)0))) {
        FUNC_0(VAR_4, "Error getting password\n");
        goto end;
    }
    switch (VAR_9) {
    case 129:
        VAR_16 = FUNC_24(VAR_7, VAR_8, 0, VAR_19, VAR_12, "Private Key");
        break;

    case 128:
        VAR_16 = FUNC_25(VAR_7, VAR_8, 0, ((void*)0), VAR_12, "Public Key");
        break;

    case 131:
        VAR_21 = FUNC_23(VAR_7, VAR_8, "Certificate");
        if (VAR_21) {
            VAR_16 = FUNC_21(VAR_21);
            FUNC_20(VAR_21);
        }
        break;

    case 130:
        break;

    }


    if (VAR_13)
        VAR_18 = VAR_12;


    if (VAR_5 != ((void*)0)) {
        int VAR_22 = FUNC_18(VAR_5);

        if (VAR_22 == VAR_3) {
            VAR_22 = FUNC_17(VAR_5);
            if (VAR_22 == VAR_3) {
                FUNC_0(VAR_4, "The given KDF \"%s\" is unknown.\n",
                           VAR_5);
                goto end;
            }
        }
        VAR_17 = FUNC_5(VAR_22, VAR_18);
    } else {
        if (VAR_16 == ((void*)0))
            goto end;



        if (FUNC_11(VAR_16) == VAR_0) {
            EC_KEY *VAR_23 = ((void*)0);
            const EC_GROUP *VAR_24 = ((void*)0);
            int VAR_25;

            if ((VAR_23 = FUNC_10(VAR_16)) == ((void*)0)
                    || (VAR_24 = FUNC_2(VAR_23)) == ((void*)0)
                    || (VAR_25 = FUNC_1(VAR_24)) == 0)
                goto end;
            if (VAR_25 == VAR_2)
                FUNC_12(VAR_16, VAR_1);
        }

        *VAR_6 = FUNC_14(VAR_16);
        VAR_17 = FUNC_4(VAR_16, VAR_18);
        if (VAR_15 != ((void*)0))
            *VAR_15 = VAR_16;
        FUNC_9(VAR_16);
    }

    if (VAR_17 == ((void*)0))
        goto end;






    if (VAR_14) {
        VAR_20 = 1;
    } else {
        switch (VAR_11) {
        case 134:
            VAR_20 = FUNC_13(VAR_17);
            break;

        case 133:
            VAR_20 = FUNC_15(VAR_17);
            break;

        case 132:
            VAR_20 = FUNC_16(VAR_17);
            break;

        case 135:
            VAR_20 = FUNC_8(VAR_17);
            break;

        case 137:
            VAR_20 = FUNC_6(VAR_17);
            break;

        case 136:
            VAR_20 = FUNC_7(VAR_17);
            break;
        }
    }

    if (VAR_20 <= 0) {
        FUNC_3(VAR_17);
        VAR_17 = ((void*)0);
    }

 end:
    FUNC_19(VAR_19);
    return VAR_17;

}
