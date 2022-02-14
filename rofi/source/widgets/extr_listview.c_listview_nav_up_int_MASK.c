
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int direction; } ;
struct TYPE_6__ {scalar_t__ req_elements; scalar_t__ selected; TYPE_1__ barview; int cycle; } ;
typedef TYPE_2__ listview ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 ( listview *VAR_1 )
{
    if ( VAR_1 == ((void*)0) ) {
        return;
    }
    if ( VAR_1->req_elements == 0 || ( VAR_1->selected == 0 && !VAR_1->cycle ) ) {
        return;
    }
    if ( VAR_1->selected == 0 ) {
        VAR_1->selected = VAR_1->req_elements;
    }
    VAR_1->selected--;
    VAR_1->barview.direction = VAR_0;
    FUNC_1 ( FUNC_0 ( VAR_1 ) );
}
