
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int output_len; int output; int ctx; int input; } ;
struct TYPE_5__ {char* err; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ DIGESTSIGN_DATA ;


 int FUNC_0 (int ,unsigned char*,size_t*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int ,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_6(EVP_TEST *VAR_1)
{
    DIGESTSIGN_DATA *VAR_2 = VAR_1->data;
    unsigned char *VAR_3 = ((void*)0);
    size_t VAR_4;

    if (!FUNC_4(VAR_2->input, VAR_0,
                            VAR_2->ctx)) {
        VAR_1->err = "DIGESTUPDATE_ERROR";
        goto err;
    }

    if (!FUNC_0(VAR_2->ctx, ((void*)0), &VAR_4)) {
        VAR_1->err = "DIGESTSIGNFINAL_LENGTH_ERROR";
        goto err;
    }
    if (!FUNC_3(VAR_3 = FUNC_2(VAR_4))) {
        VAR_1->err = "MALLOC_FAILURE";
        goto err;
    }
    if (!FUNC_0(VAR_2->ctx, VAR_3, &VAR_4)) {
        VAR_1->err = "DIGESTSIGNFINAL_ERROR";
        goto err;
    }
    if (!FUNC_5(VAR_1, "SIGNATURE_MISMATCH",
                            VAR_2->output, VAR_2->output_len,
                            VAR_3, VAR_4))
        goto err;

    VAR_1->err = ((void*)0);
 err:
    FUNC_1(VAR_3);
    return 1;
}
