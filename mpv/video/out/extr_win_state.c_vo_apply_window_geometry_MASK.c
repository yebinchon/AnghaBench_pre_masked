
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct vo_win_geometry {int monitor_par; TYPE_1__ win; } ;
struct vo {int monitor_par; scalar_t__ dheight; scalar_t__ dwidth; } ;



void FUNC_0(struct vo *VAR_0, const struct vo_win_geometry *VAR_1)
{
    VAR_0->dwidth = VAR_1->win.x1 - VAR_1->win.x0;
    VAR_0->dheight = VAR_1->win.y1 - VAR_1->win.y0;
    VAR_0->monitor_par = VAR_1->monitor_par;
}
