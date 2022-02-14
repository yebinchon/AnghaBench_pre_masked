
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * sigprovctx; TYPE_2__* signature; } ;
struct TYPE_9__ {TYPE_1__ sig; } ;
struct TYPE_10__ {TYPE_3__ op; } ;
struct TYPE_8__ {int (* get_ctx_params ) (int *,int *) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_4__ EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(EVP_PKEY_CTX *VAR_0, OSSL_PARAM *VAR_1)
{
    if (FUNC_0(VAR_0)
            && VAR_0->op.sig.sigprovctx != ((void*)0)
            && VAR_0->op.sig.signature != ((void*)0)
            && VAR_0->op.sig.signature->get_ctx_params != ((void*)0))
        return VAR_0->op.sig.signature->get_ctx_params(VAR_0->op.sig.sigprovctx,
                                                     VAR_1);
    return 0;
}
