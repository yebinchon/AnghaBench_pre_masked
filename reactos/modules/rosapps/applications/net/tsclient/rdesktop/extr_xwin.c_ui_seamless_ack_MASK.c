
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int outpos_serial; int height; int width; int yoffset; int xoffset; int wnd; scalar_t__ outstanding_position; int outpos_height; int outpos_width; int outpos_yoffset; int outpos_xoffset; struct TYPE_6__* next; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_5__ {int gc; int backstore; TYPE_2__* seamless_windows; } ;
struct TYPE_7__ {TYPE_1__ xwin; int display; } ;
typedef TYPE_3__ RDPCLIENT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_1(RDPCLIENT * VAR_1, unsigned int VAR_2)
{
 seamless_window *VAR_3;
 for (VAR_3 = VAR_1->xwin.seamless_windows; VAR_3; VAR_3 = VAR_3->next)
 {
  if (VAR_3->outstanding_position && (VAR_3->outpos_serial == VAR_2))
  {
   VAR_3->xoffset = VAR_3->outpos_xoffset;
   VAR_3->yoffset = VAR_3->outpos_yoffset;
   VAR_3->width = VAR_3->outpos_width;
   VAR_3->height = VAR_3->outpos_height;
   VAR_3->outstanding_position = VAR_0;




   FUNC_0(VAR_1->display, VAR_1->xwin.backstore,
      VAR_3->wnd, VAR_1->xwin.gc,
      VAR_3->xoffset, VAR_3->yoffset, VAR_3->width, VAR_3->height, 0, 0);

   break;
  }
 }
}
