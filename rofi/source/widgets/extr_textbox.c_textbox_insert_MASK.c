
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* text; int blink; int changed; } ;
typedef TYPE_1__ textbox ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 char* FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,int const) ;
 int FUNC_4 (char*,char const*,int const) ;
 scalar_t__ FUNC_5 (char*) ;

void FUNC_6 ( textbox *VAR_1, const int VAR_2, const char *VAR_3, const int VAR_4 )
{
    if ( VAR_1 == ((void*)0) ) {
        return;
    }
    char *VAR_5 = FUNC_3 ( VAR_1->text, VAR_2 );
    int VAR_6 = VAR_5 - VAR_1->text;
    int VAR_7 = ( int ) FUNC_5 ( VAR_1->text );
    VAR_6 = FUNC_0 ( 0, FUNC_1 ( VAR_7, VAR_6 ) );

    VAR_1->text = FUNC_2 ( VAR_1->text, VAR_7 + VAR_4 + 1 );

    char *VAR_8 = VAR_1->text + VAR_6;
    FUNC_4 ( VAR_8 + VAR_4, VAR_8, VAR_7 - VAR_6 + 1 );

    FUNC_4 ( VAR_8, VAR_3, VAR_4 );



    VAR_1->blink = 2;
    VAR_1->changed = VAR_0;
}
