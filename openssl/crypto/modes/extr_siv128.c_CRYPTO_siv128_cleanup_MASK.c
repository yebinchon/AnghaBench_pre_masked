
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int final_ret; int crypto_ok; int tag; int d; int * mac; int * mac_ctx_init; int * cipher_ctx; } ;
typedef TYPE_1__ SIV128_CONTEXT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(SIV128_CONTEXT *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        FUNC_0(VAR_0->cipher_ctx);
        VAR_0->cipher_ctx = ((void*)0);
        FUNC_1(VAR_0->mac_ctx_init);
        VAR_0->mac_ctx_init = ((void*)0);
        FUNC_2(VAR_0->mac);
        VAR_0->mac = ((void*)0);
        FUNC_3(&VAR_0->d, sizeof(VAR_0->d));
        FUNC_3(&VAR_0->tag, sizeof(VAR_0->tag));
        VAR_0->final_ret = -1;
        VAR_0->crypto_ok = 1;
    }
    return 1;
}
