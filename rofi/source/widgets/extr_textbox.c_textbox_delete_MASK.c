
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* text; int cursor; int blink; int changed; } ;
typedef TYPE_1__ textbox ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;

void FUNC_6 ( textbox *VAR_1, int VAR_2, int VAR_3 )
{
    if ( VAR_1 == ((void*)0) ) {
        return;
    }
    int VAR_4 = FUNC_3 ( VAR_1->text, -1 );
    if ( VAR_4 == VAR_2 ) {
        return;
    }
    VAR_2 = FUNC_0 ( 0, FUNC_1 ( VAR_4, VAR_2 ) );
    if ( ( VAR_2 + VAR_3 ) > VAR_4 ) {
        VAR_3 = VAR_4 - VAR_3;
    }

    char *VAR_5 = FUNC_2 ( VAR_1->text, VAR_2 );
    char *VAR_6 = FUNC_2 ( VAR_1->text, VAR_2 + VAR_3 );

    FUNC_4 ( VAR_5, VAR_6, ( VAR_1->text + FUNC_5 ( VAR_1->text ) ) - VAR_6 + 1 );
    if ( VAR_1->cursor >= VAR_2 && VAR_1->cursor < ( VAR_2 + VAR_3 ) ) {
        VAR_1->cursor = VAR_2;
    }
    else if ( VAR_1->cursor >= ( VAR_2 + VAR_3 ) ) {
        VAR_1->cursor -= VAR_3;
    }


    VAR_1->blink = 2;
    VAR_1->changed = VAR_0;
}
