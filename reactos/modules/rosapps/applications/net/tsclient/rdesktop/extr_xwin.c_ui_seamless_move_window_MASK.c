
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int xoffset; int yoffset; int width; int height; int state; int wnd; scalar_t__ outstanding_position; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_7__ {int seamless_active; } ;
struct TYPE_9__ {int display; TYPE_1__ xwin; } ;
typedef TYPE_3__ RDPCLIENT ;




 int FUNC_0 (int ,int ,int,int,int,int) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,unsigned long) ;
 int FUNC_2 (char*,unsigned long) ;

void
FUNC_3(RDPCLIENT * VAR_0, unsigned long VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, unsigned long VAR_6)
{
 seamless_window *VAR_7;

 if (!VAR_0->xwin.seamless_active)
  return;

 VAR_7 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_7)
 {
  FUNC_2("ui_seamless_move_window: No information for window 0x%lx\n", VAR_1);
  return;
 }


 if (VAR_7->outstanding_position)
  return;

 if (!VAR_4 || !VAR_5)

  return;

 VAR_7->xoffset = VAR_2;
 VAR_7->yoffset = VAR_3;
 VAR_7->width = VAR_4;
 VAR_7->height = VAR_5;



 switch (VAR_7->state)
 {
  case 128:
  case 129:
   return;
 }


 FUNC_0(VAR_0->display, VAR_7->wnd, VAR_7->xoffset, VAR_7->yoffset, VAR_7->width, VAR_7->height);
}
