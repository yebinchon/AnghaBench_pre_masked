
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_11__ {int y; int x; int x_root; int y_root; int button; int time; } ;
struct TYPE_10__ {scalar_t__ window; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_3__ xbutton; TYPE_2__ xmotion; } ;
typedef TYPE_4__ XEvent ;
struct TYPE_9__ {int move_x_offset; int move_y_offset; scalar_t__ moving_wnd; int using_full_workarea; } ;
struct TYPE_13__ {int win_button_size; int width; scalar_t__ wnd; TYPE_1__ xwin; scalar_t__ hide_decorations; int fullscreen; int display; int last_gesturetime; } ;
typedef TYPE_5__ RDPCLIENT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int ,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(RDPCLIENT * VAR_6, XEvent VAR_7, BOOL VAR_8)
{
 uint16 VAR_9, VAR_10 = 0;
 VAR_6->last_gesturetime = VAR_7.xbutton.time;
 VAR_9 = FUNC_4(VAR_7.xbutton.button);
 if (VAR_9 == 0)
  return;

 if (VAR_8)
  VAR_10 = VAR_3;


 if (VAR_6->xwin.moving_wnd && (VAR_7.type == VAR_1))
  VAR_6->xwin.moving_wnd = VAR_2;


 if (VAR_7.xbutton.y < VAR_6->win_button_size)
 {

  if (VAR_7.xbutton.x >= VAR_6->width - VAR_6->win_button_size)
  {

   ;
  }
  else if (VAR_7.xbutton.x >= VAR_6->width - VAR_6->win_button_size * 2)
  {




   if (VAR_7.type == VAR_0)
    return;
  }
  else if (VAR_7.xbutton.x >= VAR_6->width - VAR_6->win_button_size * 3)
  {

   if (VAR_7.type == VAR_1)
   {


    FUNC_2(VAR_6, FUNC_3(((void*)0)), VAR_4, VAR_9, 1, 1);
    FUNC_1(VAR_6->display, VAR_6->wnd, FUNC_0(VAR_6->display));
    return;
   }
  }
  else if (VAR_7.xbutton.x <= VAR_6->win_button_size)
  {

   if (VAR_7.type == VAR_0)
    return;
  }
  else
  {

   if (VAR_7.type == VAR_0)
   {
    if (!VAR_6->fullscreen && VAR_6->hide_decorations && !VAR_6->xwin.using_full_workarea)
    {
     VAR_6->xwin.moving_wnd = VAR_5;
     VAR_6->xwin.move_x_offset = VAR_7.xbutton.x;
     VAR_6->xwin.move_y_offset = VAR_7.xbutton.y;
    }
    return;
   }
  }
 }

 if (VAR_7.xmotion.window == VAR_6->wnd)
 {
  FUNC_2(VAR_6, FUNC_3(((void*)0)), VAR_4,
          VAR_10 | VAR_9, VAR_7.xbutton.x, VAR_7.xbutton.y);
 }
 else
 {

  FUNC_2(VAR_6, FUNC_3(((void*)0)), VAR_4,
          VAR_10 | VAR_9, VAR_7.xbutton.x_root, VAR_7.xbutton.y_root);
 }
}
