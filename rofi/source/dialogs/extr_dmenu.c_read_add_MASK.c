
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gsize ;
struct TYPE_7__ {char* entry; int * icon_name; scalar_t__ icon_fetch_uid; } ;
struct TYPE_6__ {int cmd_list_length; int cmd_list_real_length; TYPE_3__* cmd_list; } ;
typedef int DmenuScriptEntry ;
typedef TYPE_1__ DmenuModePrivateData ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,TYPE_3__*,char*,int) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,int) ;
 char* FUNC_3 (char*,int) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void FUNC_5 ( DmenuModePrivateData * VAR_0, char *VAR_1, gsize VAR_2 )
{
    gsize VAR_3 = VAR_2;
    if ( ( VAR_0->cmd_list_length + 2 ) > VAR_0->cmd_list_real_length ) {
        VAR_0->cmd_list_real_length = FUNC_0 ( VAR_0->cmd_list_real_length * 2, 512 );
        VAR_0->cmd_list = FUNC_2 ( VAR_0->cmd_list, ( VAR_0->cmd_list_real_length ) * sizeof ( DmenuScriptEntry ) );
    }

    VAR_0->cmd_list[VAR_0->cmd_list_length].icon_fetch_uid = 0;
    VAR_0->cmd_list[VAR_0->cmd_list_length].icon_name = ((void*)0);
    char *VAR_4 = FUNC_4(VAR_1, '\0');
    if ( VAR_4 != ((void*)0) ) {
        VAR_3 = VAR_4-VAR_1;
        FUNC_1 ( ((void*)0), &(VAR_0->cmd_list[VAR_0->cmd_list_length]), VAR_4+1, VAR_2-VAR_3);
    }
    char *VAR_5 = FUNC_3 ( VAR_1, VAR_3 );
    VAR_0->cmd_list[VAR_0->cmd_list_length].entry = VAR_5;
    VAR_0->cmd_list[VAR_0->cmd_list_length + 1].entry = ((void*)0);

    VAR_0->cmd_list_length++;
}
