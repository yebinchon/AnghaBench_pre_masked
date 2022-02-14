
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * md_ctx; int * o_ctx; int * i_ctx; } ;
typedef TYPE_1__ HMAC_CTX ;


 void* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(HMAC_CTX *VAR_0)
{
    if (VAR_0->i_ctx == ((void*)0))
        VAR_0->i_ctx = FUNC_0();
    if (VAR_0->i_ctx == ((void*)0))
        return 0;
    if (VAR_0->o_ctx == ((void*)0))
        VAR_0->o_ctx = FUNC_0();
    if (VAR_0->o_ctx == ((void*)0))
        return 0;
    if (VAR_0->md_ctx == ((void*)0))
        VAR_0->md_ctx = FUNC_0();
    if (VAR_0->md_ctx == ((void*)0))
        return 0;
    return 1;
}
