
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int widget ;
struct TYPE_6__ {int get_desired_height; int find_mouse_target; int update; int resize; int free; int draw; } ;
struct TYPE_7__ {TYPE_1__ widget; } ;
typedef TYPE_2__ container ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ,char const*) ;

container * FUNC_3 ( widget *VAR_7, const char *VAR_8 )
{
    container *VAR_9 = FUNC_1 ( sizeof ( container ) );

    FUNC_2 ( FUNC_0 ( VAR_9 ), VAR_7, VAR_0, VAR_8 );
    VAR_9->widget.draw = VAR_1;
    VAR_9->widget.free = VAR_3;
    VAR_9->widget.resize = VAR_5;
    VAR_9->widget.update = VAR_6;
    VAR_9->widget.find_mouse_target = VAR_2;
    VAR_9->widget.get_desired_height = VAR_4;
    return VAR_9;
}
