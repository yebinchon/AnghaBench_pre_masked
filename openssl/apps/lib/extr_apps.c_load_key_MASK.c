
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UI_METHOD ;
struct TYPE_6__ {char const* password; char const* prompt_info; } ;
typedef TYPE_1__ PW_CB_DATA ;
typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,char const*,int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_6 (int *,int *,int ,TYPE_1__*) ;
 int * FUNC_7 (int *,int ,TYPE_1__*) ;
 int * FUNC_8 (int *) ;
 int VAR_6 ;
 int * FUNC_9 (char const*,char,int) ;
 int * FUNC_10 (int *,int *) ;
 int * FUNC_11 (int) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int *,char const*,int ,TYPE_1__*,int **,int *,int *) ;
 int VAR_7 ;
 int FUNC_14 (int ) ;
 int VAR_8 ;

EVP_PKEY *FUNC_15(const char *VAR_9, int VAR_10, int VAR_11,
                   const char *VAR_12, ENGINE *VAR_13, const char *VAR_14)
{
    BIO *VAR_15 = ((void*)0);
    EVP_PKEY *VAR_16 = ((void*)0);
    PW_CB_DATA VAR_17;

    VAR_17.password = VAR_12;
    VAR_17.prompt_info = VAR_9;

    if (VAR_9 == ((void*)0) && (!VAR_11 || VAR_10 == VAR_1)) {
        FUNC_1(VAR_6, "no keyfile specified\n");
        goto end;
    }
    if (VAR_10 == VAR_1) {
        if (VAR_13 == ((void*)0)) {
            FUNC_1(VAR_6, "no engine specified\n");
        } else {

            if (FUNC_3(VAR_13)) {
                VAR_16 = FUNC_4(VAR_13, VAR_9,
                                               (UI_METHOD *)FUNC_12(),
                                               &VAR_17);
                FUNC_2(VAR_13);
            }
            if (VAR_16 == ((void*)0)) {
                FUNC_1(VAR_6, "cannot load %s from engine\n", VAR_14);
                FUNC_5(VAR_6);
            }



        }
        goto end;
    }
    if (VAR_9 == ((void*)0) && VAR_11) {
        FUNC_14(VAR_7);
        VAR_15 = FUNC_11(VAR_10);
    } else {
        VAR_15 = FUNC_9(VAR_9, 'r', VAR_10);
    }
    if (VAR_15 == ((void*)0))
        goto end;
    if (VAR_10 == VAR_0) {
        VAR_16 = FUNC_10(VAR_15, ((void*)0));
    } else if (VAR_10 == VAR_3) {
        VAR_16 = FUNC_6(VAR_15, ((void*)0), VAR_8, &VAR_17);
    } else if (VAR_10 == VAR_4) {
        if (!FUNC_13(VAR_15, VAR_14, VAR_8, &VAR_17,
                         &VAR_16, ((void*)0), ((void*)0)))
            goto end;

    } else if (VAR_10 == VAR_2) {
        VAR_16 = FUNC_8(VAR_15);
    } else if (VAR_10 == VAR_5) {
        VAR_16 = FUNC_7(VAR_15, VAR_8, &VAR_17);

    } else {
        FUNC_1(VAR_6, "bad input format specified for key file\n");
        goto end;
    }
 end:
    FUNC_0(VAR_15);
    if (VAR_16 == ((void*)0)) {
        FUNC_1(VAR_6, "unable to load %s\n", VAR_14);
        FUNC_5(VAR_6);
    }
    return VAR_16;
}
