
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


typedef int context_t ;
struct TYPE_10__ {int * hCertStore; } ;
struct TYPE_11__ {TYPE_3__ ctx; } ;
typedef TYPE_4__ cert_t ;
struct TYPE_12__ {TYPE_6__* memStore; int hStoreProv; scalar_t__ (* provWriteCert ) (int ,int ,int ) ;} ;
typedef TYPE_5__ WINE_PROVIDERSTORE ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_13__ {TYPE_2__* vtbl; } ;
struct TYPE_8__ {scalar_t__ (* addContext ) (TYPE_6__*,int *,int *,int **,scalar_t__) ;} ;
struct TYPE_9__ {TYPE_1__ certs; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *,int *,int **) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int *,int *,int **,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int *,int *,int **,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_5(WINECRYPT_CERTSTORE *VAR_2, context_t *VAR_3,
 context_t *VAR_4, context_t **VAR_5, BOOL VAR_6)
{
    WINE_PROVIDERSTORE *VAR_7 = (WINE_PROVIDERSTORE*)VAR_2;
    BOOL VAR_8;

    FUNC_0("(%p, %p, %p, %p)\n", VAR_2, VAR_3, VAR_4, VAR_5);

    if (VAR_4)
        VAR_8 = VAR_7->memStore->vtbl->certs.addContext(VAR_7->memStore, VAR_3, VAR_4,
         VAR_5, VAR_1);
    else
    {
        VAR_8 = VAR_1;
        if (VAR_7->provWriteCert)
            VAR_8 = VAR_7->provWriteCert(VAR_7->hStoreProv, FUNC_1(VAR_3), VAR_0);
        if (VAR_8)
            VAR_8 = VAR_7->memStore->vtbl->certs.addContext(VAR_7->memStore, VAR_3, ((void*)0),
             VAR_5, VAR_1);
    }



    if (VAR_8 && VAR_5)
        (*(cert_t**)VAR_5)->ctx.hCertStore = VAR_2;
    return VAR_8;
}
