
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* err; TYPE_1__* data; } ;
struct TYPE_6__ {scalar_t__ type; int output_len; int output; int input_len; int input; int controls; int * alg; int key_len; int key; } ;
typedef TYPE_1__ MAC_DATA ;
typedef TYPE_2__ EVP_TEST ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef unsigned char EVP_MD_CTX ;
typedef unsigned char EVP_MD ;


 int FUNC_0 (unsigned char*,unsigned char*,size_t*) ;
 int FUNC_1 (unsigned char*,int **,unsigned char const*,int *,int *) ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 () ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ,int ,int ) ;
 int * FUNC_8 (scalar_t__,int *,int ,int ) ;
 int FUNC_9 (int *) ;
 unsigned char* FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (unsigned char*) ;
 unsigned char* FUNC_13 (size_t) ;
 int FUNC_14 (char*,int ,...) ;
 int FUNC_15 (unsigned char const*) ;
 int FUNC_16 (TYPE_2__*,int *,int ) ;
 int FUNC_17 (TYPE_2__*,char*,int ,int ,unsigned char*,size_t) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int) ;
 int * FUNC_20 (int *,char*) ;

__attribute__((used)) static int FUNC_21(EVP_TEST *VAR_2)
{
    MAC_DATA *VAR_3 = VAR_2->data;
    EVP_MD_CTX *VAR_4 = ((void*)0);
    EVP_PKEY_CTX *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    EVP_PKEY *VAR_7 = ((void*)0);
    const EVP_MD *VAR_8 = ((void*)0);
    unsigned char *VAR_9 = ((void*)0);
    size_t VAR_10;
    int VAR_11;

    if (VAR_3->alg == ((void*)0))
        FUNC_14("Trying the EVP_PKEY %s test", FUNC_11(VAR_3->type));
    else
        FUNC_14("Trying the EVP_PKEY %s test with %s",
                  FUNC_11(VAR_3->type), VAR_3->alg);
    if (VAR_3->type == VAR_0)
        VAR_7 = FUNC_7(((void*)0), VAR_3->key, VAR_3->key_len,
                                    FUNC_9(VAR_3->alg));
    else
        VAR_7 = FUNC_8(VAR_3->type, ((void*)0), VAR_3->key,
                                           VAR_3->key_len);
    if (VAR_7 == ((void*)0)) {
        VAR_2->err = "MAC_KEY_CREATE_ERROR";
        goto err;
    }

    if (VAR_3->type == VAR_1) {
        if (!FUNC_15(VAR_8 = FUNC_10(VAR_3->alg))) {
            VAR_2->err = "MAC_ALGORITHM_SET_ERROR";
            goto err;
        }
    }
    if (!FUNC_15(VAR_4 = FUNC_4())) {
        VAR_2->err = "INTERNAL_ERROR";
        goto err;
    }
    if (!FUNC_1(VAR_4, &VAR_5, VAR_8, ((void*)0), VAR_7)) {
        VAR_2->err = "DIGESTSIGNINIT_ERROR";
        goto err;
    }
    for (VAR_11 = 0; VAR_11 < FUNC_18(VAR_3->controls); VAR_11++)
        if (!FUNC_16(VAR_2, VAR_5,
                                FUNC_19(VAR_3->controls,
                                                        VAR_11))) {
            VAR_2->err = "EVPPKEYCTXCTRL_ERROR";
            goto err;
        }
    if (!FUNC_2(VAR_4, VAR_3->input, VAR_3->input_len)) {
        VAR_2->err = "DIGESTSIGNUPDATE_ERROR";
        goto err;
    }
    if (!FUNC_0(VAR_4, ((void*)0), &VAR_10)) {
        VAR_2->err = "DIGESTSIGNFINAL_LENGTH_ERROR";
        goto err;
    }
    if (!FUNC_15(VAR_9 = FUNC_13(VAR_10))) {
        VAR_2->err = "TEST_FAILURE";
        goto err;
    }
    if (!FUNC_0(VAR_4, VAR_9, &VAR_10)
            || !FUNC_17(VAR_2, "TEST_MAC_ERR",
                                   VAR_3->output, VAR_3->output_len,
                                   VAR_9, VAR_10)) {
        VAR_2->err = "TEST_MAC_ERR";
        goto err;
    }
    VAR_2->err = ((void*)0);
 err:
    FUNC_3(VAR_4);
    FUNC_12(VAR_9);
    FUNC_5(VAR_6);
    FUNC_6(VAR_7);
    return 1;
}
