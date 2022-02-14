
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int cur_visible; int direction; } ;
struct TYPE_6__ {scalar_t__ req_elements; scalar_t__ type; unsigned int last_offset; scalar_t__ selected; scalar_t__ max_elements; TYPE_1__ barview; } ;
typedef TYPE_2__ listview ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 ( listview *VAR_2 )
{
    if ( VAR_2 == ((void*)0) ) {
        return;
    }
    if ( VAR_2->req_elements == 0 ) {
        return;
    }
    if ( VAR_2->type == VAR_0 ) {
        unsigned int VAR_3 = VAR_2->last_offset + VAR_2->barview.cur_visible;
        VAR_2->selected = FUNC_0 ( VAR_3, VAR_2->req_elements - 1 );
        VAR_2->barview.direction = VAR_1;

        FUNC_2 ( FUNC_1 ( VAR_2 ) );
        return;
    }
    VAR_2->selected += ( VAR_2->max_elements );
    if ( VAR_2->selected >= VAR_2->req_elements ) {
        VAR_2->selected = VAR_2->req_elements - 1;
    }
    FUNC_2 ( FUNC_1 ( VAR_2 ) );
}
