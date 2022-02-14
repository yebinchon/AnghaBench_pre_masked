
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int need_redraw; scalar_t__ enabled; } ;
typedef TYPE_1__ widget ;
typedef int gboolean ;


 int VAR_0 ;

gboolean FUNC_0 ( widget *VAR_1 )
{
    if ( VAR_1 && VAR_1->enabled ) {
        return VAR_1->need_redraw;
    }
    return VAR_0;
}
