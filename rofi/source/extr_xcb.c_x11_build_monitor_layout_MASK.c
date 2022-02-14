
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


struct TYPE_23__ {scalar_t__ major_version; scalar_t__ minor_version; scalar_t__ output; } ;
typedef TYPE_2__ xcb_randr_query_version_reply_t ;
typedef int xcb_randr_query_version_cookie_t ;
typedef scalar_t__ xcb_randr_output_t ;
struct TYPE_24__ {scalar_t__ rem; int data; } ;
typedef TYPE_3__ xcb_randr_monitor_info_iterator_t ;
typedef TYPE_2__ xcb_randr_get_screen_resources_current_reply_t ;
typedef int xcb_randr_get_screen_resources_current_cookie_t ;
typedef TYPE_2__ xcb_randr_get_output_primary_reply_t ;
typedef int xcb_randr_get_output_primary_cookie_t ;
typedef TYPE_2__ xcb_randr_get_monitors_reply_t ;
typedef int xcb_randr_get_monitors_cookie_t ;
struct TYPE_25__ {int monitor_id; struct TYPE_25__* next; int primary; } ;
typedef TYPE_7__ workarea ;
struct TYPE_22__ {int root; } ;
struct TYPE_21__ {TYPE_7__* monitors; int connection; TYPE_1__* screen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 TYPE_7__* FUNC_3 (scalar_t__) ;
 TYPE_7__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*) ;
 TYPE_17__* VAR_5 ;
 int FUNC_6 (int ,int ,int) ;
 TYPE_3__ FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ) ;
 TYPE_2__* FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 TYPE_2__* FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_17 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_18 ()
{
    if ( VAR_5->monitors ) {
        return;
    }

    if ( !FUNC_5 ( "RANDR" ) ) {

        if ( FUNC_5 ( "XINERAMA" ) ) {
            FUNC_1 ( "Query XINERAMA for monitor layout." );
            FUNC_2 ();
            return;
        }
        FUNC_1 ( "No RANDR or Xinerama available for getting monitor layout." );
        return;
    }
    FUNC_1 ( "Query RANDR for monitor layout." );

    FUNC_1 ( "Randr XCB api version: %d.%d.", VAR_3, VAR_4 );


    xcb_randr_query_version_cookie_t VAR_6 = FUNC_16 ( VAR_5->connection,
                                                                          VAR_0, VAR_1 );
    xcb_randr_query_version_reply_t *VAR_7 = FUNC_17 ( VAR_5->connection, VAR_6, ((void*)0) );
    if ( VAR_7 ) {
        FUNC_1 ( "Found randr version: %d.%d", VAR_7->major_version, VAR_7->minor_version );

        if ( ( ( VAR_7->major_version == VAR_0 ) && ( VAR_7->minor_version >= VAR_1 ) ) ||
             ( VAR_7->major_version > VAR_0 ) ) {
            xcb_randr_get_monitors_cookie_t VAR_8 = FUNC_6 ( VAR_5->connection, VAR_5->screen->root, 1 );
            xcb_randr_get_monitors_reply_t *VAR_9 = FUNC_8 ( VAR_5->connection, VAR_8, ((void*)0) );
            if ( VAR_9 ) {
                xcb_randr_monitor_info_iterator_t VAR_10 = FUNC_7 ( VAR_9 );
                while ( VAR_10.rem > 0 ) {
                    workarea *VAR_11 = FUNC_4 ( VAR_10.data );
                    if ( VAR_11 ) {
                        VAR_11->next = VAR_5->monitors;
                        VAR_5->monitors = VAR_11;
                    }
                    FUNC_15 ( &VAR_10 );
                }
                FUNC_0 ( VAR_9 );
            }
        }
        FUNC_0 ( VAR_7 );
    }



    if ( VAR_5->monitors == ((void*)0) ) {
        xcb_randr_get_screen_resources_current_reply_t *VAR_12;
        xcb_randr_get_screen_resources_current_cookie_t VAR_13;
        VAR_13 = FUNC_11 ( VAR_5->connection, VAR_5->screen->root );
        VAR_12 = FUNC_14 ( VAR_5->connection, VAR_13, ((void*)0) );
        if ( !VAR_12 ) {
            return;
        }
        int VAR_14 = FUNC_13 ( VAR_12 );
        xcb_randr_output_t *VAR_15 = FUNC_12 ( VAR_12 );


        xcb_randr_get_output_primary_cookie_t VAR_16 = FUNC_9 ( VAR_5->connection, VAR_5->screen->root );
        xcb_randr_get_output_primary_reply_t *VAR_17 = FUNC_10 ( VAR_5->connection, VAR_16, ((void*)0) );

        for ( int VAR_18 = VAR_14 - 1; VAR_18 >= 0; VAR_18-- ) {
            workarea *VAR_19 = FUNC_3 ( VAR_15[VAR_18] );
            if ( VAR_19 ) {
                VAR_19->next = VAR_5->monitors;
                VAR_5->monitors = VAR_19;
                if ( VAR_17 && VAR_17->output == VAR_15[VAR_18] ) {
                    VAR_19->primary = VAR_2;
                }
            }
        }

        if ( VAR_17 ) {
            FUNC_0 ( VAR_17 );
        }
        FUNC_0 ( VAR_12 );
    }


    int VAR_20 = 0;
    for ( workarea *VAR_21 = VAR_5->monitors; VAR_21; VAR_21 = VAR_21->next ) {
        VAR_21->monitor_id = VAR_20++;
    }
}
