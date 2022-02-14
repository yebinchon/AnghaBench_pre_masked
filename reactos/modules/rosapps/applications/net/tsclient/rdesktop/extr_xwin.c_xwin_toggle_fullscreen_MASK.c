
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gc; int current_cursor; int depth; scalar_t__ seamless_active; } ;
struct TYPE_8__ {int fullscreen; int display; int height; int width; TYPE_1__ xwin; int wnd; int ownbackstore; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int Pixmap ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(RDPCLIENT * VAR_0)
{
 Pixmap VAR_1 = 0;

 if (VAR_0->xwin.seamless_active)

  FUNC_6(VAR_0);

 if (!VAR_0->ownbackstore)
 {

  VAR_1 = FUNC_1(VAR_0->display, VAR_0->wnd, VAR_0->width, VAR_0->height, VAR_0->xwin.depth);
  FUNC_0(VAR_0->display, VAR_0->wnd, VAR_1, VAR_0->xwin.gc, 0, 0, VAR_0->width, VAR_0->height, 0, 0);
 }

 FUNC_5(VAR_0);
 VAR_0->fullscreen = !VAR_0->fullscreen;
 FUNC_4(VAR_0);

 FUNC_2(VAR_0->display, VAR_0->wnd, VAR_0->xwin.current_cursor);

 if (!VAR_0->ownbackstore)
 {
  FUNC_0(VAR_0->display, VAR_1, VAR_0->wnd, VAR_0->xwin.gc, 0, 0, VAR_0->width, VAR_0->height, 0, 0);
  FUNC_3(VAR_0->display, VAR_1);
 }
}
