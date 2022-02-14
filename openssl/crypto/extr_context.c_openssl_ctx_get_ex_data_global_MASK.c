
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int global; } ;
typedef int OSSL_EX_DATA_GLOBAL ;
typedef TYPE_1__ OPENSSL_CTX ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

OSSL_EX_DATA_GLOBAL *FUNC_1(OPENSSL_CTX *VAR_0)
{
    VAR_0 = FUNC_0(VAR_0);
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    return &VAR_0->global;
}
