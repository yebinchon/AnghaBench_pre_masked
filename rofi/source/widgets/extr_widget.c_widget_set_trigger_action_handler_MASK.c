
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int widget_trigger_action_cb ;
struct TYPE_3__ {void* trigger_action_cb_data; int trigger_action; } ;
typedef TYPE_1__ widget ;



void FUNC_0 ( widget *VAR_0, widget_trigger_action_cb VAR_1, void * VAR_2 )
{
    if ( VAR_0 == ((void*)0) ) {
        return;
    }
    VAR_0->trigger_action = VAR_1;
    VAR_0->trigger_action_cb_data = VAR_2;
}
