
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int box ;
struct TYPE_11__ {int flags; int main_window; } ;
struct TYPE_10__ {int * sncontext; int connection; } ;
struct TYPE_9__ {int * main_window; int height; int width; int list_view; int * text; int finalize; int menu_flags; int retv; } ;
typedef TYPE_1__ RofiViewState ;


 TYPE_8__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int *) ;
 int VAR_10 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *,int *,int) ;
 void* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ,char*,int,int ,char const*,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int) ;
 TYPE_2__* VAR_12 ;
 int FUNC_14 (int ,int ) ;

int FUNC_15 ( const char *VAR_13, int VAR_14 )
{
    RofiViewState *VAR_15 = FUNC_1 ();
    VAR_15->retv = VAR_1;
    VAR_15->menu_flags = VAR_2;
    VAR_15->finalize = VAR_11;

    VAR_15->main_window = FUNC_3 ( ((void*)0), "window", VAR_5 );
    box *VAR_16 = FUNC_3 ( FUNC_0 ( VAR_15->main_window ), "error-message", VAR_5 );
    FUNC_2 ( VAR_15->main_window, FUNC_0 ( VAR_16 ), VAR_9 );
    VAR_15->text = FUNC_10 ( FUNC_0 ( VAR_16 ), VAR_10, "textbox", ( VAR_6 | VAR_8 ) + ( ( VAR_14 ) ? VAR_7 : 0 ),
                                   VAR_4, ( VAR_13 != ((void*)0) ) ? VAR_13 : "", 0, 0 );
    FUNC_2 ( VAR_16, FUNC_0 ( VAR_15->text ), VAR_9 );


    if ( ( VAR_0.flags & VAR_3 ) == VAR_3 ) {
        FUNC_4 ( VAR_15->list_view );
    }
    FUNC_6 ( VAR_15 );

    FUNC_13 ( FUNC_0 ( VAR_15->main_window ), VAR_15->width, 100 );

    VAR_15->height = FUNC_11 ( FUNC_0 ( VAR_15->main_window ) );


    FUNC_5 ( VAR_15 );


    FUNC_8 ( VAR_15 );


    FUNC_14 ( VAR_12->connection, VAR_0.main_window );
    FUNC_12 ( FUNC_0 ( VAR_15->main_window ) );

    if ( VAR_12->sncontext != ((void*)0) ) {
        FUNC_9 ( VAR_12->sncontext );
    }


    FUNC_7 ( VAR_15 );
    return VAR_9;
}
