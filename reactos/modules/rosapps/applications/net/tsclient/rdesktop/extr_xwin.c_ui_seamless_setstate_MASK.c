
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {unsigned int state; int wnd; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_14__ {int initial_state; int flags; } ;
typedef TYPE_3__ XWMHints ;
struct TYPE_12__ {int seamless_active; } ;
struct TYPE_15__ {int display; TYPE_1__ xwin; } ;
typedef TYPE_4__ RDPCLIENT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,int ,unsigned int) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,unsigned long) ;
 int FUNC_8 (char*,unsigned int) ;

void
FUNC_9(RDPCLIENT * VAR_3, unsigned long VAR_4, unsigned int VAR_5, unsigned long VAR_6)
{
 seamless_window *VAR_7;

 if (!VAR_3->xwin.seamless_active)
  return;

 VAR_7 = FUNC_7(VAR_3, VAR_4);
 if (!VAR_7)
 {
  FUNC_8("ui_seamless_setstate: No information for window 0x%lx\n", VAR_4);
  return;
 }

 switch (VAR_5)
 {
  case 128:
  case 130:
   FUNC_6(VAR_3, VAR_7->wnd, VAR_5);
   FUNC_4(VAR_3->display, VAR_7->wnd);
   break;
  case 129:





   if (VAR_7->state == VAR_1)
   {
    XWMHints *VAR_8;
    VAR_8 = FUNC_2(VAR_3->display, VAR_7->wnd);
    if (VAR_8)
    {
     VAR_8->flags |= VAR_2;
     VAR_8->initial_state = VAR_0;
     FUNC_5(VAR_3->display, VAR_7->wnd, VAR_8);
     FUNC_1(VAR_8);
    }
    FUNC_4(VAR_3->display, VAR_7->wnd);
   }
   else
    FUNC_3(VAR_3->display, VAR_7->wnd, FUNC_0(VAR_3->display));
   break;
  default:
   FUNC_8("SeamlessRDP: Invalid state %d\n", VAR_5);
   break;
 }

 VAR_7->state = VAR_5;
}
