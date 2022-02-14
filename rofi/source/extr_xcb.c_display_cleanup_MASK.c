
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ screen_nbr; int * screen; int * connection; int * source; int ewmh; int * sndisplay; int * sncontext; int bindings_seat; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9 ( void )
{
    if ( VAR_0->connection == ((void*)0) ) {
        return;
    }

    FUNC_0 ( "Cleaning up XCB and XKB" );

    FUNC_2 ( VAR_0->bindings_seat );
    if ( VAR_0->sncontext != ((void*)0) ) {
        FUNC_4 ( VAR_0->sncontext );
        VAR_0->sncontext = ((void*)0);
    }
    if ( VAR_0->sndisplay != ((void*)0) ) {
        FUNC_3 ( VAR_0->sndisplay );
        VAR_0->sndisplay = ((void*)0);
    }
    FUNC_5 ();
    FUNC_7 ( &( VAR_0->ewmh ) );
    FUNC_8 ( VAR_0->connection );
    FUNC_6 ( VAR_0->connection );
    FUNC_1 ( VAR_0->source );
    VAR_0->source = ((void*)0);
    VAR_0->connection = ((void*)0);
    VAR_0->screen = ((void*)0);
    VAR_0->screen_nbr = 0;
}
