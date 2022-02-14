
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int widget ;
typedef int listview_update_callback ;
struct TYPE_11__ {int get_desired_height; int trigger_action; int find_mouse_target; int draw; int resize; int free; } ;
struct TYPE_12__ {unsigned int eh; scalar_t__ type; void* fixed_columns; void* cycle; void* reverse; void* dynamic; void* fixed_num_lines; int menu_columns; int spacing; void* udata; int callback; int element_height; int scrollbar; int emode; TYPE_1__ widget; int listview_name; } ;
typedef TYPE_2__ listview ;
typedef void* gboolean ;
struct TYPE_13__ {TYPE_2__* box; } ;
typedef TYPE_3__ _listview_row ;
struct TYPE_14__ {void* fixed_num_lines; void* cycle; int menu_columns; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_9__ VAR_8 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_2__*,void*) ;
 int VAR_13 ;
 void* FUNC_5 (int ,char*,void*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 scalar_t__ FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *,int ,char const*) ;

listview *FUNC_13 ( widget *VAR_14, const char *VAR_15, listview_update_callback VAR_16, void *VAR_17, unsigned int VAR_18, gboolean VAR_19 )
{
    listview *VAR_20 = FUNC_1 ( sizeof ( listview ) );
    FUNC_12 ( FUNC_0 ( VAR_20 ), VAR_14, VAR_6, VAR_15 );
    VAR_20->listview_name = FUNC_2 ( VAR_15 );
    VAR_20->widget.free = VAR_10;
    VAR_20->widget.resize = VAR_12;
    VAR_20->widget.draw = VAR_7;
    VAR_20->widget.find_mouse_target = VAR_9;
    VAR_20->widget.trigger_action = VAR_13;
    VAR_20->widget.get_desired_height = VAR_11;
    VAR_20->eh = VAR_18;

    VAR_20->emode = VAR_3;
    VAR_20->scrollbar = FUNC_9 ( FUNC_0 ( VAR_20 ), "scrollbar" );


    _listview_row VAR_21;
    FUNC_3 ( VAR_20, &VAR_21);
    VAR_20->element_height = FUNC_11 ( FUNC_0(VAR_21.box) );
    FUNC_10 ( FUNC_0 ( VAR_21.box ) );

    VAR_20->callback = VAR_16;
    VAR_20->udata = VAR_17;


    VAR_20->spacing = FUNC_6 ( FUNC_0 ( VAR_20 ), "spacing", VAR_0 );
    VAR_20->menu_columns = FUNC_7 ( FUNC_0 ( VAR_20 ), "columns", VAR_8.menu_columns );
    VAR_20->fixed_num_lines = FUNC_5 ( FUNC_0 ( VAR_20 ), "fixed-height", VAR_8.fixed_num_lines );
    VAR_20->dynamic = FUNC_5 ( FUNC_0 ( VAR_20 ), "dynamic", VAR_5 );
    VAR_20->reverse = FUNC_5 ( FUNC_0 ( VAR_20 ), "reverse", VAR_19 );
    VAR_20->cycle = FUNC_5 ( FUNC_0 ( VAR_20 ), "cycle", VAR_8.cycle );
    VAR_20->fixed_columns = FUNC_5 ( FUNC_0 ( VAR_20 ), "fixed-columns", VAR_1 );

    VAR_20->type = FUNC_8 ( FUNC_0 ( VAR_20 ), "layout", VAR_4 );
    if ( VAR_20->type == VAR_2 ) {
        FUNC_4 ( VAR_20, FUNC_5 ( FUNC_0 ( VAR_20 ), "scrollbar", VAR_1 ) );
    }
    else {
        FUNC_4 ( VAR_20, VAR_1 );
    }
    return VAR_20;
}
