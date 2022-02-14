
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int blink; int cursor; int * text; } ;
typedef TYPE_1__ textbox ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;

void FUNC_5 ( textbox *VAR_0, int VAR_1 )
{
    if ( VAR_0 == ((void*)0) ) {
        return;
    }
    int VAR_2 = ( VAR_0->text == ((void*)0) ) ? 0 : FUNC_3 ( VAR_0->text, -1 );
    VAR_0->cursor = FUNC_0 ( 0, FUNC_1 ( VAR_2, VAR_1 ) );

    VAR_0->blink = 3;
    FUNC_4 ( FUNC_2 ( VAR_0 ) );
}
