
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cairo_surface_t ;
struct TYPE_4__ {TYPE_1__* screen; int connection; } ;
struct TYPE_3__ {int height_in_pixels; int width_in_pixels; } ;


 int * FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 () ;

cairo_surface_t *FUNC_2 ( void )
{
    return FUNC_0 ( VAR_1->connection,
                                      FUNC_1 (), VAR_0,
                                      VAR_1->screen->width_in_pixels, VAR_1->screen->height_in_pixels );
}
