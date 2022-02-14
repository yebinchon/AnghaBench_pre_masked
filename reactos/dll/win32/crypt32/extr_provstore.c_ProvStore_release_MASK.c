
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int ref; } ;
struct TYPE_7__ {int dwStoreProvFlags; TYPE_5__ hdr; TYPE_3__* memStore; int hStoreProv; int (* provCloseStore ) (int ,int ) ;} ;
typedef TYPE_2__ WINE_PROVIDERSTORE ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_8__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {int (* release ) (TYPE_3__*,int ) ;} ;
typedef scalar_t__ LONG ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,TYPE_2__*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static DWORD FUNC_6(WINECRYPT_CERTSTORE *VAR_2, DWORD VAR_3)
{
    WINE_PROVIDERSTORE *VAR_4 = (WINE_PROVIDERSTORE*)VAR_2;
    LONG VAR_5;

    if(VAR_3)
        FUNC_1("Unimplemented flags %x\n", VAR_3);

    VAR_5 = FUNC_2(&VAR_4->hdr.ref);
    FUNC_3("(%p) ref=%d\n", VAR_4, VAR_5);

    if(VAR_5)
        return VAR_1;

    if (VAR_4->provCloseStore)
        VAR_4->provCloseStore(VAR_4->hStoreProv, VAR_3);
    if (!(VAR_4->dwStoreProvFlags & VAR_0))
        VAR_4->memStore->vtbl->release(VAR_4->memStore, VAR_3);
    FUNC_0(&VAR_4->hdr);
    return VAR_1;
}
