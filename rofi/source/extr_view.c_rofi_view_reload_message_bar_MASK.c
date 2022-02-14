
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mesg_box; int mesg_tb; int sw; } ;
typedef TYPE_1__ RofiViewState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 ( RofiViewState *VAR_0 )
{
    if ( VAR_0->mesg_box == ((void*)0) ) {
        return;
    }
    char *VAR_1 = FUNC_2 ( VAR_0->sw );
    if ( VAR_1 ) {
        FUNC_3 ( VAR_0->mesg_tb, VAR_1 );
        FUNC_5 ( FUNC_0 ( VAR_0->mesg_box ) );
        FUNC_1 ( VAR_1 );
    }
    else {
        FUNC_4 ( FUNC_0 ( VAR_0->mesg_box ) );
    }
}
