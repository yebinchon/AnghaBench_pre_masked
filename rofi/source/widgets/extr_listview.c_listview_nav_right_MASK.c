
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int selected; int max_rows; int req_elements; } ;
typedef TYPE_1__ listview ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3 ( listview *VAR_1 )
{
    if ( VAR_1 == ((void*)0) ) {
        return;
    }
    if ( VAR_1->type == VAR_0 ) {
        FUNC_1 ( VAR_1 );
        return;
    }
    if ( ( VAR_1->selected + VAR_1->max_rows ) < VAR_1->req_elements ) {
        VAR_1->selected += VAR_1->max_rows;
        FUNC_2 ( FUNC_0 ( VAR_1 ) );
    }
    else if ( VAR_1->selected < ( VAR_1->req_elements - 1 ) ) {



        int VAR_2 = VAR_1->selected / VAR_1->max_rows;

        int VAR_3 = VAR_1->req_elements / VAR_1->max_rows;

        if ( VAR_2 != VAR_3 ) {
            VAR_1->selected = VAR_1->req_elements - 1;
            FUNC_2 ( FUNC_0 ( VAR_1 ) );
        }
    }
}
