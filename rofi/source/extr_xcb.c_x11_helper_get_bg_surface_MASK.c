
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xcb_pixmap_t ;
typedef int cairo_surface_t ;
struct TYPE_4__ {int height_in_pixels; int width_in_pixels; } ;
struct TYPE_3__ {TYPE_2__* screen; int connection; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

cairo_surface_t * FUNC_2 ( void )
{
    xcb_pixmap_t VAR_5 = FUNC_1 ( VAR_4->connection, VAR_4->screen, VAR_2[VAR_0] );
    if ( VAR_5 == VAR_1 ) {
        return ((void*)0);
    }
    return FUNC_0 ( VAR_4->connection, VAR_5, VAR_3,
                                      VAR_4->screen->width_in_pixels, VAR_4->screen->height_in_pixels );
}
