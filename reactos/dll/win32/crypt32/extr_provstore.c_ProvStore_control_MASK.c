
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hStoreProv; int (* provControl ) (int ,int ,int ,void const*) ;} ;
typedef TYPE_1__ WINE_PROVIDERSTORE ;
typedef int WINECRYPT_CERTSTORE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,TYPE_1__*,int ,int ,void const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,void const*) ;

__attribute__((used)) static BOOL FUNC_2(WINECRYPT_CERTSTORE *VAR_1, DWORD VAR_2, DWORD VAR_3, void const *VAR_4)
{
    WINE_PROVIDERSTORE *VAR_5 = (WINE_PROVIDERSTORE*)VAR_1;
    BOOL VAR_6 = VAR_0;

    FUNC_0("(%p, %08x, %d, %p)\n", VAR_5, VAR_2, VAR_3,
     VAR_4);

    if (VAR_5->provControl)
        VAR_6 = VAR_5->provControl(VAR_5->hStoreProv, VAR_2, VAR_3,
         VAR_4);
    return VAR_6;
}
