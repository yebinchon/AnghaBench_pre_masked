
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* err; TYPE_1__* data; } ;
struct TYPE_5__ {int output_len; int output; int ctx; } ;
typedef TYPE_1__ PKEY_DATA ;
typedef TYPE_2__ EVP_TEST ;


 scalar_t__ FUNC_0 (int ,unsigned char*,size_t*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (TYPE_2__*,char*,int ,int ,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(EVP_TEST *VAR_0)
{
    PKEY_DATA *VAR_1 = VAR_0->data;
    unsigned char *VAR_2 = ((void*)0);
    size_t VAR_3;

    if (FUNC_0(VAR_1->ctx, ((void*)0), &VAR_3) <= 0) {
        VAR_0->err = "DERIVE_ERROR";
        goto err;
    }
    if (!FUNC_3(VAR_2 = FUNC_2(VAR_3))) {
        VAR_0->err = "DERIVE_ERROR";
        goto err;
    }
    if (FUNC_0(VAR_1->ctx, VAR_2, &VAR_3) <= 0) {
        VAR_0->err = "DERIVE_ERROR";
        goto err;
    }
    if (!FUNC_4(VAR_0, "SHARED_SECRET_MISMATCH",
                            VAR_1->output, VAR_1->output_len,
                            VAR_2, VAR_3))
        goto err;

    VAR_0->err = ((void*)0);
 err:
    FUNC_1(VAR_2);
    return 1;
}
