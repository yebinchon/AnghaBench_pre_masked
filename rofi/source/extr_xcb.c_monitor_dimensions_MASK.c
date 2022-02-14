
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int h; int w; int y; int x; struct TYPE_7__* next; } ;
typedef TYPE_2__ workarea ;
struct TYPE_8__ {TYPE_2__* monitors; TYPE_1__* screen; } ;
struct TYPE_6__ {int height_in_pixels; int width_in_pixels; } ;


 scalar_t__ FUNC_0 (int,int,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_2 ( int VAR_1, int VAR_2, workarea *VAR_3 )
{
    FUNC_1 ( VAR_3, 0, sizeof ( workarea ) );
    VAR_3->w = VAR_0->screen->width_in_pixels;
    VAR_3->h = VAR_0->screen->height_in_pixels;

    for ( workarea *VAR_4 = VAR_0->monitors; VAR_4; VAR_4 = VAR_4->next ) {
        if ( FUNC_0 ( VAR_1, VAR_2, VAR_4->x, VAR_4->y, VAR_4->w, VAR_4->h ) ) {
            *VAR_3 = *VAR_4;
            break;
        }
    }
}
