
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * mac_ctx_init; int cipher_ctx; int d; } ;
typedef TYPE_1__ SIV128_CONTEXT ;


 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;

int FUNC_4(SIV128_CONTEXT *VAR_0, SIV128_CONTEXT *VAR_1)
{
    FUNC_3(&VAR_0->d, &VAR_1->d, sizeof(VAR_1->d));
    if (!FUNC_0(VAR_0->cipher_ctx, VAR_1->cipher_ctx))
        return 0;
    FUNC_2(VAR_0->mac_ctx_init);
    VAR_0->mac_ctx_init = FUNC_1(VAR_1->mac_ctx_init);
    if (VAR_0->mac_ctx_init == ((void*)0))
        return 0;
    return 1;
}
