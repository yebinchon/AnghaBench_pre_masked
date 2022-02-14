
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; char* text; int tbft; int layout; } ;
typedef TYPE_1__ textbox ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char,size_t) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5 ( textbox *VAR_3 )
{
    FUNC_2 ( VAR_3->layout, ((void*)0) );
    if ( ( VAR_3->flags & VAR_2 ) == VAR_2 ) {
        size_t VAR_4 = FUNC_0 ( VAR_3->text, -1 );
        char VAR_5 [VAR_4 + 1];
        FUNC_1 ( VAR_5, '*', VAR_4 );
        VAR_5[VAR_4] = '\0';
        FUNC_4 ( VAR_3->layout, VAR_5, VAR_4 );
    }
    else if ( VAR_3->flags & VAR_1 || VAR_3->tbft & VAR_0 ) {
        FUNC_3 ( VAR_3->layout, VAR_3->text, -1 );
    }
    else {
        FUNC_4 ( VAR_3->layout, VAR_3->text, -1 );
    }
}
