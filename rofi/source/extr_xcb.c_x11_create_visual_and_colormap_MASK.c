
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int xcb_void_cookie_t ;
struct TYPE_16__ {int bits_per_rgb_value; scalar_t__ _class; scalar_t__ visual_id; } ;
typedef TYPE_1__ xcb_visualtype_t ;
struct TYPE_17__ {TYPE_1__* data; scalar_t__ rem; } ;
typedef TYPE_2__ xcb_visualtype_iterator_t ;
typedef int xcb_generic_error_t ;
struct TYPE_18__ {int depth; } ;
typedef TYPE_3__ xcb_depth_t ;
struct TYPE_19__ {TYPE_3__* data; scalar_t__ rem; } ;
typedef TYPE_4__ xcb_depth_iterator_t ;
struct TYPE_20__ {scalar_t__ root_visual; int default_colormap; int root; } ;
struct TYPE_15__ {TYPE_7__* screen; int connection; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_11__* VAR_6 ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_2__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int ) ;
 TYPE_4__ FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8 ( void )
{
    xcb_depth_t *VAR_7 = ((void*)0);
    xcb_depth_iterator_t VAR_8;
    for ( VAR_8 = FUNC_6 ( VAR_6->screen ); VAR_8.rem; FUNC_2 ( &VAR_8 ) ) {
        xcb_depth_t *VAR_9 = VAR_8.data;

        xcb_visualtype_iterator_t VAR_10;
        for ( VAR_10 = FUNC_3 ( VAR_9 ); VAR_10.rem; FUNC_7 ( &VAR_10 ) ) {
            xcb_visualtype_t *VAR_11 = VAR_10.data;
            if ( ( VAR_11->bits_per_rgb_value == 8 ) && ( VAR_9->depth == 32 ) && ( VAR_11->_class == VAR_1 ) ) {
                VAR_2 = VAR_9;
                VAR_5 = VAR_11;
            }
            if ( VAR_6->screen->root_visual == VAR_11->visual_id ) {
                VAR_7 = VAR_9;
                VAR_4 = VAR_11;
            }
        }
    }
    if ( VAR_5 != ((void*)0) ) {
        xcb_void_cookie_t VAR_12;
        xcb_generic_error_t *VAR_13;
        VAR_3 = FUNC_4 ( VAR_6->connection );
        VAR_12 = FUNC_1 ( VAR_6->connection, VAR_0, VAR_3, VAR_6->screen->root, VAR_5->visual_id );
        VAR_13 = FUNC_5 ( VAR_6->connection, VAR_12 );
        if ( VAR_13 ) {
            VAR_2 = ((void*)0);
            VAR_5 = ((void*)0);
            FUNC_0 ( VAR_13 );
        }
    }

    if ( VAR_5 == ((void*)0) ) {
        VAR_2 = VAR_7;
        VAR_5 = VAR_4;
        VAR_3 = VAR_6->screen->default_colormap;
    }
}
