
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* err; TYPE_1__* data; } ;
struct TYPE_5__ {size_t output_len; int output; int ctx; int params; } ;
typedef TYPE_1__ KDF_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (TYPE_2__*,char*,int ,size_t,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_6(EVP_TEST *VAR_0)
{
    KDF_DATA *VAR_1 = VAR_0->data;
    unsigned char *VAR_2 = ((void*)0);
    size_t VAR_3 = VAR_1->output_len;

    if (!FUNC_0(VAR_1->ctx, VAR_1->params)) {
        VAR_0->err = "KDF_CTRL_ERROR";
        return 1;
    }
    if (!FUNC_4(VAR_2 = FUNC_3(VAR_3))) {
        VAR_0->err = "INTERNAL_ERROR";
        goto err;
    }
    if (FUNC_1(VAR_1->ctx, VAR_2, VAR_3) <= 0) {
        VAR_0->err = "KDF_DERIVE_ERROR";
        goto err;
    }
    if (!FUNC_5(VAR_0, "KDF_MISMATCH",
                            VAR_1->output, VAR_1->output_len,
                            VAR_2, VAR_3))
        goto err;

    VAR_0->err = ((void*)0);

 err:
    FUNC_2(VAR_2);
    return 1;
}
