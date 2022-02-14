
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; TYPE_1__* (* find_mouse_target ) (TYPE_1__*,scalar_t__,int ,int ) ;} ;
typedef TYPE_1__ widget ;
typedef int gint ;
typedef scalar_t__ WidgetType ;


 TYPE_1__* FUNC_0 (TYPE_1__*,scalar_t__,int ,int ) ;

widget *FUNC_1 ( widget *VAR_0, WidgetType VAR_1, gint VAR_2, gint VAR_3 )
{
    if ( !VAR_0 ) {
        return ((void*)0);
    }

    if ( VAR_0->find_mouse_target ) {
        widget *VAR_4 = VAR_0->find_mouse_target ( VAR_0, VAR_1, VAR_2, VAR_3 );
        if ( VAR_4 != ((void*)0) ) {
            return VAR_4;
        }
    }
    if ( VAR_0->type == VAR_1 ) {
        return VAR_0;
    }
    return ((void*)0);
}
