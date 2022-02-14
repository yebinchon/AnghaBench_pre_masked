
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * sigprovctx; } ;
struct TYPE_11__ {TYPE_1__ sig; } ;
struct TYPE_14__ {scalar_t__ operation; TYPE_2__ op; } ;
struct TYPE_13__ {int (* update ) (TYPE_4__*,void const*,size_t) ;int provctx; TYPE_3__* digest; TYPE_6__* pctx; } ;
struct TYPE_12__ {int (* dupdate ) (int ,void const*,size_t) ;int * prov; } ;
typedef TYPE_4__ EVP_MD_CTX ;


 int FUNC_0 (TYPE_4__*,void const*,size_t) ;
 int FUNC_1 (TYPE_4__*,void const*,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,void const*,size_t) ;
 int FUNC_5 (TYPE_4__*,void const*,size_t) ;

int FUNC_6(EVP_MD_CTX *VAR_4, const void *VAR_5, size_t VAR_6)
{
    if (VAR_6 == 0)
        return 1;

    if (VAR_4->pctx != ((void*)0)
            && FUNC_2(VAR_4->pctx)
            && VAR_4->pctx->op.sig.sigprovctx != ((void*)0)) {







        if (VAR_4->pctx->operation == VAR_1)
            return FUNC_0(VAR_4, VAR_5, VAR_6);
        if (VAR_4->pctx->operation == VAR_2)
            return FUNC_1(VAR_4, VAR_5, VAR_6);
        FUNC_3(VAR_0, VAR_3);
        return 0;
    }

    if (VAR_4->digest == ((void*)0) || VAR_4->digest->prov == ((void*)0))
        goto legacy;

    if (VAR_4->digest->dupdate == ((void*)0)) {
        FUNC_3(VAR_0, VAR_3);
        return 0;
    }
    return VAR_4->digest->dupdate(VAR_4->provctx, VAR_5, VAR_6);


 legacy:
    return VAR_4->update(VAR_4, VAR_5, VAR_6);
}
