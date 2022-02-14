
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_rows; unsigned int selected; unsigned int req_elements; unsigned int cur_page; int rchanged; } ;
typedef TYPE_1__ listview ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0 ( listview *VAR_1 )
{
    unsigned int VAR_2 = ( VAR_1->max_rows - ( ( VAR_1->max_rows & 1 ) == 0 ) ) / 2;
    unsigned int VAR_3 = 0;
    if ( VAR_1->selected > VAR_2 ) {
        if ( VAR_1->selected < ( VAR_1->req_elements - ( VAR_1->max_rows - VAR_2 ) ) ) {
            VAR_3 = VAR_1->selected - VAR_2;
        }

        else if ( VAR_1->req_elements > VAR_1->max_rows ) {
            VAR_3 = VAR_1->req_elements - VAR_1->max_rows;
        }
    }
    if ( VAR_3 != VAR_1->cur_page ) {

        VAR_1->cur_page = VAR_3;
        VAR_1->rchanged = VAR_0;
    }
    return VAR_3;
}
