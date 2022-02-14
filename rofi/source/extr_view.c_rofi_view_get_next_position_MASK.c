
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int selected_line; unsigned int num_lines; unsigned int* line_map; int list_view; } ;
typedef TYPE_1__ RofiViewState ;


 unsigned int FUNC_0 (int ) ;

unsigned int FUNC_1 ( const RofiViewState *VAR_0 )
{
    unsigned int VAR_1 = VAR_0->selected_line;
    unsigned int VAR_2 = FUNC_0 ( VAR_0->list_view );
    if ( ( VAR_2 + 1 ) < VAR_0->num_lines ) {
        ( VAR_1 ) = VAR_0->line_map[VAR_2 + 1];
    }
    return VAR_1;
}
