
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_modi; struct TYPE_4__* modi; struct TYPE_4__* distance; struct TYPE_4__* line_map; int main_window; int * tokens; } ;
typedef TYPE_1__ RofiViewState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4 ( RofiViewState *VAR_0 )
{
    if ( VAR_0->tokens ) {
        FUNC_2 ( VAR_0->tokens );
        VAR_0->tokens = ((void*)0);
    }


    FUNC_3 ( FUNC_0 ( VAR_0->main_window ) );

    FUNC_1 ( VAR_0->line_map );
    FUNC_1 ( VAR_0->distance );


    FUNC_1 ( VAR_0->modi );
    VAR_0->num_modi = 0;
    FUNC_1 ( VAR_0 );
}
