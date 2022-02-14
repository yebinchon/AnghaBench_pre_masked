
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filtered_lines; int quit; scalar_t__ prev_action; int list_view; scalar_t__ selected_line; int retv; scalar_t__* line_map; } ;
typedef TYPE_1__ RofiViewState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 ( RofiViewState *VAR_4 )
{
    if ( VAR_4->filtered_lines == 1 ) {
        VAR_4->retv = VAR_1;
        ( VAR_4->selected_line ) = VAR_4->line_map[FUNC_0 ( VAR_4->list_view )];
        VAR_4->quit = 1;
        return;
    }


    if ( VAR_4->filtered_lines == 0 && VAR_2 == VAR_4->prev_action ) {
        VAR_4->retv = VAR_0;
        ( VAR_4->selected_line ) = 0;
        VAR_4->quit = VAR_3;
    }
    else {
        FUNC_1 ( VAR_4->list_view );
    }
    VAR_4->prev_action = VAR_2;
}
