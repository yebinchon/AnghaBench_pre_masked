
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* pctx; TYPE_1__* digest; } ;
struct TYPE_10__ {int * sigprovctx; TYPE_2__* signature; } ;
struct TYPE_11__ {TYPE_3__ sig; } ;
struct TYPE_12__ {scalar_t__ operation; TYPE_4__ op; } ;
struct TYPE_9__ {int const* (* settable_ctx_md_params ) (int *) ;} ;
struct TYPE_8__ {int const* (* settable_ctx_params ) () ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_5__ EVP_PKEY_CTX ;
typedef TYPE_6__ EVP_MD_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int const* FUNC_0 () ;
 int const* FUNC_1 (int *) ;

const OSSL_PARAM *FUNC_2(EVP_MD_CTX *VAR_2)
{
    EVP_PKEY_CTX *VAR_3;

    if (VAR_2 != ((void*)0)
            && VAR_2->digest != ((void*)0)
            && VAR_2->digest->settable_ctx_params != ((void*)0))
        return VAR_2->digest->settable_ctx_params();

    VAR_3 = VAR_2->pctx;
    if (VAR_3 != ((void*)0)
            && (VAR_3->operation == VAR_1
                || VAR_3->operation == VAR_0)
            && VAR_3->op.sig.sigprovctx != ((void*)0)
            && VAR_3->op.sig.signature->settable_ctx_md_params != ((void*)0))
        return VAR_3->op.sig.signature->settable_ctx_md_params(
                   VAR_3->op.sig.sigprovctx);

    return ((void*)0);
}
