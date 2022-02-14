
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int listview ;
typedef scalar_t__ gboolean ;
struct TYPE_2__ {void* skip_absorb; void* quit; int * line_map; int selected_line; int retv; } ;
typedef TYPE_1__ RofiViewState ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 size_t FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 ( listview *VAR_3, gboolean VAR_4, void *VAR_5 )
{
    RofiViewState *VAR_6 = (RofiViewState *) VAR_5;
    VAR_6->retv = VAR_1;
    if ( VAR_4 ) {
        VAR_6->retv |= VAR_0;
    }
    ( VAR_6->selected_line ) = VAR_6->line_map[FUNC_0 ( VAR_3 )];

    VAR_6->quit = VAR_2;
    VAR_6->skip_absorb = VAR_2;
}
