
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cursor_serial; scalar_t__ yhot; scalar_t__ xhot; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ xcb_xfixes_get_cursor_image_reply_t ;
struct TYPE_8__ {scalar_t__ last_serial; scalar_t__ y; scalar_t__ y_render; scalar_t__ x; scalar_t__ x_render; scalar_t__ y_org; scalar_t__ x_org; int tex; } ;
typedef TYPE_2__ xcb_xcursor_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

void FUNC_1(xcb_xcursor_t *VAR_0,
   xcb_xfixes_get_cursor_image_reply_t *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return;

 if (!VAR_0->tex || VAR_0->last_serial != VAR_1->cursor_serial)
  FUNC_0(VAR_0, VAR_1);

 VAR_0->x = VAR_1->x - VAR_0->x_org;
 VAR_0->y = VAR_1->y - VAR_0->y_org;
 VAR_0->x_render = VAR_0->x - VAR_1->xhot;
 VAR_0->y_render = VAR_0->y - VAR_1->yhot;
}
