
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int monitor_id; char* name; int x; int y; int w; int h; scalar_t__ mw; scalar_t__ mh; scalar_t__ primary; struct TYPE_3__* next; } ;
typedef TYPE_1__ workarea ;
struct TYPE_4__ {TYPE_1__* monitors; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_3 ( void )
{
    int VAR_4 = FUNC_1 ( FUNC_0 ( VAR_2 ) );
    FUNC_2 ( "Monitor layout:\n" );
    for ( workarea *VAR_5 = VAR_3->monitors; VAR_5; VAR_5 = VAR_5->next ) {
        FUNC_2 ( "%s              ID%s: %d", ( VAR_4 ) ? VAR_0 : "", VAR_4 ? VAR_1 : "", VAR_5->monitor_id );
        if ( VAR_5->primary ) {
            FUNC_2 ( " (primary)" );
        }
        FUNC_2 ( "\n" );
        FUNC_2 ( "%s            name%s: %s\n", ( VAR_4 ) ? VAR_0 : "", VAR_4 ? VAR_1 : "", VAR_5->name );
        FUNC_2 ( "%s        position%s: %d,%d\n", ( VAR_4 ) ? VAR_0 : "", VAR_4 ? VAR_1 : "", VAR_5->x, VAR_5->y );
        FUNC_2 ( "%s            size%s: %d,%d\n", ( VAR_4 ) ? VAR_0 : "", VAR_4 ? VAR_1 : "", VAR_5->w, VAR_5->h );
        if ( VAR_5->mw > 0 && VAR_5->mh > 0 ) {
            FUNC_2 ( "%s            size%s: %dmm,%dmm  dpi: %.0f,%.0f\n",
                     ( VAR_4 ) ? VAR_0 : "",
                     VAR_4 ? VAR_1 : "",
                     VAR_5->mw,
                     VAR_5->mh,
                     VAR_5->w * 25.4 / (double) VAR_5->mw,
                     VAR_5->h * 25.4 / (double) VAR_5->mh
                     );
        }
        FUNC_2 ( "\n" );
    }
}
