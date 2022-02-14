
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blink; } ;
typedef TYPE_1__ textbox ;
typedef scalar_t__ gpointer ;
typedef int gboolean ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static gboolean FUNC_3 ( gpointer VAR_1 )
{
    textbox *VAR_2 = (textbox *) VAR_1;
    if ( VAR_2->blink < 2 ) {
        VAR_2->blink = !VAR_2->blink;
        FUNC_2 ( FUNC_0 ( VAR_2 ) );
        FUNC_1 ( );
    }
    else {
        VAR_2->blink--;
    }
    return VAR_0;
}
