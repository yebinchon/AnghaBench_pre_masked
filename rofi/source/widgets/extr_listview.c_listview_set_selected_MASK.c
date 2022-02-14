
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int direction; } ;
struct TYPE_6__ {scalar_t__ req_elements; TYPE_1__ barview; int selected; } ;
typedef TYPE_2__ listview ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3 ( listview *VAR_1, unsigned int VAR_2 )
{
    if ( VAR_1 && VAR_1->req_elements > 0 ) {
        VAR_1->selected = FUNC_0 ( VAR_2, VAR_1->req_elements - 1 );
        VAR_1->barview.direction = VAR_0;
        FUNC_2 ( FUNC_1 ( VAR_1 ) );
    }
}
