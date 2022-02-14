
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE_CTX ;
typedef int X509_STORE ;
typedef int X509_OBJECT ;
typedef int X509_LOOKUP ;
typedef int X509_CRL ;
typedef int OPTION_CHOICE ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;
typedef int BIO ;
typedef int ASN1_INTEGER ;
typedef int ASN1_BIT_STRING ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int *,int *,int const*,int ) ;
 int FUNC_12 (int *,int const*,unsigned char*,unsigned int*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int const**,int *) ;
 int * FUNC_17 (int *,int ,int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *,int ) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 () ;
 int VAR_5 ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int * FUNC_27 (int *,int ,int ) ;
 int FUNC_28 (int *,int *,int *,int *) ;
 int * FUNC_29 () ;
 int * FUNC_30 (int *,int ) ;
 int FUNC_31 (int *) ;
 int * FUNC_32 (int ) ;
 int VAR_6 ;
 int * FUNC_33 (char*,char,int) ;
 int VAR_7 ;
 int FUNC_34 (int const*) ;
 int VAR_8 ;
 int FUNC_35 () ;
 int FUNC_36 (int ,int *) ;
 scalar_t__ FUNC_37 (int *,int *) ;
 int * FUNC_38 (char*,int) ;
 int * FUNC_39 (char*,int,int ,int *,int *,char*) ;
 void* FUNC_40 () ;
 int FUNC_41 (void*,int ,int*) ;
 int FUNC_42 (int ) ;
 char* FUNC_43 (int,char**,int ) ;
 int FUNC_44 (int ,int const**) ;
 int FUNC_45 () ;
 int FUNC_46 () ;
 int FUNC_47 () ;
 int FUNC_48 (int ,char*,int ,int ) ;
 int FUNC_49 (void*) ;
 int * FUNC_50 (char const*,int,char const*,int,char const*,int) ;

int FUNC_51(int VAR_9, char **VAR_10)
{
    X509_CRL *VAR_11 = ((void*)0);
    BIO *VAR_12 = ((void*)0);
    X509_STORE *VAR_13 = ((void*)0);
    X509_STORE_CTX *VAR_14 = ((void*)0);
    X509_LOOKUP *VAR_15 = ((void*)0);
    X509_OBJECT *VAR_16 = ((void*)0);
    EVP_PKEY *VAR_17;
    const EVP_MD *VAR_18 = FUNC_8();
    char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0), *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
    const char *VAR_23 = ((void*)0), *VAR_24 = ((void*)0), *VAR_25 = ((void*)0), *VAR_26;
    OPTION_CHOICE VAR_27;
    int VAR_28 = 0, VAR_29 = 0, VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;
    int VAR_33 = VAR_2, VAR_34 = VAR_2, VAR_35 = VAR_2;
    int VAR_36 = 1, VAR_37 = 0, VAR_38 = 0, VAR_39 = 0, VAR_40 = 0;
    int VAR_41 = 0, VAR_42 = 0, VAR_43 = 0, VAR_44 = 0, VAR_45 = 0;
    int VAR_46;

    int VAR_47 = 0;


    VAR_26 = FUNC_43(VAR_9, VAR_10, VAR_8);
    while ((VAR_27 = FUNC_45()) != 151) {
        switch (VAR_27) {
        case 151:
        case 150:
 opthelp:
            FUNC_3(VAR_6, "%s: Use -help for summary.\n", VAR_26);
            goto end;
        case 145:
            FUNC_42(VAR_8);
            VAR_36 = 0;
            goto end;
        case 143:
            if (!FUNC_41(FUNC_40(), VAR_4, &VAR_33))
                goto opthelp;
            break;
        case 144:
            VAR_19 = FUNC_40();
            break;
        case 130:
            if (!FUNC_41(FUNC_40(), VAR_4, &VAR_34))
                goto opthelp;
            break;
        case 131:
            VAR_20 = FUNC_40();
            break;
        case 140:
            if (!FUNC_41(FUNC_40(), VAR_4, &VAR_35))
                goto opthelp;
            break;
        case 141:
            VAR_22 = FUNC_40();
            break;
        case 148:
            VAR_21 = FUNC_40();
            break;
        case 154:
            VAR_24 = FUNC_40();
            VAR_42 = 1;
            break;
        case 155:
            VAR_23 = FUNC_40();
            VAR_42 = 1;
            break;
        case 153:
            VAR_25 = FUNC_40();
            VAR_42 = 1;
            break;
        case 134:
            VAR_44 = 1;
            break;
        case 135:
            VAR_43 = 1;
            break;
        case 133:
            VAR_45 = 1;
            break;
        case 146:

            VAR_47 = ++VAR_37;

            break;
        case 128:
            VAR_42 = 1;
            break;
        case 129:
            VAR_41 = 1;
            break;
        case 147:
            VAR_28 = ++VAR_37;
            break;
        case 142:
            VAR_29 = ++VAR_37;
            break;
        case 139:
            VAR_30 = ++VAR_37;
            break;
        case 136:
            VAR_31 = ++VAR_37;
            break;
        case 132:
            VAR_32 = ++VAR_37;
            break;
        case 149:
            VAR_39 = ++VAR_37;
            break;
        case 152:
            VAR_40 = ++VAR_37;
            break;
        case 156:
            VAR_38 = 1;
            break;
        case 137:
            if (!FUNC_49(FUNC_40()))
                goto opthelp;
            break;
        case 138:
            if (!FUNC_44(FUNC_47(), &VAR_18))
                goto opthelp;
        }
    }
    VAR_9 = FUNC_46();
    if (VAR_9 != 0)
        goto opthelp;

    VAR_11 = FUNC_38(VAR_19, VAR_33);
    if (VAR_11 == ((void*)0))
        goto end;

    if (VAR_42) {
        if ((VAR_13 = FUNC_50(VAR_23, VAR_43, VAR_24, VAR_44,
                                  VAR_25, VAR_45)) == ((void*)0))
            goto end;
        VAR_15 = FUNC_30(VAR_13, FUNC_21());
        if (VAR_15 == ((void*)0))
            goto end;
        VAR_14 = FUNC_29();
        if (VAR_14 == ((void*)0) || !FUNC_28(VAR_14, VAR_13, ((void*)0), ((void*)0))) {
            FUNC_3(VAR_6, "Error initialising X509 store\n");
            goto end;
        }

        VAR_16 = FUNC_27(VAR_14, VAR_5,
                                                 FUNC_18(VAR_11));
        if (VAR_16 == ((void*)0)) {
            FUNC_3(VAR_6, "Error getting CRL issuer certificate\n");
            goto end;
        }
        VAR_17 = FUNC_32(FUNC_25(VAR_16));
        FUNC_24(VAR_16);
        if (VAR_17 == ((void*)0)) {
            FUNC_3(VAR_6, "Error getting CRL issuer public key\n");
            goto end;
        }
        VAR_46 = FUNC_20(VAR_11, VAR_17);
        FUNC_7(VAR_17);
        if (VAR_46 < 0)
            goto end;
        if (VAR_46 == 0)
            FUNC_3(VAR_6, "verify failure\n");
        else
            FUNC_3(VAR_6, "verify OK\n");
    }

    if (VAR_21) {
        X509_CRL *VAR_48, *VAR_49;
        if (!VAR_22) {
            FUNC_4(VAR_6, "Missing CRL signing key\n");
            goto end;
        }
        VAR_48 = FUNC_38(VAR_21, VAR_33);
        if (!VAR_48)
            goto end;
        VAR_17 = FUNC_39(VAR_22, VAR_35, 0, ((void*)0), ((void*)0), "CRL signing key");
        if (VAR_17 == ((void*)0)) {
            FUNC_13(VAR_48);
            goto end;
        }
        VAR_49 = FUNC_11(VAR_11, VAR_48, VAR_17, VAR_18, 0);
        FUNC_13(VAR_48);
        FUNC_7(VAR_17);
        if (VAR_49) {
            FUNC_13(VAR_11);
            VAR_11 = VAR_49;
        } else {
            FUNC_4(VAR_6, "Error creating delta CRL\n");
            goto end;
        }
    }

    if (VAR_38) {
        const ASN1_BIT_STRING *VAR_50;

        FUNC_16(VAR_11, &VAR_50, ((void*)0));
        FUNC_34(VAR_50);
    }

    if (VAR_37) {
        for (VAR_46 = 1; VAR_46 <= VAR_37; VAR_46++) {
            if (VAR_29 == VAR_46) {
                FUNC_48(VAR_7, "issuer=", FUNC_18(VAR_11),
                           FUNC_35());
            }
            if (VAR_40 == VAR_46) {
                ASN1_INTEGER *VAR_51;
                VAR_51 = FUNC_17(VAR_11, VAR_3, ((void*)0), ((void*)0));
                FUNC_3(VAR_7, "crlNumber=");
                if (VAR_51) {
                    FUNC_36(VAR_7, VAR_51);
                    FUNC_0(VAR_51);
                } else
                    FUNC_4(VAR_7, "<NONE>");
                FUNC_3(VAR_7, "\n");
            }
            if (VAR_28 == VAR_46) {
                FUNC_3(VAR_7, "%08lx\n",
                           FUNC_22(FUNC_18(VAR_11)));
            }

            if (VAR_47 == VAR_46) {
                FUNC_3(VAR_7, "%08lx\n",
                           FUNC_23(FUNC_18(VAR_11)));
            }

            if (VAR_30 == VAR_46) {
                FUNC_3(VAR_7, "lastUpdate=");
                FUNC_1(VAR_7, FUNC_14(VAR_11));
                FUNC_3(VAR_7, "\n");
            }
            if (VAR_31 == VAR_46) {
                FUNC_3(VAR_7, "nextUpdate=");
                if (FUNC_15(VAR_11))
                    FUNC_1(VAR_7, FUNC_15(VAR_11));
                else
                    FUNC_3(VAR_7, "NONE");
                FUNC_3(VAR_7, "\n");
            }
            if (VAR_39 == VAR_46) {
                int VAR_52;
                unsigned int VAR_53;
                unsigned char VAR_54[VAR_0];

                if (!FUNC_12(VAR_11, VAR_18, VAR_54, &VAR_53)) {
                    FUNC_3(VAR_6, "out of memory\n");
                    goto end;
                }
                FUNC_3(VAR_7, "%s Fingerprint=",
                           FUNC_9(FUNC_6(VAR_18)));
                for (VAR_52 = 0; VAR_52 < (int)VAR_53; VAR_52++) {
                    FUNC_3(VAR_7, "%02X%c", VAR_54[VAR_52], (VAR_52 + 1 == (int)VAR_53)
                               ? '\n' : ':');
                }
            }
        }
    }
    VAR_12 = FUNC_33(VAR_20, 'w', VAR_34);
    if (VAR_12 == ((void*)0))
        goto end;

    if (VAR_41)
        FUNC_19(VAR_12, VAR_11, FUNC_35());

    if (VAR_32) {
        VAR_36 = 0;
        goto end;
    }

    if (VAR_34 == VAR_1)
        VAR_46 = (int)FUNC_37(VAR_12, VAR_11);
    else
        VAR_46 = FUNC_10(VAR_12, VAR_11);
    if (!VAR_46) {
        FUNC_3(VAR_6, "unable to write CRL\n");
        goto end;
    }
    VAR_36 = 0;

 end:
    if (VAR_36 != 0)
        FUNC_5(VAR_6);
    FUNC_2(VAR_12);
    FUNC_13(VAR_11);
    FUNC_26(VAR_14);
    FUNC_31(VAR_13);
    return VAR_36;
}
