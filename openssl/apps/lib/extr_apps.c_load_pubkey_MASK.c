
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pem_password_cb ;
typedef int UI_METHOD ;
struct TYPE_5__ {char const* password; char const* prompt_info; } ;
typedef int RSA ;
typedef TYPE_1__ PW_CB_DATA ;
typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int * FUNC_2 (int *,char const*,int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_6 (int *,int *,int *,TYPE_1__*) ;
 int * FUNC_7 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int VAR_6 ;
 int * FUNC_10 (char const*,char,int) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,int *) ;
 int * FUNC_13 (int) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int ) ;

EVP_PKEY *FUNC_16(const char *VAR_9, int VAR_10, int VAR_11,
                      const char *VAR_12, ENGINE *VAR_13, const char *VAR_14)
{
    BIO *VAR_15 = ((void*)0);
    EVP_PKEY *VAR_16 = ((void*)0);
    PW_CB_DATA VAR_17;

    VAR_17.password = VAR_12;
    VAR_17.prompt_info = VAR_9;

    if (VAR_9 == ((void*)0) && (!VAR_11 || VAR_10 == VAR_2)) {
        FUNC_1(VAR_6, "no keyfile specified\n");
        goto end;
    }
    if (VAR_10 == VAR_2) {
        if (VAR_13 == ((void*)0)) {
            FUNC_1(VAR_6, "no engine specified\n");
        } else {

            VAR_16 = FUNC_2(VAR_13, VAR_9, (UI_METHOD *)FUNC_14(),
                                          &VAR_17);
            if (VAR_16 == ((void*)0)) {
                FUNC_1(VAR_6, "cannot load %s from engine\n", VAR_14);
                FUNC_3(VAR_6);
            }



        }
        goto end;
    }
    if (VAR_9 == ((void*)0) && VAR_11) {
        FUNC_15(VAR_8);
        VAR_15 = FUNC_13(VAR_10);
    } else {
        VAR_15 = FUNC_10(VAR_9, 'r', VAR_10);
    }
    if (VAR_15 == ((void*)0))
        goto end;
    if (VAR_10 == VAR_0) {
        VAR_16 = FUNC_11(VAR_15, ((void*)0));
    } else if (VAR_10 == VAR_1) {

        RSA *VAR_18;
        VAR_18 = FUNC_12(VAR_15, ((void*)0));
        if (VAR_18) {
            VAR_16 = FUNC_4();
            if (VAR_16 != ((void*)0))
                FUNC_5(VAR_16, VAR_18);
            FUNC_8(VAR_18);
        } else



            VAR_16 = ((void*)0);
    } else if (VAR_10 == VAR_5) {

        RSA *VAR_19;
        VAR_19 = FUNC_7(VAR_15, ((void*)0),
                                        (pem_password_cb *)VAR_7,
                                        &VAR_17);
        if (VAR_19 != ((void*)0)) {
            VAR_16 = FUNC_4();
            if (VAR_16 != ((void*)0))
                FUNC_5(VAR_16, VAR_19);
            FUNC_8(VAR_19);
        } else



            VAR_16 = ((void*)0);
    } else if (VAR_10 == VAR_4) {
        VAR_16 = FUNC_6(VAR_15, ((void*)0),
                                   (pem_password_cb *)VAR_7,
                                   &VAR_17);

    } else if (VAR_10 == VAR_3) {
        VAR_16 = FUNC_9(VAR_15);

    }
 end:
    FUNC_0(VAR_15);
    if (VAR_16 == ((void*)0))
        FUNC_1(VAR_6, "unable to load %s\n", VAR_14);
    return VAR_16;
}
