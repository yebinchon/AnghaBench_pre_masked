
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int trigger_action_cb_data; int (* trigger_action ) (TYPE_1__*,int ,int ,int ,int ) ;} ;
typedef TYPE_1__ widget ;
typedef int guint ;
typedef int gint ;
typedef int WidgetTriggerActionResult ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;

WidgetTriggerActionResult FUNC_1 ( widget *VAR_1, guint VAR_2, gint VAR_3, gint VAR_4 )
{
    if ( VAR_1 && VAR_1->trigger_action ) {
        return VAR_1->trigger_action ( VAR_1, VAR_2, VAR_3, VAR_4, VAR_1->trigger_action_cb_data );
    }
    return VAR_0;
}
