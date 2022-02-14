
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;
typedef int ENGINE ;
typedef int DSA ;
typedef int BN_GENCB ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int *,int ,int *,int *,int *) ;
 int FUNC_11 (int *,int const**,int const**,int const**) ;
 int * FUNC_12 () ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_16 (unsigned char*) ;




 int VAR_3 ;
 int * FUNC_17 (int *,int *,int *,int *) ;
 int FUNC_18 (int *,int *,int *,int *,int ,int *,int *) ;
 int FUNC_19 (int *,int *) ;
 unsigned char* FUNC_20 (int,char*) ;
 int FUNC_21 (int) ;
 int VAR_4 ;
 int * FUNC_22 (char*,char,int) ;
 int * FUNC_23 (char*,int,int) ;
 int VAR_5 ;
 int * FUNC_24 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,int *) ;
 char* FUNC_27 () ;
 int FUNC_28 (char*,int ,int*) ;
 int FUNC_29 (int ) ;
 char* FUNC_30 (int,char**,int ) ;
 int FUNC_31 (char*,int*) ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 (int) ;
 char** FUNC_35 () ;
 int FUNC_36 (int ,int const*,char*,int,unsigned char*) ;
 int FUNC_37 (int *) ;
 int * FUNC_38 (char*,int ) ;
 int VAR_8 ;

int FUNC_39(int VAR_9, char **VAR_10)
{
    ENGINE *VAR_11 = ((void*)0);
    DSA *VAR_12 = ((void*)0);
    BIO *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    BN_GENCB *VAR_15 = ((void*)0);
    int VAR_16 = -1, VAR_17 = 0, VAR_18 = 0;
    int VAR_19 = VAR_1, VAR_20 = VAR_1, VAR_21 = 0, VAR_22 = 0;
    int VAR_23 = 1, VAR_24, VAR_25 = 0, VAR_26 = 0;
    char *VAR_27 = ((void*)0), *VAR_28 = ((void*)0), *VAR_29;
    OPTION_CHOICE VAR_30;

    VAR_29 = FUNC_30(VAR_9, VAR_10, VAR_7);
    while ((VAR_30 = FUNC_32()) != 139) {
        switch (VAR_30) {
        case 139:
        case 138:
 opthelp:
            FUNC_2(VAR_4, "%s: Use -help for summary.\n", VAR_29);
            goto end;
        case 136:
            FUNC_29(VAR_7);
            VAR_23 = 0;
            goto end;
        case 134:
            if (!FUNC_28(FUNC_27(), VAR_3, &VAR_19))
                goto opthelp;
            break;
        case 135:
            VAR_27 = FUNC_27();
            break;
        case 131:
            if (!FUNC_28(FUNC_27(), VAR_3, &VAR_20))
                goto opthelp;
            break;
        case 132:
            VAR_28 = FUNC_27();
            break;
        case 140:
            VAR_11 = FUNC_38(FUNC_27(), 0);
            break;
        case 129:
            VAR_25 = 1;
            break;
        case 141:
            VAR_22 = 1;
            break;
        case 137:
            VAR_18 = 1;
            break;
        case 130:
            if (!FUNC_34(VAR_30))
                goto end;
            break;
        case 133:
            VAR_21 = 1;
            break;
        case 128:
            VAR_8 = 1;
            break;
        }
    }
    VAR_9 = FUNC_33();
    VAR_10 = FUNC_35();

    if (VAR_9 == 1) {
        if (!FUNC_31(VAR_10[0], &VAR_17) || VAR_17 < 0)
            goto end;

        VAR_16 = VAR_17;
    }
    VAR_26 = VAR_18 ? 1 : 0;

    VAR_13 = FUNC_22(VAR_27, 'r', VAR_19);
    if (VAR_13 == ((void*)0))
        goto end;
    VAR_14 = FUNC_23(VAR_28, VAR_20, VAR_26);
    if (VAR_14 == ((void*)0))
        goto end;

    if (VAR_16 > 0) {
        if (VAR_16 > VAR_2)
            FUNC_2(VAR_4,
                       "Warning: It is not recommended to use more than %d bit for DSA keys.\n"
                       "         Your key size is %d! Larger key size may behave not as expected.\n",
                       VAR_2, VAR_16);

        VAR_15 = FUNC_4();
        if (VAR_15 == ((void*)0)) {
            FUNC_2(VAR_4, "Error allocating BN_GENCB object\n");
            goto end;
        }
        FUNC_5(VAR_15, VAR_6, VAR_4);
        VAR_12 = FUNC_12();
        if (VAR_12 == ((void*)0)) {
            FUNC_2(VAR_4, "Error allocating DSA object\n");
            goto end;
        }
        if (VAR_8) {
            FUNC_2(VAR_4, "Generating DSA parameters, %d bit long prime\n",
                       VAR_17);
            FUNC_2(VAR_4, "This could take some time\n");
        }
        if (!FUNC_10(VAR_12, VAR_17, ((void*)0), 0, ((void*)0), ((void*)0), VAR_15)) {
            FUNC_15(VAR_4);
            FUNC_2(VAR_4, "Error, DSA key generation failed\n");
            goto end;
        }
    } else if (VAR_19 == VAR_0) {
        VAR_12 = FUNC_24(VAR_13, ((void*)0));
    } else {
        VAR_12 = FUNC_17(VAR_13, ((void*)0), ((void*)0), ((void*)0));
    }
    if (VAR_12 == ((void*)0)) {
        FUNC_2(VAR_4, "unable to load DSA parameters\n");
        FUNC_15(VAR_4);
        goto end;
    }

    if (VAR_25) {
        FUNC_14(VAR_14, VAR_12);
    }

    if (VAR_22) {
        const BIGNUM *VAR_31 = ((void*)0), *VAR_32 = ((void*)0), *VAR_33 = ((void*)0);
        unsigned char *VAR_34;
        int VAR_35, VAR_36;

        FUNC_11(VAR_12, &VAR_31, &VAR_32, &VAR_33);
        VAR_35 = FUNC_7(VAR_31);
        VAR_36 = FUNC_6(VAR_31);

        VAR_34 = FUNC_20(VAR_35 + 20, "BN space");

        FUNC_2(VAR_5, "static DSA *get_dsa%d(void)\n{\n", VAR_36);
        FUNC_36(VAR_5, VAR_31, "dsap", VAR_36, VAR_34);
        FUNC_36(VAR_5, VAR_32, "dsaq", VAR_36, VAR_34);
        FUNC_36(VAR_5, VAR_33, "dsag", VAR_36, VAR_34);
        FUNC_2(VAR_5, "    DSA *dsa = DSA_new();\n"
                            "    BIGNUM *p, *q, *g;\n"
                            "\n");
        FUNC_2(VAR_5, "    if (dsa == NULL)\n"
                            "        return NULL;\n");
        FUNC_2(VAR_5, "    if (!DSA_set0_pqg(dsa, p = BN_bin2bn(dsap_%d, sizeof(dsap_%d), NULL),\n",
                   VAR_36, VAR_36);
        FUNC_2(VAR_5, "                           q = BN_bin2bn(dsaq_%d, sizeof(dsaq_%d), NULL),\n",
                   VAR_36, VAR_36);
        FUNC_2(VAR_5, "                           g = BN_bin2bn(dsag_%d, sizeof(dsag_%d), NULL))) {\n",
                   VAR_36, VAR_36);
        FUNC_2(VAR_5, "        DSA_free(dsa);\n"
                            "        BN_free(p);\n"
                            "        BN_free(q);\n"
                            "        BN_free(g);\n"
                            "        return NULL;\n"
                            "    }\n"
                            "    return dsa;\n}\n");
        FUNC_16(VAR_34);
    }

    if (VAR_20 == VAR_0 && VAR_18)
        VAR_21 = 1;

    if (!VAR_21) {
        if (VAR_20 == VAR_0)
            VAR_24 = FUNC_26(VAR_14, VAR_12);
        else
            VAR_24 = FUNC_19(VAR_14, VAR_12);
        if (!VAR_24) {
            FUNC_2(VAR_4, "unable to write DSA parameters\n");
            FUNC_15(VAR_4);
            goto end;
        }
    }
    if (VAR_18) {
        DSA *VAR_37;

        if ((VAR_37 = FUNC_13(VAR_12)) == ((void*)0))
            goto end;
        if (!FUNC_9(VAR_37)) {
            FUNC_15(VAR_4);
            FUNC_8(VAR_37);
            goto end;
        }
        FUNC_21(VAR_26);
        if (VAR_20 == VAR_0)
            VAR_24 = FUNC_25(VAR_14, VAR_37);
        else
            VAR_24 = FUNC_18(VAR_14, VAR_37, ((void*)0), ((void*)0), 0, ((void*)0),
                                            ((void*)0));
        FUNC_8(VAR_37);
    }
    VAR_23 = 0;
 end:
    FUNC_3(VAR_15);
    FUNC_0(VAR_13);
    FUNC_1(VAR_14);
    FUNC_8(VAR_12);
    FUNC_37(VAR_11);
    return VAR_23;
}
