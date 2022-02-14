
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int DSA ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (char*) ;




 int VAR_4 ;
 int FUNC_12 (int *,int *,int const*,int *,int ,int *,char*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (char*,char*,char**,char**) ;
 int FUNC_15 (int) ;
 int * VAR_5 ;
 int * FUNC_16 (char*,int,int) ;
 int VAR_6 ;
 int FUNC_17 (int *,int *,int,int ,char*) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int *) ;
 int * FUNC_22 (char*,int,int,char*,int *,char*) ;
 int * FUNC_23 (char*,int,int,char*,int *,char*) ;
 char* FUNC_24 () ;
 int FUNC_25 (int ,int const**) ;
 int FUNC_26 (char*,int ,int*) ;
 int FUNC_27 (int ) ;
 char* FUNC_28 (int,char**,int ) ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 (char*) ;
 int FUNC_33 (int *) ;
 int * FUNC_34 (char*,int ) ;

int FUNC_35(int VAR_7, char **VAR_8)
{
    BIO *VAR_9 = ((void*)0);
    DSA *VAR_10 = ((void*)0);
    ENGINE *VAR_11 = ((void*)0);
    const EVP_CIPHER *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15;
    char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    OPTION_CHOICE VAR_20;
    int VAR_21 = VAR_2, VAR_22 = VAR_2, VAR_23 = 0, VAR_24 = 0;
    int VAR_25, VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 1;

    int VAR_30 = 2;

    int VAR_31 = 0;

    VAR_15 = FUNC_28(VAR_7, VAR_8, VAR_6);
    while ((VAR_20 = FUNC_29()) != 144) {
        switch (VAR_20) {
        case 144:
        case 143:
 opthelp:
            VAR_29 = 0;
            FUNC_1(VAR_5, "%s: Use -help for summary.\n", VAR_15);
            goto end;
        case 142:
            FUNC_27(VAR_6);
            VAR_29 = 0;
            goto end;
        case 140:
            if (!FUNC_26(FUNC_24(), VAR_4, &VAR_21))
                goto opthelp;
            break;
        case 141:
            VAR_13 = FUNC_24();
            break;
        case 136:
            if (!FUNC_26(FUNC_24(), VAR_4, &VAR_22))
                goto opthelp;
            break;
        case 137:
            VAR_14 = FUNC_24();
            break;
        case 145:
            VAR_11 = FUNC_34(FUNC_24(), 0);
            break;
        case 135:
            VAR_18 = FUNC_24();
            break;
        case 134:
            VAR_19 = FUNC_24();
            break;
        case 130:
        case 129:
        case 131:

            VAR_30 = (VAR_20 - 131);

            break;
        case 138:
            VAR_24 = 1;
            break;
        case 128:
            VAR_23 = 1;
            break;
        case 139:
            VAR_26 = 1;
            break;
        case 133:
            VAR_27 = 1;
            break;
        case 132:
            VAR_28 = 1;
            break;
        case 146:
            if (!FUNC_25(FUNC_31(), &VAR_12))
                goto end;
            break;
        }
    }
    VAR_7 = FUNC_30();
    if (VAR_7 != 0)
        goto opthelp;

    VAR_31 = VAR_27 || VAR_28 ? 0 : 1;
    if (VAR_23 && !VAR_27)
        VAR_31 = 1;

    if (!FUNC_14(VAR_18, VAR_19, &VAR_16, &VAR_17)) {
        FUNC_1(VAR_5, "Error getting passwords\n");
        goto end;
    }

    FUNC_1(VAR_5, "read DSA key\n");
    {
        EVP_PKEY *VAR_32;

        if (VAR_27)
            VAR_32 = FUNC_23(VAR_13, VAR_21, 1, VAR_16, VAR_11, "Public Key");
        else
            VAR_32 = FUNC_22(VAR_13, VAR_21, 1, VAR_16, VAR_11, "Private Key");

        if (VAR_32 != ((void*)0)) {
            VAR_10 = FUNC_8(VAR_32);
            FUNC_7(VAR_32);
        }
    }
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_5, "unable to load Key\n");
        FUNC_6(VAR_5);
        goto end;
    }

    VAR_9 = FUNC_16(VAR_14, VAR_22, VAR_31);
    if (VAR_9 == ((void*)0))
        goto end;

    if (VAR_23) {
        FUNC_15(VAR_27 || VAR_31);
        if (!FUNC_5(VAR_9, VAR_10, 0)) {
            FUNC_32(VAR_14);
            FUNC_6(VAR_5);
            goto end;
        }
    }

    if (VAR_26) {
        const BIGNUM *VAR_33 = ((void*)0);
        FUNC_4(VAR_10, &VAR_33, ((void*)0));
        FUNC_1(VAR_9, "Public Key=");
        FUNC_2(VAR_9, VAR_33);
        FUNC_1(VAR_9, "\n");
    }

    if (VAR_24) {
        VAR_29 = 0;
        goto end;
    }
    FUNC_1(VAR_5, "writing DSA key\n");
    if (VAR_22 == VAR_0) {
        if (VAR_27 || VAR_28) {
            VAR_25 = FUNC_21(VAR_9, VAR_10);
        } else {
            FUNC_15(VAR_31);
            VAR_25 = FUNC_20(VAR_9, VAR_10);
        }
    } else if (VAR_22 == VAR_2) {
        if (VAR_27 || VAR_28) {
            VAR_25 = FUNC_13(VAR_9, VAR_10);
        } else {
            FUNC_15(VAR_31);
            VAR_25 = FUNC_12(VAR_9, VAR_10, VAR_12,
                                            ((void*)0), 0, ((void*)0), VAR_17);
        }

    } else if (VAR_22 == VAR_1 || VAR_22 == VAR_3) {
        EVP_PKEY *VAR_34;
        VAR_34 = FUNC_9();
        if (VAR_34 == ((void*)0))
           goto end;

        FUNC_10(VAR_34, VAR_10);
        if (VAR_22 == VAR_3) {
            if (VAR_27) {
                FUNC_1(VAR_5, "PVK form impossible with public key input\n");
                FUNC_7(VAR_34);
                goto end;
            }
            FUNC_15(VAR_31);





            VAR_25 = FUNC_17(VAR_9, VAR_34, VAR_30, 0, VAR_17);

        } else if (VAR_27 || VAR_28) {
            VAR_25 = FUNC_19(VAR_9, VAR_34);
        } else {
            FUNC_15(VAR_31);
            VAR_25 = FUNC_18(VAR_9, VAR_34);
        }
        FUNC_7(VAR_34);

    } else {
        FUNC_1(VAR_5, "bad output format specified for outfile\n");
        goto end;
    }
    if (VAR_25 <= 0) {
        FUNC_1(VAR_5, "unable to write private key\n");
        FUNC_6(VAR_5);
        goto end;
    }
    VAR_29 = 0;
 end:
    FUNC_0(VAR_9);
    FUNC_3(VAR_10);
    FUNC_33(VAR_11);
    FUNC_11(VAR_16);
    FUNC_11(VAR_17);
    return VAR_29;
}
