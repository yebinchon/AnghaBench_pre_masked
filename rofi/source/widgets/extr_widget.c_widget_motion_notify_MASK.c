
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* motion_notify ) (TYPE_1__*,int ,int ) ;} ;
typedef TYPE_1__ widget ;
typedef int gint ;
typedef int gboolean ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

gboolean FUNC_1 ( widget *VAR_1, gint VAR_2, gint VAR_3 )
{
    if ( VAR_1 && VAR_1->motion_notify ) {
        VAR_1->motion_notify ( VAR_1, VAR_2, VAR_3 );
    }

    return VAR_0;
}
