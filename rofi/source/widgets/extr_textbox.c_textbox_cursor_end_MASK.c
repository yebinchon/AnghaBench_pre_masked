
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursor; int blink; int * text; } ;
typedef TYPE_1__ textbox ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

void FUNC_3 ( textbox *VAR_0 )
{
    if ( VAR_0->text == ((void*)0) ) {
        VAR_0->cursor = 0;
        FUNC_2 ( FUNC_0 ( VAR_0 ) );
        return;
    }
    VAR_0->cursor = ( int ) FUNC_1 ( VAR_0->text, -1 );
    FUNC_2 ( FUNC_0 ( VAR_0 ) );

    VAR_0->blink = 2;
}
