
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


struct TYPE_22__ {int * sncontext; int connection; } ;
struct TYPE_21__ {scalar_t__ data; } ;
struct TYPE_20__ {int* distance; void (* finalize ) (TYPE_1__*) ;int main_window; void* quit; int height; int list_view; int width; int num_lines; scalar_t__ line_map; scalar_t__ text; int * sw; void* mouse_seen; int refilter; void* skip_absorb; int retv; int selected_line; int menu_flags; } ;
struct TYPE_19__ {int flags; int main_window; } ;
typedef TYPE_1__ RofiViewState ;
typedef int Mode ;
typedef int MenuFlags ;
typedef TYPE_2__ GList ;


 TYPE_18__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,int (*) (char*)) ;
 TYPE_2__* FUNC_7 (TYPE_2__ const*) ;
 scalar_t__ FUNC_8 (int ,int) ;
 char* FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (int ,char*,char*) ;
 int FUNC_14 (TYPE_1__*,int ,char const*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__,char const*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int ,int) ;
 TYPE_3__* VAR_7 ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,int ) ;

RofiViewState *FUNC_29 ( Mode *VAR_8,
                                  const char *VAR_9,
                                  MenuFlags VAR_10,
                                  void ( *VAR_11 )( RofiViewState * ) )
{
    FUNC_0 ();
    RofiViewState *VAR_12 = FUNC_3 ();
    VAR_12->menu_flags = VAR_10;
    VAR_12->sw = VAR_8;
    VAR_12->selected_line = VAR_6;
    VAR_12->retv = VAR_2;
    VAR_12->distance = ((void*)0);
    VAR_12->quit = VAR_1;
    VAR_12->skip_absorb = VAR_1;

    VAR_12->refilter = VAR_5;
    VAR_12->finalize = VAR_11;
    VAR_12->mouse_seen = VAR_1;


    VAR_12->num_lines = FUNC_12 ( VAR_8 );

    if ( VAR_12->sw ) {
        char * VAR_13 = FUNC_9 ( "rofi - %s", FUNC_11 (VAR_12->sw ) );
        FUNC_19 ( VAR_13 );
        FUNC_5 ( VAR_13 );
    } else {
        FUNC_19 ( "rofi" );
    }
    FUNC_1 ( "Startup notification" );


    FUNC_1 ( "Get active monitor" );

    VAR_12->main_window = FUNC_4 ( ((void*)0), "window", VAR_4 );

    GList *VAR_14 = FUNC_13 ( FUNC_2 ( VAR_12->main_window ), "children", "mainbox" );
    for ( const GList *VAR_15 = VAR_14; VAR_15 != ((void*)0); VAR_15 = FUNC_7 ( VAR_15 ) ) {
        FUNC_14 ( VAR_12, FUNC_2 ( VAR_12->main_window ), (const char *) VAR_15->data );
    }
    FUNC_6 ( VAR_14, FUNC_5 );

    if ( VAR_12->text && VAR_9 ) {
        FUNC_24 ( VAR_12->text, VAR_9 );
        FUNC_23 ( VAR_12->text );
    }



    VAR_12->line_map = FUNC_8 ( VAR_12->num_lines, sizeof ( unsigned int ) );
    VAR_12->distance = (int *) FUNC_8 ( VAR_12->num_lines, sizeof ( int ) );

    FUNC_17 ( VAR_12 );

    FUNC_26 ( FUNC_2 ( VAR_12->main_window ), VAR_12->width, 100 );

    if ( ( VAR_0.flags & VAR_3 ) == VAR_3 ) {
        FUNC_10 ( VAR_12->list_view );
    }

    VAR_12->height = FUNC_15 ( VAR_12 );

    FUNC_16 ( VAR_12 );
    FUNC_21 ( VAR_12 );

    VAR_12->quit = VAR_1;
    FUNC_18 ( VAR_12 );
    FUNC_20 ( VAR_12, VAR_5 );
    FUNC_28 ( VAR_7->connection, VAR_0.main_window );
    FUNC_25 ( FUNC_2 ( VAR_12->main_window ) );
    FUNC_27 ( VAR_7->connection );
    if ( VAR_7->sncontext != ((void*)0) ) {
        FUNC_22 ( VAR_7->sncontext );
    }
    return VAR_12;
}
