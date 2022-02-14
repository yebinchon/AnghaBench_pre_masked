
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int output_len; int output; int osin_len; int osin; int ctx; } ;
struct TYPE_5__ {char* err; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ DIGESTSIGN_DATA ;


 int FUNC_0 (int ,unsigned char*,size_t*,int ,int ) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(EVP_TEST *VAR_0)
{
    DIGESTSIGN_DATA *VAR_1 = VAR_0->data;
    unsigned char *VAR_2 = ((void*)0);
    size_t VAR_3;

    if (!FUNC_0(VAR_1->ctx, ((void*)0), &VAR_3,
                        VAR_1->osin, VAR_1->osin_len)) {
        VAR_0->err = "DIGESTSIGN_LENGTH_ERROR";
        goto err;
    }
    if (!FUNC_3(VAR_2 = FUNC_2(VAR_3))) {
        VAR_0->err = "MALLOC_FAILURE";
        goto err;
    }
    if (!FUNC_0(VAR_1->ctx, VAR_2, &VAR_3,
                        VAR_1->osin, VAR_1->osin_len)) {
        VAR_0->err = "DIGESTSIGN_ERROR";
        goto err;
    }
    if (!FUNC_4(VAR_0, "SIGNATURE_MISMATCH",
                            VAR_1->output, VAR_1->output_len,
                            VAR_2, VAR_3))
        goto err;

    VAR_0->err = ((void*)0);
 err:
    FUNC_1(VAR_2);
    return 1;
}
