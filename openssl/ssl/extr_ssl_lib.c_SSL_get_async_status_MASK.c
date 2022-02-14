
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * waitctx; } ;
typedef TYPE_1__ SSL ;
typedef int ASYNC_WAIT_CTX ;


 int FUNC_0 (int *) ;

int FUNC_1(SSL *VAR_0, int *VAR_1)
{
    ASYNC_WAIT_CTX *VAR_2 = VAR_0->waitctx;

    if (VAR_2 == ((void*)0))
        return 0;
    *VAR_1 = FUNC_0(VAR_2);
    return 1;
}
