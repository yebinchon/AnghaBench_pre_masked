
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* err; TYPE_1__* data; } ;
struct TYPE_5__ {scalar_t__ (* keyop ) (unsigned char*,unsigned char*,size_t*,int ,int ) ;unsigned char* ctx; int output_len; int output; int input_len; int input; } ;
typedef TYPE_1__ PKEY_DATA ;
typedef TYPE_2__ EVP_TEST ;
typedef unsigned char EVP_PKEY_CTX ;


 unsigned char* FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (TYPE_2__*,char*,int ,int ,unsigned char*,size_t) ;
 scalar_t__ FUNC_6 (unsigned char*,unsigned char*,size_t*,int ,int ) ;
 scalar_t__ FUNC_7 (unsigned char*,unsigned char*,size_t*,int ,int ) ;
 scalar_t__ FUNC_8 (unsigned char*,unsigned char*,size_t*,int ,int ) ;
 scalar_t__ FUNC_9 (unsigned char*,unsigned char*,size_t*,int ,int ) ;

__attribute__((used)) static int FUNC_10(EVP_TEST *VAR_0)
{
    PKEY_DATA *VAR_1 = VAR_0->data;
    unsigned char *VAR_2 = ((void*)0);
    size_t VAR_3;
    EVP_PKEY_CTX *VAR_4 = ((void*)0);

    if (VAR_1->keyop(VAR_1->ctx, ((void*)0), &VAR_3,
                        VAR_1->input, VAR_1->input_len) <= 0
            || !FUNC_4(VAR_2 = FUNC_3(VAR_3))) {
        VAR_0->err = "KEYOP_LENGTH_ERROR";
        goto err;
    }
    if (VAR_1->keyop(VAR_1->ctx, VAR_2, &VAR_3,
                        VAR_1->input, VAR_1->input_len) <= 0) {
        VAR_0->err = "KEYOP_ERROR";
        goto err;
    }
    if (!FUNC_5(VAR_0, "KEYOP_MISMATCH",
                            VAR_1->output, VAR_1->output_len,
                            VAR_2, VAR_3))
        goto err;

    VAR_0->err = ((void*)0);
    FUNC_2(VAR_2);
    VAR_2 = ((void*)0);


    if (!FUNC_4(VAR_4 = FUNC_0(VAR_1->ctx))) {
        VAR_0->err = "INTERNAL_ERROR";
        goto err;
    }
    if (VAR_1->keyop(VAR_4, ((void*)0), &VAR_3, VAR_1->input,
                        VAR_1->input_len) <= 0
            || !FUNC_4(VAR_2 = FUNC_3(VAR_3))) {
        VAR_0->err = "KEYOP_LENGTH_ERROR";
        goto err;
    }
    if (VAR_1->keyop(VAR_4, VAR_2, &VAR_3, VAR_1->input,
                        VAR_1->input_len) <= 0) {
        VAR_0->err = "KEYOP_ERROR";
        goto err;
    }
    if (!FUNC_5(VAR_0, "KEYOP_MISMATCH",
                            VAR_1->output, VAR_1->output_len,
                            VAR_2, VAR_3))
        goto err;

 err:
    FUNC_2(VAR_2);
    FUNC_1(VAR_4);
    return 1;
}
