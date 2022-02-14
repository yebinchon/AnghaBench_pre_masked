
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_3__ {int y; int x; int h; int w; } ;
struct TYPE_4__ {TYPE_1__ mon; scalar_t__ fake_bgrel; int * fake_bg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char const* const,char*) ;
 char* FUNC_13 (char const* const) ;
 int * FUNC_14 () ;
 int * FUNC_15 () ;

__attribute__((used)) static void FUNC_16 ( const char* const VAR_4 )
{
    if ( VAR_2.fake_bg == ((void*)0) ) {
        cairo_surface_t *VAR_5 = ((void*)0);




        FUNC_0 ( "Fake start" );
        if ( FUNC_12 ( VAR_4, "real" ) == 0 ) {
            return;
        }
        else if ( FUNC_12 ( VAR_4, "screenshot" ) == 0 ) {
            VAR_5 = FUNC_15 ();
        }
        else if ( FUNC_12 ( VAR_4, "background" ) == 0 ) {
            VAR_5 = FUNC_14 ();
        }
        else {
            char *VAR_6 = FUNC_13 ( VAR_4 );
            FUNC_10 ( "Opening %s to use as background.", VAR_6 );
            VAR_5 = FUNC_4 ( VAR_6 );
            VAR_2.fake_bgrel = VAR_3;
            FUNC_11 ( VAR_6 );
        }
        FUNC_0 ( "Get surface." );
        if ( VAR_5 != ((void*)0) ) {
            if ( FUNC_9 ( VAR_5 ) != VAR_1 ) {
                FUNC_10 ( "Failed to open surface fake background: %s",
                          FUNC_7 ( FUNC_9 ( VAR_5 ) ) );
                FUNC_8 ( VAR_5 );
                VAR_5 = ((void*)0);
            }
            else {
                VAR_2.fake_bg = FUNC_3 ( VAR_0, VAR_2.mon.w, VAR_2.mon.h );
                cairo_t *VAR_7 = FUNC_1 ( VAR_2.fake_bg );
                if ( VAR_2.fake_bgrel ) {
                    FUNC_6 ( VAR_7, VAR_5, 0, 0 );
                }
                else {
                    FUNC_6 ( VAR_7, VAR_5, -VAR_2.mon.x, -VAR_2.mon.y );
                }
                FUNC_5 ( VAR_7 );
                FUNC_2 ( VAR_7 );
                FUNC_8 ( VAR_5 );
            }
        }
        FUNC_0 ( "Fake transparency" );
    }
}
