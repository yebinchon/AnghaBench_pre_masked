
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursor; int * text; } ;
typedef TYPE_1__ textbox ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1 ( textbox *VAR_0 )
{
    if ( VAR_0 == ((void*)0) || VAR_0->text == ((void*)0) ) {
        return;
    }
    FUNC_0 ( VAR_0, VAR_0->cursor, 1 );
}
