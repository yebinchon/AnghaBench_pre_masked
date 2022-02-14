
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ property; int requestor; } ;
typedef TYPE_2__ xcb_selection_notify_event_t ;
typedef char gchar ;
struct TYPE_5__ {scalar_t__ UTF8_STRING; } ;
struct TYPE_7__ {TYPE_1__ ewmh; } ;
typedef int RofiViewState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 unsigned int FUNC_3 (char*) ;
 char* FUNC_4 (int ,scalar_t__) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_5 ( RofiViewState *VAR_2, xcb_selection_notify_event_t *VAR_3 )
{
    if ( VAR_3->property == VAR_0 ) {
        FUNC_1 ( "Failed to convert selection" );
    }
    else if ( VAR_3->property == VAR_1->ewmh.UTF8_STRING ) {
        gchar *VAR_4 = FUNC_4 ( VAR_3->requestor, VAR_1->ewmh.UTF8_STRING );
        if ( VAR_4 != ((void*)0) && VAR_4[0] != '\0' ) {
            unsigned int VAR_5 = FUNC_3 ( VAR_4 );

            for ( unsigned int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++ ) {
                if ( VAR_4[VAR_6] == '\n' ) {
                    VAR_4[VAR_6] = '\0';
                }
            }
            FUNC_2 ( VAR_2, VAR_4 );
        }
        FUNC_0 ( VAR_4 );
    }
    else {
        FUNC_1 ( "Failed" );
    }
}
