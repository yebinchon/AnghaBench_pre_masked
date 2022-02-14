
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int wnd; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_9__ {int seamless_active; } ;
struct TYPE_11__ {int display; TYPE_1__ xwin; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,unsigned long) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (char*,unsigned long) ;

void
FUNC_4(RDPCLIENT * VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 seamless_window *VAR_3;

 if (!VAR_0->xwin.seamless_active)
  return;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
 {
  FUNC_3("ui_seamless_destroy_window: No information for window 0x%lx\n", VAR_1);
  return;
 }

 FUNC_0(VAR_0->display, VAR_3->wnd);
 FUNC_2(VAR_0, VAR_3);
}
