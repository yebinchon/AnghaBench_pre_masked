
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int cmd_list_length; size_t selected_line; int format; int * selected_list; TYPE_1__* cmd_list; } ;
struct TYPE_4__ {char const* entry; } ;
typedef TYPE_1__ DmenuScriptEntry ;
typedef TYPE_2__ DmenuModePrivateData ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,char const*,unsigned int,char const*) ;

__attribute__((used)) static void FUNC_2 ( DmenuModePrivateData *VAR_3, const char *VAR_4 )
{
    DmenuScriptEntry *VAR_5 = VAR_3->cmd_list;
    int VAR_6 = VAR_0;
    if ( VAR_3->selected_list != ((void*)0) ) {
        for ( unsigned int VAR_7 = 0; VAR_7 < VAR_3->cmd_list_length; VAR_7++ ) {
            if ( FUNC_0 ( VAR_3->selected_list, VAR_7 ) ) {
                VAR_6 = VAR_1;
                FUNC_1 ( VAR_3->format, VAR_5[VAR_7].entry , VAR_7, VAR_4 );
            }
        }
    }
    if ( !VAR_6 ) {
        const char *VAR_8 = VAR_4;
        if ( VAR_3->selected_line != VAR_2 ) {
            VAR_8 = VAR_5[VAR_3->selected_line].entry ;
        }
        FUNC_1 ( VAR_3->format, VAR_8, VAR_3->selected_line, VAR_4 );
    }
}
