
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ selected; scalar_t__ max_rows; } ;
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
    if ( VAR_1->selected >= VAR_1->max_rows ) {
        VAR_1->selected -= VAR_1->max_rows;
        FUNC_2 ( FUNC_0 ( VAR_1 ) );
    }
}
