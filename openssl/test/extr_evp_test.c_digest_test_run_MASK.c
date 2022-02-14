
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int output_len; int output; int digest; int input; } ;
struct TYPE_5__ {char* err; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef unsigned char EVP_MD_CTX ;
typedef TYPE_2__ DIGEST_DATA ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned int*) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_2 (unsigned char*,int ,int *) ;
 unsigned int VAR_0 ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int,unsigned int) ;
 int FUNC_10 (unsigned char*) ;
 int FUNC_11 (char*,char*) ;
 int VAR_2 ;
 int FUNC_12 (int ,int ,unsigned char*) ;
 int FUNC_13 (TYPE_1__*,char*,int ,unsigned int,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_14(EVP_TEST *VAR_3)
{
    DIGEST_DATA *VAR_4 = VAR_3->data;
    EVP_MD_CTX *VAR_5;
    unsigned char *VAR_6 = ((void*)0);
    unsigned int VAR_7;

    VAR_3->err = "TEST_FAILURE";
    if (!FUNC_10(VAR_5 = FUNC_5()))
        goto err;

    VAR_6 = FUNC_8(VAR_4->output_len > VAR_0 ?
                         VAR_4->output_len : VAR_0);
    if (!FUNC_10(VAR_6))
        goto err;

    if (!FUNC_2(VAR_5, VAR_4->digest, ((void*)0))) {
        VAR_3->err = "DIGESTINIT_ERROR";
        goto err;
    }
    if (!FUNC_12(VAR_4->input, VAR_2, VAR_5)) {
        VAR_3->err = "DIGESTUPDATE_ERROR";
        goto err;
    }

    if (FUNC_6(VAR_4->digest) & VAR_1) {
        EVP_MD_CTX *VAR_8;
        char VAR_9[] = "touch";

        if (!FUNC_10(VAR_8 = FUNC_5())) {
            goto err;
        }
        if (!FUNC_3(VAR_8, VAR_5)) {
            FUNC_4(VAR_8);
            goto err;
        }
        if (!FUNC_1(VAR_8, (unsigned char *)VAR_9, 0)) {
            FUNC_4(VAR_8);
            VAR_3->err = "DIGESTFINALXOF_ERROR";
            goto err;
        }
        if (!FUNC_11(VAR_9, "touch")) {
            FUNC_4(VAR_8);
            VAR_3->err = "DIGESTFINALXOF_ERROR";
            goto err;
        }
        FUNC_4(VAR_8);

        VAR_7 = VAR_4->output_len;
        if (!FUNC_1(VAR_5, VAR_6, VAR_7)) {
            VAR_3->err = "DIGESTFINALXOF_ERROR";
            goto err;
        }
    } else {
        if (!FUNC_0(VAR_5, VAR_6, &VAR_7)) {
            VAR_3->err = "DIGESTFINAL_ERROR";
            goto err;
        }
    }
    if (!FUNC_9(VAR_4->output_len, VAR_7)) {
        VAR_3->err = "DIGEST_LENGTH_MISMATCH";
        goto err;
    }
    if (!FUNC_13(VAR_3, "DIGEST_MISMATCH",
                            VAR_4->output, VAR_4->output_len,
                            VAR_6, VAR_7))
        goto err;

    VAR_3->err = ((void*)0);

 err:
    FUNC_7(VAR_6);
    FUNC_4(VAR_5);
    return 1;
}
