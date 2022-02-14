
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int md; int key_length; int key; int md_ctx; int o_ctx; int i_ctx; } ;
typedef TYPE_1__ HMAC_CTX ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(HMAC_CTX *VAR_1, HMAC_CTX *VAR_2)
{
    if (!FUNC_1(VAR_1))
        goto err;
    if (!FUNC_0(VAR_1->i_ctx, VAR_2->i_ctx))
        goto err;
    if (!FUNC_0(VAR_1->o_ctx, VAR_2->o_ctx))
        goto err;
    if (!FUNC_0(VAR_1->md_ctx, VAR_2->md_ctx))
        goto err;
    FUNC_3(VAR_1->key, VAR_2->key, VAR_0);
    VAR_1->key_length = VAR_2->key_length;
    VAR_1->md = VAR_2->md;
    return 1;
 err:
    FUNC_2(VAR_1);
    return 0;
}
