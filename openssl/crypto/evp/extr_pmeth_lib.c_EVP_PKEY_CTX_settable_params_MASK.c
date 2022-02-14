
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* signature; } ;
struct TYPE_12__ {TYPE_5__* exchange; } ;
struct TYPE_13__ {TYPE_2__ sig; TYPE_3__ kex; } ;
struct TYPE_15__ {TYPE_4__ op; } ;
struct TYPE_14__ {int const* (* settable_ctx_params ) () ;} ;
struct TYPE_10__ {int const* (* settable_ctx_params ) () ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_6__ EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int const* FUNC_2 () ;
 int const* FUNC_3 () ;

const OSSL_PARAM *FUNC_4(EVP_PKEY_CTX *VAR_0)
{
    if (FUNC_0(VAR_0)
            && VAR_0->op.kex.exchange != ((void*)0)
            && VAR_0->op.kex.exchange->settable_ctx_params != ((void*)0))
        return VAR_0->op.kex.exchange->settable_ctx_params();
    if (FUNC_1(VAR_0)
            && VAR_0->op.sig.signature != ((void*)0)
            && VAR_0->op.sig.signature->settable_ctx_params != ((void*)0))
        return VAR_0->op.sig.signature->settable_ctx_params();

    return ((void*)0);
}
