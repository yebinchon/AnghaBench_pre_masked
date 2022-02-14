
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pem_password_cb ;
struct TYPE_3__ {char* password; char* prompt_info; } ;
typedef int RSA ;
typedef TYPE_1__ PW_CB_DATA ;
typedef int OPTION_CHOICE ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int BN_GENCB ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 char* FUNC_5 (int const*) ;
 char* FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int *,int const*,int *,int ,int *,TYPE_1__*) ;
 unsigned long VAR_4 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int,int,int *,int *) ;
 int FUNC_15 (int *,int *,int const**,int *) ;
 int * FUNC_16 () ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *,char*,int *,char**) ;
 int FUNC_19 (int) ;
 int VAR_5 ;
 int * FUNC_20 (char*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_21 () ;
 int FUNC_22 (int ,int const**) ;
 int FUNC_23 (int ) ;
 char* FUNC_24 (int,char**,int ) ;
 int FUNC_25 (char*,int*) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (int) ;
 char** FUNC_29 () ;
 int FUNC_30 () ;
 scalar_t__ VAR_8 ;
 int FUNC_31 (int *) ;
 int * FUNC_32 (char*,int ) ;
 int VAR_9 ;

int FUNC_33(int VAR_10, char **VAR_11)
{
    BN_GENCB *VAR_12 = FUNC_3();
    PW_CB_DATA VAR_13;
    ENGINE *VAR_14 = ((void*)0);
    BIGNUM *VAR_15 = FUNC_8();
    BIO *VAR_16 = ((void*)0);
    const BIGNUM *VAR_17;
    RSA *VAR_18 = ((void*)0);
    const EVP_CIPHER *VAR_19 = ((void*)0);
    int VAR_20 = 1, VAR_21 = VAR_0, VAR_22 = 0, VAR_23 = VAR_1;
    unsigned long VAR_24 = VAR_4;
    char *VAR_25 = ((void*)0), *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
    char *VAR_28, *VAR_29, *VAR_30;
    OPTION_CHOICE VAR_31;

    if (VAR_15 == ((void*)0) || VAR_12 == ((void*)0))
        goto end;

    FUNC_4(VAR_12, VAR_6, VAR_5);

    VAR_28 = FUNC_24(VAR_10, VAR_11, VAR_7);
    while ((VAR_31 = FUNC_26()) != 136) {
        switch (VAR_31) {
        case 136:
        case 135:
opthelp:
            FUNC_1(VAR_5, "%s: Use -help for summary.\n", VAR_28);
            goto end;
        case 133:
            VAR_20 = 0;
            FUNC_23(VAR_7);
            goto end;
        case 139:
            VAR_24 = 3;
            break;
        case 134:
            VAR_24 = VAR_4;
            break;
        case 132:
            VAR_25 = FUNC_21();
            break;
        case 137:
            VAR_14 = FUNC_32(FUNC_21(), 0);
            break;
        case 129:
            if (!FUNC_28(VAR_31))
                goto end;
            break;
        case 131:
            VAR_26 = FUNC_21();
            break;
        case 138:
            if (!FUNC_22(FUNC_30(), &VAR_19))
                goto end;
            break;
        case 130:
            if (!FUNC_25(FUNC_21(), &VAR_23))
                goto end;
            break;
        case 128:
            VAR_9 = 1;
            break;
        }
    }
    VAR_10 = FUNC_27();
    VAR_11 = FUNC_29();

    if (VAR_10 == 1) {
        if (!FUNC_25(VAR_11[0], &VAR_21) || VAR_21 <= 0)
            goto end;
        if (VAR_21 > VAR_3)
            FUNC_1(VAR_5,
                       "Warning: It is not recommended to use more than %d bit for RSA keys.\n"
                       "         Your key size is %d! Larger key size may behave not as expected.\n",
                       VAR_3, VAR_21);
    } else if (VAR_10 > 0) {
        FUNC_1(VAR_5, "Extra arguments given.\n");
        goto opthelp;
    }

    VAR_22 = 1;
    if (!FUNC_18(((void*)0), VAR_26, ((void*)0), &VAR_27)) {
        FUNC_1(VAR_5, "Error getting password\n");
        goto end;
    }

    VAR_16 = FUNC_20(VAR_25, VAR_2, VAR_22);
    if (VAR_16 == ((void*)0))
        goto end;

    if (VAR_9)
        FUNC_1(VAR_5, "Generating RSA private key, %d bit long modulus (%d primes)\n",
                   VAR_21, VAR_23);
    VAR_18 = VAR_14 ? FUNC_17(VAR_14) : FUNC_16();
    if (VAR_18 == ((void*)0))
        goto end;

    if (!FUNC_9(VAR_15, VAR_24)
        || !FUNC_14(VAR_18, VAR_21, VAR_23, VAR_15, VAR_12))
        goto end;

    FUNC_15(VAR_18, ((void*)0), &VAR_17, ((void*)0));
    VAR_29 = FUNC_6(VAR_17);
    VAR_30 = FUNC_5(VAR_17);
    if (VAR_29 && VAR_30 && VAR_9) {
        FUNC_1(VAR_5, "e is %s (0x%s)\n", VAR_30, VAR_29);
    }
    FUNC_11(VAR_29);
    FUNC_11(VAR_30);
    VAR_13.password = VAR_27;
    VAR_13.prompt_info = VAR_25;
    FUNC_19(VAR_22);
    if (!FUNC_12(VAR_16, VAR_18, VAR_19, ((void*)0), 0,
                                     (pem_password_cb *)VAR_8,
                                     &VAR_13))
        goto end;

    VAR_20 = 0;
 end:
    FUNC_7(VAR_15);
    FUNC_2(VAR_12);
    FUNC_13(VAR_18);
    FUNC_0(VAR_16);
    FUNC_31(VAR_14);
    FUNC_11(VAR_27);
    if (VAR_20 != 0)
        FUNC_10(VAR_5);
    return VAR_20;
}
