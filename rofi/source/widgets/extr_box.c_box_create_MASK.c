
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int widget ;
struct TYPE_6__ {int get_desired_width; int get_desired_height; int find_mouse_target; int update; int resize; int free; int draw; } ;
struct TYPE_7__ {int spacing; int type; TYPE_1__ widget; } ;
typedef TYPE_2__ box ;
typedef int RofiOrientation ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int *,int ,char const*) ;

box * FUNC_5 ( widget *VAR_9, const char *VAR_10, RofiOrientation VAR_11 )
{
    box *VAR_12 = FUNC_1 ( sizeof ( box ) );

    FUNC_4 ( FUNC_0 ( VAR_12 ), VAR_9, VAR_1, VAR_10 );
    VAR_12->type = VAR_11;
    VAR_12->widget.draw = VAR_2;
    VAR_12->widget.free = VAR_4;
    VAR_12->widget.resize = VAR_7;
    VAR_12->widget.update = VAR_8;
    VAR_12->widget.find_mouse_target = VAR_3;
    VAR_12->widget.get_desired_height = VAR_5;
    VAR_12->widget.get_desired_width = VAR_6;

    VAR_12->type = FUNC_3 ( FUNC_0 ( VAR_12 ), "orientation", VAR_12->type );

    VAR_12->spacing = FUNC_2 ( FUNC_0 ( VAR_12 ), "spacing", VAR_0 );
    return VAR_12;
}
