
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; int max_height; int min_height; int max_width; int min_width; } ;
typedef TYPE_2__ XSizeHints ;
struct TYPE_8__ {int backstore; int gc; int screen; int depth; } ;
struct TYPE_10__ {TYPE_1__ xwin; int display; int height; int width; int wnd; scalar_t__ embed_wnd; scalar_t__ fullscreen; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef int Pixmap ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,TYPE_2__*) ;

void
FUNC_10(RDPCLIENT * VAR_2)
{
 XSizeHints *VAR_3;
 Pixmap VAR_4;

 VAR_3 = FUNC_1();
 if (VAR_3)
 {
  VAR_3->flags = VAR_1 | VAR_0;
  VAR_3->min_width = VAR_3->max_width = VAR_2->width;
  VAR_3->min_height = VAR_3->max_height = VAR_2->height;
  FUNC_9(VAR_2->display, VAR_2->wnd, VAR_3);
  FUNC_5(VAR_3);
 }

 if (!(VAR_2->fullscreen || VAR_2->embed_wnd))
 {
  FUNC_7(VAR_2->display, VAR_2->wnd, VAR_2->width, VAR_2->height);
 }


 if (VAR_2->xwin.backstore != 0)
 {
  VAR_4 = FUNC_3(VAR_2->display, VAR_2->wnd, VAR_2->width, VAR_2->height, VAR_2->xwin.depth);
  FUNC_8(VAR_2->display, VAR_2->xwin.gc, FUNC_0(VAR_2->xwin.screen));
  FUNC_4(VAR_2->display, VAR_4, VAR_2->xwin.gc, 0, 0, VAR_2->width, VAR_2->height);
  FUNC_2(VAR_2->display, VAR_2->xwin.backstore, VAR_4, VAR_2->xwin.gc, 0, 0, VAR_2->width, VAR_2->height, 0, 0);
  FUNC_6(VAR_2->display, VAR_2->xwin.backstore);
  VAR_2->xwin.backstore = VAR_4;
 }
}
