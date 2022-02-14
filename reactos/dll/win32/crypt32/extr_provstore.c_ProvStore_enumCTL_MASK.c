
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * hCertStore; } ;
struct TYPE_10__ {int base; TYPE_3__ ctx; } ;
typedef TYPE_4__ ctl_t ;
typedef int context_t ;
struct TYPE_11__ {TYPE_6__* memStore; } ;
typedef TYPE_5__ WINE_PROVIDERSTORE ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_12__ {TYPE_2__* vtbl; } ;
struct TYPE_7__ {scalar_t__ (* enumContext ) (TYPE_6__*,int *) ;} ;
struct TYPE_8__ {TYPE_1__ ctls; } ;


 scalar_t__ FUNC_0 (TYPE_6__*,int *) ;

__attribute__((used)) static context_t *FUNC_1(WINECRYPT_CERTSTORE *VAR_0, context_t *VAR_1)
{
    WINE_PROVIDERSTORE *VAR_2 = (WINE_PROVIDERSTORE*)VAR_0;
    ctl_t *VAR_3;

    VAR_3 = (ctl_t*)VAR_2->memStore->vtbl->ctls.enumContext(VAR_2->memStore, VAR_1);
    if (!VAR_3)
        return ((void*)0);




    VAR_3->ctx.hCertStore = VAR_0;
    return &VAR_3->base;
}
