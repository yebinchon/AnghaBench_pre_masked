
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


struct TYPE_13__ {int * sigprovctx; TYPE_3__* signature; } ;
struct TYPE_11__ {int * exchprovctx; TYPE_1__* exchange; } ;
struct TYPE_14__ {TYPE_4__ sig; TYPE_2__ kex; } ;
struct TYPE_15__ {TYPE_5__ op; } ;
struct TYPE_12__ {int (* set_ctx_params ) (int *,int *) ;} ;
struct TYPE_10__ {int (* set_ctx_params ) (int *,int *) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_6__ EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(EVP_PKEY_CTX *VAR_0, OSSL_PARAM *VAR_1)
{
    if (FUNC_0(VAR_0)
            && VAR_0->op.kex.exchprovctx != ((void*)0)
            && VAR_0->op.kex.exchange != ((void*)0)
            && VAR_0->op.kex.exchange->set_ctx_params != ((void*)0))
        return VAR_0->op.kex.exchange->set_ctx_params(VAR_0->op.kex.exchprovctx,
                                                    VAR_1);
    if (FUNC_1(VAR_0)
            && VAR_0->op.sig.sigprovctx != ((void*)0)
            && VAR_0->op.sig.signature != ((void*)0)
            && VAR_0->op.sig.signature->set_ctx_params != ((void*)0))
        return VAR_0->op.sig.signature->set_ctx_params(VAR_0->op.sig.sigprovctx,
                                                     VAR_1);
    return 0;
}
