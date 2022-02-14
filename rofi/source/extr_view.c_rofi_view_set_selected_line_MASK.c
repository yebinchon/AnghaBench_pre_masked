
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int main_window; } ;
struct TYPE_6__ {int connection; } ;
struct TYPE_5__ {unsigned int selected_line; unsigned int filtered_lines; unsigned int* line_map; int list_view; } ;
typedef TYPE_1__ RofiViewState ;


 TYPE_4__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,int ,int,int ,int ,int,int) ;
 int FUNC_2 (int ) ;

void FUNC_3 ( RofiViewState *VAR_3, unsigned int VAR_4 )
{
    VAR_3->selected_line = VAR_4;

    unsigned int VAR_5 = 0;
    for ( unsigned int VAR_6 = 0; ( ( VAR_3->selected_line ) ) < VAR_1 && !VAR_5 && VAR_6 < VAR_3->filtered_lines; VAR_6++ ) {
        if ( VAR_3->line_map[VAR_6] == ( VAR_3->selected_line ) ) {
            VAR_5 = VAR_6;
            break;
        }
    }
    FUNC_0 ( VAR_3->list_view, VAR_5 );
    FUNC_1 ( VAR_2->connection, VAR_0.main_window, 1, 0, 0, 1, 1 );
    FUNC_2 ( VAR_2->connection );
}
