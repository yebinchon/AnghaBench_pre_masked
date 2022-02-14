
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


struct TYPE_13__ {int provctx; TYPE_1__* digest; TYPE_5__* pctx; } ;
struct TYPE_10__ {int * sigprovctx; TYPE_2__* signature; } ;
struct TYPE_11__ {TYPE_3__ sig; } ;
struct TYPE_12__ {scalar_t__ operation; TYPE_4__ op; } ;
struct TYPE_9__ {int (* set_ctx_md_params ) (int *,int const*) ;} ;
struct TYPE_8__ {int (* set_ctx_params ) (int ,int const*) ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_5__ EVP_PKEY_CTX ;
typedef TYPE_6__ EVP_MD_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *,int const*) ;

int FUNC_2(EVP_MD_CTX *VAR_2, const OSSL_PARAM VAR_3[])
{
    EVP_PKEY_CTX *VAR_4 = VAR_2->pctx;

    if (VAR_2->digest != ((void*)0) && VAR_2->digest->set_ctx_params != ((void*)0))
        return VAR_2->digest->set_ctx_params(VAR_2->provctx, VAR_3);

    if (VAR_4 != ((void*)0)
            && (VAR_4->operation == VAR_1
                || VAR_4->operation == VAR_0)
            && VAR_4->op.sig.sigprovctx != ((void*)0)
            && VAR_4->op.sig.signature->set_ctx_md_params != ((void*)0))
        return VAR_4->op.sig.signature->set_ctx_md_params(VAR_4->op.sig.sigprovctx,
                                                         VAR_3);
    return 0;
}
