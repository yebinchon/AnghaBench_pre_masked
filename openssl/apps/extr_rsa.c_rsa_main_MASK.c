
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int OPTION_CHOICE ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 unsigned long FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (char*) ;





 int VAR_8 ;
 int FUNC_14 (int *,int *,int const*,int *,int ,int *,char*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int const**,int *,int *) ;
 int FUNC_20 (int *,int *,int ) ;
 int FUNC_21 (char*,char*,char**,char**) ;
 int FUNC_22 (int) ;
 int * VAR_9 ;
 int * FUNC_23 (char*,int,int) ;
 int FUNC_24 (int *,int *,int,int ,char*) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int *,int *) ;
 int FUNC_29 (int *,int *) ;
 int * FUNC_30 (char*,int,int,char*,int *,char*) ;
 int * FUNC_31 (char*,int,int,char*,int *,char*) ;
 char* FUNC_32 () ;
 int FUNC_33 (int ,int const**) ;
 int FUNC_34 (char*,int ,int*) ;
 int FUNC_35 (int ) ;
 char* FUNC_36 (int,char**,int ) ;
 int FUNC_37 () ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 (char*) ;
 int FUNC_41 (int *) ;
 int VAR_10 ;
 int * FUNC_42 (char*,int ) ;

int FUNC_43(int VAR_11, char **VAR_12)
{
    ENGINE *VAR_13 = ((void*)0);
    BIO *VAR_14 = ((void*)0);
    RSA *VAR_15 = ((void*)0);
    const EVP_CIPHER *VAR_16 = ((void*)0);
    char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19;
    char *VAR_20 = ((void*)0), *VAR_21 = ((void*)0), *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
    int VAR_24, VAR_25 = 0;
    int VAR_26 = VAR_5, VAR_27 = VAR_5, VAR_28 = 0, VAR_29 = 0;
    int VAR_30 = 0, VAR_31 = 0, VAR_32 = 0, VAR_33 = 0, VAR_34 = 1;

    int VAR_35 = 2;

    OPTION_CHOICE VAR_36;

    VAR_19 = FUNC_36(VAR_11, VAR_12, VAR_10);
    while ((VAR_36 = FUNC_37()) != 146) {
        switch (VAR_36) {
        case 146:
        case 145:
 opthelp:
            FUNC_1(VAR_9, "%s: Use -help for summary.\n", VAR_19);
            goto end;
        case 144:
            FUNC_35(VAR_10);
            VAR_34 = 0;
            goto end;
        case 142:
            if (!FUNC_34(FUNC_32(), VAR_8, &VAR_26))
                goto opthelp;
            break;
        case 143:
            VAR_17 = FUNC_32();
            break;
        case 138:
            if (!FUNC_34(FUNC_32(), VAR_8, &VAR_27))
                goto opthelp;
            break;
        case 139:
            VAR_18 = FUNC_32();
            break;
        case 137:
            VAR_22 = FUNC_32();
            break;
        case 136:
            VAR_23 = FUNC_32();
            break;
        case 147:
            VAR_13 = FUNC_42(FUNC_32(), 0);
            break;
        case 135:
            VAR_32 = 1;
            break;
        case 134:
            VAR_33 = 1;
            break;
        case 130:
            VAR_32 = 2;
            break;
        case 129:
            VAR_33 = 2;
            break;
        case 132:
        case 131:
        case 133:

            VAR_35 = (VAR_36 - 133);

            break;
        case 140:
            VAR_30 = 1;
            break;
        case 128:
            VAR_28 = 1;
            break;
        case 141:
            VAR_31 = 1;
            break;
        case 149:
            VAR_29 = 1;
            break;
        case 148:
            if (!FUNC_33(FUNC_39(), &VAR_16))
                goto opthelp;
            break;
        }
    }
    VAR_11 = FUNC_38();
    if (VAR_11 != 0)
        goto opthelp;

    VAR_25 = (VAR_28 && !VAR_32) || (!VAR_33 && !VAR_30) ? 1 : 0;

    if (!FUNC_21(VAR_22, VAR_23, &VAR_20, &VAR_21)) {
        FUNC_1(VAR_9, "Error getting passwords\n");
        goto end;
    }
    if (VAR_29 && VAR_32) {
        FUNC_1(VAR_9, "Only private keys can be checked\n");
        goto end;
    }

    {
        EVP_PKEY *VAR_37;

        if (VAR_32) {
            int VAR_38 = -1;
            if (VAR_32 == 2) {
                if (VAR_26 == VAR_5)
                    VAR_38 = VAR_6;
                else if (VAR_26 == VAR_2)
                    VAR_38 = VAR_3;
            } else {
                VAR_38 = VAR_26;
            }

            VAR_37 = FUNC_31(VAR_17, VAR_38, 1, VAR_20, VAR_13, "Public Key");
        } else {
            VAR_37 = FUNC_30(VAR_17, VAR_26, 1, VAR_20, VAR_13, "Private Key");
        }

        if (VAR_37 != ((void*)0))
            VAR_15 = FUNC_10(VAR_37);
        FUNC_9(VAR_37);
    }

    if (VAR_15 == ((void*)0)) {
        FUNC_7(VAR_9);
        goto end;
    }

    VAR_14 = FUNC_23(VAR_18, VAR_27, VAR_25);
    if (VAR_14 == ((void*)0))
        goto end;

    if (VAR_28) {
        FUNC_22(VAR_32 || VAR_25);
        if (!FUNC_20(VAR_14, VAR_15, 0)) {
            FUNC_40(VAR_18);
            FUNC_7(VAR_9);
            goto end;
        }
    }

    if (VAR_31) {
        const BIGNUM *VAR_39;
        FUNC_19(VAR_15, &VAR_39, ((void*)0), ((void*)0));
        FUNC_1(VAR_14, "Modulus=");
        FUNC_2(VAR_14, VAR_39);
        FUNC_1(VAR_14, "\n");
    }

    if (VAR_29) {
        int VAR_40 = FUNC_17(VAR_15, ((void*)0));

        if (VAR_40 == 1) {
            FUNC_1(VAR_14, "RSA key ok\n");
        } else if (VAR_40 == 0) {
            unsigned long VAR_41;

            while ((VAR_41 = FUNC_6()) != 0 &&
                   FUNC_3(VAR_41) == VAR_0 &&
                   FUNC_4(VAR_41) != VAR_1) {
                FUNC_1(VAR_14, "RSA key error: %s\n",
                           FUNC_8(VAR_41));
                FUNC_5();
            }
        } else if (VAR_40 == -1) {
            FUNC_7(VAR_9);
            goto end;
        }
    }

    if (VAR_30) {
        VAR_34 = 0;
        goto end;
    }
    FUNC_1(VAR_9, "writing RSA key\n");
    if (VAR_27 == VAR_2) {
        if (VAR_33 || VAR_32) {
            if (VAR_33 == 2)
                VAR_24 = FUNC_28(VAR_14, VAR_15);
            else
                VAR_24 = FUNC_29(VAR_14, VAR_15);
        } else {
            FUNC_22(VAR_25);
            VAR_24 = FUNC_27(VAR_14, VAR_15);
        }
    } else if (VAR_27 == VAR_5) {
        if (VAR_33 || VAR_32) {
            if (VAR_33 == 2)
                VAR_24 = FUNC_15(VAR_14, VAR_15);
            else
                VAR_24 = FUNC_16(VAR_14, VAR_15);
        } else {
            FUNC_22(VAR_25);
            VAR_24 = FUNC_14(VAR_14, VAR_15,
                                            VAR_16, ((void*)0), 0, ((void*)0), VAR_21);
        }

    } else if (VAR_27 == VAR_4 || VAR_27 == VAR_7) {
        EVP_PKEY *VAR_42;
        VAR_42 = FUNC_11();
        if (VAR_42 == ((void*)0))
            goto end;

        FUNC_12(VAR_42, VAR_15);
        if (VAR_27 == VAR_7) {
            if (VAR_32) {
                FUNC_1(VAR_9, "PVK form impossible with public key input\n");
                FUNC_9(VAR_42);
                goto end;
            }
            FUNC_22(VAR_25);





            VAR_24 = FUNC_24(VAR_14, VAR_42, VAR_35, 0, VAR_21);

        } else if (VAR_32 || VAR_33) {
            VAR_24 = FUNC_26(VAR_14, VAR_42);
        } else {
            FUNC_22(VAR_25);
            VAR_24 = FUNC_25(VAR_14, VAR_42);
        }
        FUNC_9(VAR_42);

    } else {
        FUNC_1(VAR_9, "bad output format specified for outfile\n");
        goto end;
    }
    if (VAR_24 <= 0) {
        FUNC_1(VAR_9, "unable to write key\n");
        FUNC_7(VAR_9);
    } else {
        VAR_34 = 0;
    }
 end:
    FUNC_41(VAR_13);
    FUNC_0(VAR_14);
    FUNC_18(VAR_15);
    FUNC_13(VAR_20);
    FUNC_13(VAR_21);
    return VAR_34;
}
