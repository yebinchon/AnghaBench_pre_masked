
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int widget ;
struct TYPE_6__ {int get_desired_height; int motion_notify; int trigger_action; int free; int draw; int h; scalar_t__ w; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {int length; int pos_length; scalar_t__ pos; TYPE_1__ widget; int width; } ;
typedef TYPE_2__ scrollbar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int *,int ,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

scrollbar *FUNC_7 ( widget *VAR_8, const char *VAR_9 )
{
    scrollbar *VAR_10 = FUNC_2 ( sizeof ( scrollbar ) );
    FUNC_4 ( FUNC_0 ( VAR_10 ), VAR_8, VAR_2, VAR_9 );
    VAR_10->widget.x = 0;
    VAR_10->widget.y = 0;
    VAR_10->width = FUNC_3 ( FUNC_0 ( VAR_10 ), "handle-width", VAR_0 );
    int VAR_11 = FUNC_1 ( VAR_10->width, VAR_1 );
    VAR_10->widget.w = FUNC_6 ( FUNC_0 ( VAR_10 ) ) + VAR_11;
    VAR_10->widget.h = FUNC_5 ( FUNC_0 ( VAR_10 ) );

    VAR_10->widget.draw = VAR_3;
    VAR_10->widget.free = VAR_4;
    VAR_10->widget.trigger_action = VAR_7;
    VAR_10->widget.motion_notify = VAR_6;
    VAR_10->widget.get_desired_height = VAR_5;

    VAR_10->length = 10;
    VAR_10->pos = 0;
    VAR_10->pos_length = 4;

    return VAR_10;
}
