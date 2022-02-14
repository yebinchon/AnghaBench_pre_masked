
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int context_t ;
struct TYPE_7__ {TYPE_4__* memStore; int hStoreProv; scalar_t__ (* provDeleteCrl ) (int ,int ,int ) ;} ;
typedef TYPE_3__ WINE_PROVIDERSTORE ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_8__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {scalar_t__ (* delete ) (TYPE_4__*,int *) ;} ;
struct TYPE_5__ {TYPE_2__ crls; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static BOOL FUNC_4(WINECRYPT_CERTSTORE *VAR_1, context_t *VAR_2)
{
    WINE_PROVIDERSTORE *VAR_3 = (WINE_PROVIDERSTORE*)VAR_1;
    BOOL VAR_4 = VAR_0;

    FUNC_0("(%p, %p)\n", VAR_1, VAR_2);

    if (VAR_3->provDeleteCrl)
        VAR_4 = VAR_3->provDeleteCrl(VAR_3->hStoreProv, FUNC_1(VAR_2), 0);
    if (VAR_4)
        VAR_4 = VAR_3->memStore->vtbl->crls.delete(VAR_3->memStore, VAR_2);
    return VAR_4;
}
