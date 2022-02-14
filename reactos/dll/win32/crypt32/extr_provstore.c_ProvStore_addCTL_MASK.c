
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * hCertStore; } ;
struct TYPE_13__ {TYPE_4__ ctx; } ;
typedef TYPE_5__ ctl_t ;
typedef int context_t ;
struct TYPE_9__ {int dwOpenFlags; } ;
struct TYPE_14__ {TYPE_7__* memStore; int hStoreProv; scalar_t__ (* provWriteCtl ) (int ,int ,int ) ;TYPE_1__ hdr; } ;
typedef TYPE_6__ WINE_PROVIDERSTORE ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_15__ {TYPE_3__* vtbl; } ;
struct TYPE_10__ {scalar_t__ (* addContext ) (TYPE_7__*,int *,int *,int **,scalar_t__) ;} ;
struct TYPE_11__ {TYPE_2__ ctls; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,int *,int *,int **) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int *,int *,int **,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int *,int *,int **,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_6(WINECRYPT_CERTSTORE *VAR_5, context_t *VAR_6,
 context_t *VAR_7, context_t **VAR_8, BOOL VAR_9)
{
    WINE_PROVIDERSTORE *VAR_10 = (WINE_PROVIDERSTORE*)VAR_5;
    BOOL VAR_11;

    FUNC_1("(%p, %p, %p, %p)\n", VAR_5, VAR_6, VAR_7, VAR_8);

    if (VAR_7)
        VAR_11 = VAR_10->memStore->vtbl->ctls.addContext(VAR_10->memStore, VAR_6, VAR_7,
         VAR_8, VAR_4);
    else
    {
        if (VAR_10->hdr.dwOpenFlags & VAR_1)
        {
            FUNC_0(VAR_2);
            VAR_11 = VAR_3;
        }
        else
        {
            VAR_11 = VAR_4;
            if (VAR_10->provWriteCtl)
                VAR_11 = VAR_10->provWriteCtl(VAR_10->hStoreProv, FUNC_2(VAR_6),
                 VAR_0);
            if (VAR_11)
                VAR_11 = VAR_10->memStore->vtbl->ctls.addContext(VAR_10->memStore, VAR_6, ((void*)0),
                 VAR_8, VAR_4);
        }
    }



    if (VAR_11 && VAR_8)
        (*(ctl_t**)VAR_8)->ctx.hCertStore = VAR_5;
    return VAR_11;
}
