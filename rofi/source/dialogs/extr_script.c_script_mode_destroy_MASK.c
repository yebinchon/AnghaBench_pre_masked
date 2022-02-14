
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * private_data; } ;
struct TYPE_5__ {unsigned int cmd_list_length; struct TYPE_5__* active_list; struct TYPE_5__* urgent_list; struct TYPE_5__* prompt; struct TYPE_5__* message; struct TYPE_5__* cmd_list; struct TYPE_5__* icon_name; struct TYPE_5__* entry; } ;
typedef TYPE_1__ ScriptModePrivateData ;
typedef TYPE_2__ Mode ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 ( Mode *VAR_0 )
{
    ScriptModePrivateData *VAR_1 = (ScriptModePrivateData *) VAR_0->private_data;
    if ( VAR_1 != ((void*)0) ) {
        for ( unsigned int VAR_2 = 0; VAR_2 < VAR_1->cmd_list_length; VAR_2++ ){
            FUNC_0 ( VAR_1->cmd_list[VAR_2].entry );
            FUNC_0 ( VAR_1->cmd_list[VAR_2].icon_name );
        }
        FUNC_0 ( VAR_1->cmd_list );
        FUNC_0 ( VAR_1->message );
        FUNC_0 ( VAR_1->prompt );
        FUNC_0 ( VAR_1->urgent_list );
        FUNC_0 ( VAR_1->active_list );
        FUNC_0 ( VAR_1 );
        VAR_0->private_data = ((void*)0);
    }
}
