
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xrandr_display {int rc; } ;
struct TYPE_2__ {int x0; int x1; int y0; int y1; } ;
struct vo_x11_state {int current_icc_screen; int num_displays; struct xrandr_display* displays; TYPE_1__ winrc; } ;
struct vo {struct vo_x11_state* x11; } ;


 scalar_t__ FUNC_0 (int *,int,int) ;

__attribute__((used)) static int FUNC_1(struct vo *VAR_0)
{
    struct vo_x11_state *VAR_1 = VAR_0->x11;
    int VAR_2 = VAR_1->winrc.x0 + (VAR_1->winrc.x1 - VAR_1->winrc.x0)/2,
    VAR_3 = VAR_1->winrc.y0 + (VAR_1->winrc.y1 - VAR_1->winrc.y0)/2;
    int VAR_4 = VAR_1->current_icc_screen;
    for (int VAR_5 = 0; VAR_5 < VAR_1->num_displays; VAR_5++) {
        struct xrandr_display *VAR_6 = &VAR_1->displays[VAR_5];
        if (FUNC_0(&VAR_6->rc, VAR_2, VAR_3)) {
            VAR_4 = VAR_5;
            break;
        }
    }
    return VAR_4;
}
