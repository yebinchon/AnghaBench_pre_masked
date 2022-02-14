
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * waitctx; } ;
typedef TYPE_1__ SSL ;
typedef int OSSL_ASYNC_FD ;
typedef int ASYNC_WAIT_CTX ;


 int FUNC_0 (int *,int *,size_t*,int *,size_t*) ;

int FUNC_1(SSL *VAR_0, OSSL_ASYNC_FD *VAR_1, size_t *VAR_2,
                              OSSL_ASYNC_FD *VAR_3, size_t *VAR_4)
{
    ASYNC_WAIT_CTX *VAR_5 = VAR_0->waitctx;

    if (VAR_5 == ((void*)0))
        return 0;
    return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3,
                                          VAR_4);
}
