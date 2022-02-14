
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int plugin_unk; } ;
typedef TYPE_1__ PluginHost ;
typedef int IPersistPropertyBag2 ;
typedef int IPersistPropertyBag ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,void**) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_6(PluginHost *VAR_2)
{
    IPersistPropertyBag2 *VAR_3;
    IPersistPropertyBag *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_3(VAR_2->plugin_unk, &VAR_1, (void**)&VAR_3);
    if(FUNC_4(VAR_5)) {
        FUNC_0("Use IPersistPropertyBag2 iface\n");
        FUNC_1(VAR_3);
        return;
    }

    VAR_5 = FUNC_3(VAR_2->plugin_unk, &VAR_0, (void**)&VAR_4);
    if(FUNC_4(VAR_5)) {
        FUNC_5(VAR_2, VAR_4);
        FUNC_2(VAR_4);
        return;
    }

    FUNC_0("No IPersistPropertyBag iface\n");
}
