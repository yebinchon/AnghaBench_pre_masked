
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int plugin_unk; } ;
struct TYPE_4__ {TYPE_2__* plugin_host; } ;
typedef int IOleControl ;
typedef TYPE_1__ HTMLPluginContainer ;
typedef int HRESULT ;
typedef int DISPID ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,void**) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(HTMLPluginContainer *VAR_1, DISPID VAR_2)
{
    IOleControl *VAR_3;
    HRESULT VAR_4;

    if(!VAR_1->plugin_host || !VAR_1->plugin_host->plugin_unk)
        return;

    FUNC_4(VAR_1->plugin_host);

    VAR_4 = FUNC_2(VAR_1->plugin_host->plugin_unk, &VAR_0, (void**)&VAR_3);
    if(FUNC_3(VAR_4)) {
        FUNC_0(VAR_3, VAR_2);
        FUNC_1(VAR_3);
    }
}
