
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct CONFIRMSAFETY {int dwFlags; int pUnk; int clsid; } ;
typedef int cs ;
struct TYPE_5__ {TYPE_1__* doc; int plugin_unk; int clsid; } ;
struct TYPE_4__ {int IInternetHostSecurityManager_iface; } ;
typedef TYPE_2__ PluginHost ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int **,scalar_t__*,int *,int,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static BOOL FUNC_3(PluginHost *VAR_4)
{
    DWORD VAR_5, VAR_6;
    struct CONFIRMSAFETY VAR_7;
    BYTE *VAR_8;
    HRESULT VAR_9;

    VAR_7.clsid = VAR_4->clsid;
    VAR_7.pUnk = VAR_4->plugin_unk;
    VAR_7.dwFlags = VAR_0;

    VAR_9 = FUNC_2(&VAR_4->doc->IInternetHostSecurityManager_iface,
            &VAR_2, &VAR_8, &VAR_5, (BYTE*)&VAR_7, sizeof(VAR_7), 0);
    if(FUNC_1(VAR_9))
        return VAR_1;

    VAR_6 = *(DWORD*)VAR_8;
    FUNC_0(VAR_8);
    return VAR_6 == VAR_3;
}
