
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ip_object; int hwnd; int IOleClientSite_iface; int plugin_unk; } ;
typedef int RECT ;
typedef TYPE_1__ PluginHost ;
typedef int IOleObject ;
typedef int HWND ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *,int ,int *,int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,void**) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_10(PluginHost *VAR_2)
{
    IOleObject *VAR_3;
    RECT VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_5(VAR_2->plugin_unk, &VAR_0, (void**)&VAR_3);
    if(FUNC_0(VAR_5)) {
        FUNC_1("Plugin does not support IOleObject\n");
        return;
    }

    FUNC_9(VAR_2, &VAR_4);
    VAR_5 = FUNC_3(VAR_3, VAR_1, ((void*)0), &VAR_2->IOleClientSite_iface, 0, VAR_2->hwnd, &VAR_4);
    FUNC_4(VAR_3);
    if(FUNC_0(VAR_5))
        FUNC_8("DoVerb failed: %08x\n", VAR_5);

    if(VAR_2->ip_object) {
        HWND VAR_6;

        VAR_5 = FUNC_2(VAR_2->ip_object, &VAR_6);
        if(FUNC_6(VAR_5))
            FUNC_7("hwnd %p\n", VAR_6);
    }
}
