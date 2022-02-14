
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_5__ {int * display_name; scalar_t__ private_data; } ;
struct TYPE_4__ {int do_markup; int num_active_list; int active_list; int num_urgent_list; int urgent_list; int * prompt; int * message; } ;
typedef TYPE_1__ ScriptModePrivateData ;
typedef TYPE_2__ Mode ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*,int *,int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5 ( Mode *VAR_0, char *VAR_1, ssize_t VAR_2 )
{
    ScriptModePrivateData *VAR_3 = (ScriptModePrivateData *) VAR_0->private_data;
    ssize_t VAR_4 = 0;
    while ( VAR_4 <= VAR_2 && VAR_1[VAR_4] != '\x1f' ) {
        VAR_4++;
    }

    if ( VAR_4 < VAR_2 ) {
        VAR_1[VAR_4] = '\0';
        char *VAR_5 = VAR_1 + VAR_4 + 1;
        if ( FUNC_3 ( VAR_1, "message" ) == 0 ) {
            FUNC_0 ( VAR_3->message );
            VAR_3->message = FUNC_4 ( VAR_5 ) ? FUNC_1 ( VAR_5 ) : ((void*)0);
        }
        else if ( FUNC_3 ( VAR_1, "prompt" ) == 0 ) {
            FUNC_0 ( VAR_3->prompt );
            VAR_3->prompt = FUNC_1 ( VAR_5 );
            VAR_0->display_name = VAR_3->prompt;
        }
        else if ( FUNC_3 ( VAR_1, "markup-rows" ) == 0 ) {
            VAR_3->do_markup = ( FUNC_3 ( VAR_5, "true" ) == 0 );
        }
        else if ( FUNC_3 ( VAR_1, "urgent" ) == 0 ) {
            FUNC_2 ( VAR_5, &( VAR_3->urgent_list ), &( VAR_3->num_urgent_list ) );
        }
        else if ( FUNC_3 ( VAR_1, "active" ) == 0 ) {
            FUNC_2 ( VAR_5, &( VAR_3->active_list ), &( VAR_3->num_active_list ) );
        }
    }
}
