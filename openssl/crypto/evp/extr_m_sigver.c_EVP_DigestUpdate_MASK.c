
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* pctx; } ;
struct TYPE_10__ {int * sigprovctx; TYPE_1__* signature; } ;
struct TYPE_9__ {TYPE_3__ sig; } ;
struct TYPE_11__ {scalar_t__ operation; TYPE_2__ op; } ;
struct TYPE_8__ {int (* digest_verify_update ) (int *,void const*,size_t) ;} ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef TYPE_5__ EVP_MD_CTX ;


 int FUNC_0 (TYPE_5__*,void const*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,void const*,size_t) ;

int FUNC_2(EVP_MD_CTX *VAR_1, const void *VAR_2, size_t VAR_3)
{
    EVP_PKEY_CTX *VAR_4 = VAR_1->pctx;

    if (VAR_4 == ((void*)0)
            || VAR_4->operation != VAR_0
            || VAR_4->op.sig.sigprovctx == ((void*)0)
            || VAR_4->op.sig.signature == ((void*)0))
        goto legacy;

    return VAR_4->op.sig.signature->digest_verify_update(VAR_4->op.sig.sigprovctx,
                                                        VAR_2, VAR_3);

 legacy:
    return FUNC_0(VAR_1, VAR_2, VAR_3);
}
