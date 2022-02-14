
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (unsigned long) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ,int *) ;
 int VAR_0 ;
 int * FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int * VAR_1 ;
 int * FUNC_14 (char*,char,int ) ;
 char* FUNC_15 () ;
 int FUNC_16 (int ) ;
 char* FUNC_17 (int,char**,int ) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_2 ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (char*,int ) ;

int FUNC_22(int VAR_3, char **VAR_4)
{
    ENGINE *VAR_5 = ((void*)0);
    BIO *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    EVP_PKEY *VAR_8 = ((void*)0);
    int VAR_9 = 0, VAR_10 = 0, VAR_11 = 1, VAR_12 = 0;
    OPTION_CHOICE VAR_13;
    char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16;

    VAR_16 = FUNC_17(VAR_3, VAR_4, VAR_2);
    while ((VAR_13 = FUNC_18()) != 134) {
        switch (VAR_13) {
        case 134:
        case 133:
 opthelp:
            FUNC_2(VAR_1, "%s: Use -help for summary.\n", VAR_16);
            goto end;
        case 132:
            FUNC_16(VAR_2);
            VAR_11 = 0;
            goto end;
        case 131:
            VAR_14 = FUNC_15();
            break;
        case 129:
            VAR_15 = FUNC_15();
            break;
        case 135:
            VAR_5 = FUNC_21(FUNC_15(), 0);
            break;
        case 128:
            VAR_9 = 1;
            break;
        case 130:
            VAR_10 = 1;
            break;
        case 136:
            VAR_12 = 1;
            break;
        }
    }
    VAR_3 = FUNC_19();
    if (VAR_3 != 0)
        goto opthelp;

    VAR_6 = FUNC_14(VAR_14, 'r', VAR_0);
    if (VAR_6 == ((void*)0))
        goto end;
    VAR_7 = FUNC_14(VAR_15, 'w', VAR_0);
    if (VAR_7 == ((void*)0))
        goto end;
    VAR_8 = FUNC_12(VAR_6, ((void*)0));
    if (VAR_8 == ((void*)0)) {
        FUNC_2(VAR_1, "Error reading parameters\n");
        FUNC_5(VAR_1);
        goto end;
    }

    if (VAR_12) {
        int VAR_17;
        EVP_PKEY_CTX *VAR_18;

        VAR_18 = FUNC_8(VAR_8, VAR_5);
        if (VAR_18 == ((void*)0)) {
            FUNC_5(VAR_1);
            goto end;
        }

        VAR_17 = FUNC_10(VAR_18);

        if (VAR_17 == 1) {
            FUNC_2(VAR_7, "Parameters are valid\n");
        } else {




            unsigned long VAR_19;

            FUNC_2(VAR_7, "Parameters are invalid\n");

            while ((VAR_19 = FUNC_4()) != 0) {
                FUNC_2(VAR_7, "Detailed error: %s\n",
                           FUNC_6(VAR_19));
                FUNC_3();
            }
        }
        FUNC_7(VAR_18);
    }

    if (!VAR_10)
        FUNC_13(VAR_7, VAR_8);

    if (VAR_9)
        FUNC_11(VAR_7, VAR_8, 0, ((void*)0));

    VAR_11 = 0;

 end:
    FUNC_9(VAR_8);
    FUNC_20(VAR_5);
    FUNC_1(VAR_7);
    FUNC_0(VAR_6);

    return VAR_11;
}
