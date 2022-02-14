
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int max_rows; unsigned int req_elements; unsigned int max_elements; int cur_columns; int menu_columns; unsigned int cur_elements; int rchanged; TYPE_3__* boxes; int fixed_columns; } ;
typedef TYPE_1__ listview ;
typedef int _listview_row ;
struct TYPE_10__ {int box; } ;


 unsigned int FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7 ( listview *VAR_3 )
{
    unsigned int VAR_4 = 0;
    if ( VAR_3->max_rows == 0 ) {
        return;
    }
    if ( !(VAR_3->fixed_columns) && VAR_3->req_elements < VAR_3->max_elements ) {
        VAR_4 = VAR_3->req_elements;
        VAR_3->cur_columns = ( VAR_3->req_elements + ( VAR_3->max_rows - 1 ) ) / VAR_3->max_rows;
    }
    else {
        VAR_4 = FUNC_0( VAR_3->req_elements, VAR_3->max_elements);
        VAR_3->cur_columns = VAR_3->menu_columns;
    }
    for ( unsigned int VAR_5 = VAR_4; VAR_5 < VAR_3->cur_elements; VAR_5++ ) {
        FUNC_5 ( FUNC_1 ( VAR_3->boxes[VAR_5].box ) );
    }
    VAR_3->boxes = FUNC_2 ( VAR_3->boxes, VAR_4 * sizeof ( _listview_row ) );
    if ( VAR_4 > 0 ) {
        for ( unsigned int VAR_6 = VAR_3->cur_elements; VAR_6 < VAR_4; VAR_6++ ) {
            FUNC_3 ( VAR_3, &(VAR_3->boxes[VAR_6]) );
            FUNC_6 ( FUNC_1 ( VAR_3->boxes[VAR_6].box ), VAR_2, VAR_3 );
            FUNC_4 ( VAR_3->boxes[VAR_6], VAR_0);
        }
    }
    VAR_3->rchanged = VAR_1;
    VAR_3->cur_elements = VAR_4;
}
