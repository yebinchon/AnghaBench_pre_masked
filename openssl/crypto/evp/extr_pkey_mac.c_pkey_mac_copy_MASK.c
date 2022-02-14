
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_18__ {scalar_t__ keygen_info_count; } ;
struct TYPE_16__ {int ktmp; int md; } ;
struct TYPE_17__ {int type; TYPE_1__ raw_data; TYPE_12__* ctx; } ;
struct TYPE_15__ {int * data; } ;
typedef TYPE_2__ MAC_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY_CTX ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_12__* FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (TYPE_12__*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (TYPE_3__ const*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;


 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(EVP_PKEY_CTX *VAR_2, const EVP_PKEY_CTX *VAR_3)
{
    MAC_PKEY_CTX *VAR_4, *VAR_5;

    VAR_4 = FUNC_5(VAR_3);
    if (VAR_4->ctx->data == ((void*)0))
        return 0;

    VAR_5 = FUNC_8(sizeof(*VAR_5));
    if (VAR_5 == ((void*)0)) {
        FUNC_7(VAR_1, VAR_0);
        return 0;
    }

    FUNC_6(VAR_2, VAR_5);
    VAR_2->keygen_info_count = 0;

    VAR_5->ctx = FUNC_2(VAR_4->ctx);
    if (VAR_5->ctx == ((void*)0))
        goto err;
    if (!FUNC_4(FUNC_3(VAR_5->ctx)))
        goto err;

    VAR_5->type = VAR_4->type;

    switch (VAR_5->type) {
    case 128:
        VAR_5->raw_data.md = VAR_4->raw_data.md;
        if (FUNC_1(&VAR_4->raw_data.ktmp) != ((void*)0) &&
            !FUNC_0(&VAR_5->raw_data.ktmp, &VAR_4->raw_data.ktmp))
            goto err;
        break;
    case 129:

        break;
    default:

        return 0;
    }
    return 1;
 err:
    FUNC_9(VAR_2);
    return 0;
}
