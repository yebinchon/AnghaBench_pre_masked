
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int (* freectx ) (int *) ;} ;
struct TYPE_14__ {int (* freectx ) (int *) ;} ;
struct TYPE_11__ {TYPE_6__* signature; int * sigprovctx; } ;
struct TYPE_10__ {TYPE_9__* exchange; int * exchprovctx; } ;
struct TYPE_12__ {TYPE_2__ sig; TYPE_1__ kex; } ;
struct TYPE_13__ {TYPE_3__ op; } ;
typedef TYPE_4__ EVP_PKEY_CTX ;


 int FUNC_0 (TYPE_9__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(EVP_PKEY_CTX *VAR_0)
{
    if (FUNC_1(VAR_0)) {
        if (VAR_0->op.kex.exchprovctx != ((void*)0) && VAR_0->op.kex.exchange != ((void*)0))
            VAR_0->op.kex.exchange->freectx(VAR_0->op.kex.exchprovctx);
        FUNC_0(VAR_0->op.kex.exchange);
        VAR_0->op.kex.exchprovctx = ((void*)0);
        VAR_0->op.kex.exchange = ((void*)0);
    } else if (FUNC_2(VAR_0)) {
        if (VAR_0->op.sig.sigprovctx != ((void*)0) && VAR_0->op.sig.signature != ((void*)0))
            VAR_0->op.sig.signature->freectx(VAR_0->op.sig.sigprovctx);
        FUNC_3(VAR_0->op.sig.signature);
        VAR_0->op.sig.sigprovctx = ((void*)0);
        VAR_0->op.sig.signature = ((void*)0);
    }
}
