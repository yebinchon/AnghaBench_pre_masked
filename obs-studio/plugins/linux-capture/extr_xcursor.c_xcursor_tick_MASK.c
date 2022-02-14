
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ last_serial; scalar_t__ y_org; scalar_t__ render_y; scalar_t__ x_org; scalar_t__ render_x; void* y; void* x; int tex; int dpy; } ;
typedef TYPE_1__ xcursor_t ;
typedef void* int_fast32_t ;
struct TYPE_9__ {scalar_t__ cursor_serial; scalar_t__ yhot; scalar_t__ y; scalar_t__ xhot; scalar_t__ x; } ;
typedef TYPE_2__ XFixesCursorImage ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;

void FUNC_3(xcursor_t *VAR_0)
{
 XFixesCursorImage *VAR_1 = FUNC_0(VAR_0->dpy);
 if (!VAR_1)
  return;

 if (!VAR_0->tex || VAR_0->last_serial != VAR_1->cursor_serial)
  FUNC_2(VAR_0, VAR_1);

 VAR_0->x = (int_fast32_t)VAR_1->x - (int_fast32_t)VAR_0->x_org;
 VAR_0->y = (int_fast32_t)VAR_1->y - (int_fast32_t)VAR_0->y_org;
 VAR_0->render_x = VAR_1->x - VAR_1->xhot - VAR_0->x_org;
 VAR_0->render_y = VAR_1->y - VAR_1->yhot - VAR_0->y_org;

 FUNC_1(VAR_1);
}
