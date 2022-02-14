
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* signature; } ;
struct TYPE_9__ {TYPE_2__ sig; } ;
struct TYPE_10__ {TYPE_3__ op; } ;
struct TYPE_7__ {int const* (* gettable_ctx_params ) () ;} ;
typedef int OSSL_PARAM ;
typedef TYPE_4__ EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int const* FUNC_1 () ;

const OSSL_PARAM *FUNC_2(EVP_PKEY_CTX *VAR_0)
{
    if (FUNC_0(VAR_0)
            && VAR_0->op.sig.signature != ((void*)0)
            && VAR_0->op.sig.signature->gettable_ctx_params != ((void*)0))
        return VAR_0->op.sig.signature->gettable_ctx_params();

    return ((void*)0);
}
