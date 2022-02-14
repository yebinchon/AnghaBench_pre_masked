
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef void* xcb_window_t ;
typedef int xcb_void_cookie_t ;
struct TYPE_14__ {int error_code; } ;
typedef TYPE_2__ xcb_generic_error_t ;
typedef int xcb_atom_t ;
typedef int wm_class_name ;
typedef int uint32_t ;
typedef int pid_t ;
typedef int cairo_font_options_t ;
typedef int box ;
typedef int atoms ;
struct TYPE_20__ {int dpi; char const* fake_background; scalar_t__ fake_transparency; int fullscreen; int * menu_font; } ;
struct TYPE_19__ {int depth; } ;
struct TYPE_18__ {scalar_t__ mh; double h; } ;
struct TYPE_17__ {int visual_id; } ;
struct TYPE_15__ {int _NET_WM_STATE; int _NET_WM_STATE_ABOVE; int _NET_WM_STATE_FULLSCREEN; int _NET_WM_WINDOW_TYPE_NORMAL; int _NET_WM_WINDOW_TYPE; } ;
struct TYPE_16__ {int connection; TYPE_4__ ewmh; int * sncontext; TYPE_1__* screen; } ;
struct TYPE_13__ {double height_in_pixels; scalar_t__ height_in_millimeters; } ;
struct TYPE_12__ {int flags; void* main_window; scalar_t__ fullscreen; TYPE_7__ mon; int edit_draw; int edit_surf; void* edit_pixmap; void* gc; } ;
typedef int PangoLanguage ;
typedef int PangoFontMap ;
typedef int PangoFontDescription ;
typedef int PangoContext ;
typedef int PangoCairoFontMap ;
typedef int MenuFlags ;


 TYPE_11__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,void*,TYPE_6__*,int,int) ;
 TYPE_9__ VAR_25 ;
 TYPE_8__* VAR_26 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,double) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 () ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int *,char const*) ;
 int VAR_27 ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (int *,int *) ;
 int * FUNC_19 (int ) ;
 int * FUNC_20 () ;
 int FUNC_21 (int *,double) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *) ;
 int * FUNC_25 (char const*) ;
 int * FUNC_26 () ;
 scalar_t__ FUNC_27 (int ,char*,int ) ;
 char* FUNC_28 (int ,char*,int *) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (char const*) ;
 int FUNC_31 (int *,void*) ;
 int FUNC_32 (char*) ;
 int FUNC_33 (char const*,int *) ;
 TYPE_6__* VAR_28 ;
 int FUNC_34 (int ) ;
 int FUNC_35 (void*,int ,int *,int) ;
 int FUNC_36 (void*) ;
 TYPE_5__* VAR_29 ;
 int FUNC_37 (int ,void*,int ,int*) ;
 int FUNC_38 (int ,void*,void*,int ,int ) ;
 int FUNC_39 (int ,int ,void*,void*,int,int) ;
 int FUNC_40 (int ,int ,void*,int ,int ,int ,int,int,int ,int ,int ,int,int*) ;
 int FUNC_41 (TYPE_4__*,void*,int ) ;
 void* FUNC_42 (int ) ;
 int FUNC_43 (int ,void*,int,char const*) ;
 int FUNC_44 (int ,void*,int ,int,int ,char*) ;
 TYPE_2__* FUNC_45 (int ,int ) ;
 int FUNC_46 () ;

void FUNC_47 ( MenuFlags VAR_30 )
{
    uint32_t VAR_31 = VAR_8 | VAR_10 | VAR_9 | VAR_7 | VAR_12 | VAR_11;
    uint32_t VAR_32[] = {
        VAR_6, 0,
        VAR_23,
        VAR_5,
        VAR_17 | VAR_15 | VAR_16 |
        VAR_20 | VAR_21 | VAR_19 |
        VAR_22 | VAR_18 | VAR_14,
        VAR_27
    };

    xcb_window_t VAR_33 = FUNC_42 ( VAR_29->connection );
    xcb_void_cookie_t VAR_34 = FUNC_40 ( VAR_29->connection, VAR_26->depth, VAR_33, FUNC_46 ( ),
                                                               0, 0, 200, 100, 0, VAR_24,
                                                               VAR_28->visual_id, VAR_31, VAR_32 );
    xcb_generic_error_t *VAR_35;
    VAR_35 = FUNC_45 ( VAR_29->connection, VAR_34 );
    if ( VAR_35 ) {
        FUNC_10 ( "xcb_create_window() failed error=0x%x\n", VAR_35->error_code );
        FUNC_8 ( VAR_1 );
    }
    FUNC_0 ( "xcb create window" );
    VAR_0.gc = FUNC_42 ( VAR_29->connection );
    FUNC_38 ( VAR_29->connection, VAR_0.gc, VAR_33, 0, 0 );

    FUNC_0 ( "xcb create gc" );

    VAR_0.edit_pixmap = FUNC_42 ( VAR_29->connection );
    FUNC_39 ( VAR_29->connection, VAR_26->depth,
                        VAR_0.edit_pixmap, VAR_0.main_window, 200, 100 );

    VAR_0.edit_surf = FUNC_7 ( VAR_29->connection, VAR_0.edit_pixmap, VAR_28, 200, 100 );
    VAR_0.edit_draw = FUNC_3 ( VAR_0.edit_surf );

    FUNC_0 ( "create cairo surface" );

    cairo_font_options_t *VAR_36 = FUNC_4 ();

    FUNC_6 ( VAR_0.edit_surf, VAR_36 );

    PangoContext *VAR_37 = FUNC_19 ( VAR_0.edit_draw );

    FUNC_18 ( VAR_37, VAR_36 );
    FUNC_0 ( "pango cairo font setup" );

    VAR_0.main_window = VAR_33;
    VAR_0.flags = VAR_30;
    FUNC_17 ( &( VAR_0.mon ) );

    if ( VAR_25.dpi > 1 ) {
        PangoFontMap *VAR_38 = FUNC_20 ();
        FUNC_21 ( (PangoCairoFontMap *) VAR_38, (double) VAR_25.dpi );
    }
    else if ( VAR_25.dpi == 0 || VAR_25.dpi == 1 ) {

        double VAR_39 = 96;
        if ( VAR_0.mon.mh > 0 && VAR_25.dpi == 1 ) {
            VAR_39 = ( VAR_0.mon.h * 25.4 ) / (double) ( VAR_0.mon.mh );
        }
        else {
            VAR_39 = ( VAR_29->screen->height_in_pixels * 25.4 ) / (double) ( VAR_29->screen->height_in_millimeters );
        }

        FUNC_9 ( "Auto-detected DPI: %.2lf", VAR_39 );
        PangoFontMap *VAR_40 = FUNC_20 ();
        FUNC_21 ( (PangoCairoFontMap *) VAR_40, VAR_39 );
        VAR_25.dpi = VAR_39;
    }


    box *VAR_41 = FUNC_2 ( ((void*)0), "window", VAR_3 );
    const char *VAR_42 = FUNC_28 ( FUNC_1 ( VAR_41 ), "font", VAR_25.menu_font );
    if ( VAR_42 ) {
        PangoFontDescription *VAR_43 = FUNC_25 ( VAR_42 );
        if ( FUNC_16 ( VAR_43, VAR_42 ) ) {
            FUNC_22 ( VAR_37, VAR_43 );
        }
        FUNC_24 ( VAR_43 );
    }
    PangoLanguage *VAR_44 = FUNC_26 ();
    FUNC_23 ( VAR_37, VAR_44 );
    FUNC_0 ( "configure font" );


    FUNC_33 ( VAR_42, VAR_37 );

    FUNC_14 ( VAR_37 );
    FUNC_5 ( VAR_36 );

    FUNC_0 ( "textbox setup" );

    if ( ( ( VAR_30 & VAR_2 ) == 0 ) ) {
        FUNC_35 ( VAR_33, VAR_29->ewmh._NET_WM_STATE, &( VAR_29->ewmh._NET_WM_STATE_ABOVE ), 1 );
        uint32_t VAR_45[] = { 1 };
        FUNC_37 ( VAR_29->connection, VAR_33, VAR_13, VAR_45 );
    }
    else{
        FUNC_35 ( VAR_33, VAR_29->ewmh._NET_WM_WINDOW_TYPE, &( VAR_29->ewmh._NET_WM_WINDOW_TYPE_NORMAL ), 1 );
        FUNC_36 ( VAR_33 );
    }

    FUNC_0 ( "setup window attributes" );
    VAR_0.fullscreen = FUNC_27 ( FUNC_1 ( VAR_41 ), "fullscreen", VAR_25.fullscreen );
    if ( VAR_0.fullscreen ) {
        xcb_atom_t VAR_46[] = {
            VAR_29->ewmh._NET_WM_STATE_FULLSCREEN,
            VAR_29->ewmh._NET_WM_STATE_ABOVE
        };
        FUNC_35 ( VAR_33, VAR_29->ewmh._NET_WM_STATE, VAR_46, sizeof ( VAR_46 ) / sizeof ( xcb_atom_t ) );
    }

    FUNC_0 ( "setup window fullscreen" );

    FUNC_29 ( "rofi" );
    const char VAR_47[] = "rofi\0Rofi";
    FUNC_43 ( VAR_29->connection, VAR_33, sizeof ( VAR_47 ), VAR_47 );

    FUNC_0 ( "setup window name and class" );
    const char *VAR_48 = FUNC_28 ( FUNC_1 ( VAR_41 ), "transparency", ((void*)0) );
    if ( VAR_48 ) {
        FUNC_30 ( VAR_48 );
    }
    else if ( VAR_25.fake_transparency && VAR_25.fake_background ) {
        FUNC_30 ( VAR_25.fake_background );
    }
    if ( VAR_29->sncontext != ((void*)0) ) {
        FUNC_31 ( VAR_29->sncontext, VAR_0.main_window );
    }
    FUNC_0 ( "setup startup notification" );
    FUNC_34 ( FUNC_1 ( VAR_41 ) );
    FUNC_0 ( "done" );


    pid_t VAR_49 = FUNC_15 ();
    FUNC_41 ( &( VAR_29->ewmh ), VAR_0.main_window, VAR_49 );


    const char *VAR_50 = FUNC_12 ();
    char *VAR_51 = FUNC_13 ( VAR_50 );
    if ( VAR_51 != ((void*)0) ) {
        FUNC_44 ( VAR_29->connection,
                                          VAR_0.main_window,
                                          VAR_4, 8,
                                          FUNC_32 ( VAR_51 ), VAR_51 );
        FUNC_11 ( VAR_51 );
    }
}
