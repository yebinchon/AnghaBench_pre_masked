
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int direction; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ last_offset; scalar_t__ selected; scalar_t__ max_elements; TYPE_1__ barview; } ;
typedef TYPE_2__ listview ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 ( listview *VAR_2 )
{
    if ( VAR_2 == ((void*)0) ) {
        return;
    }
    if ( VAR_2->type == VAR_0 ) {
        if ( VAR_2->last_offset == 0 ) {
            VAR_2->selected = 0;
        }
        else {
            VAR_2->selected = VAR_2->last_offset - 1;
        }
        VAR_2->barview.direction = VAR_1;
        FUNC_1 ( FUNC_0 ( VAR_2 ) );
        return;
    }

    if ( VAR_2->selected < VAR_2->max_elements ) {
        VAR_2->selected = 0;
    }
    else{
        VAR_2->selected -= ( VAR_2->max_elements );
    }
    FUNC_1 ( FUNC_0 ( VAR_2 ) );
}
