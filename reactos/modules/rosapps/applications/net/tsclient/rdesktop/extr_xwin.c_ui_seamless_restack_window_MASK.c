
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int wnd; } ;
typedef TYPE_2__ seamless_window ;
typedef int Window ;
struct TYPE_9__ {int seamless_active; } ;
struct TYPE_11__ {int display; TYPE_1__ xwin; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,unsigned long) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,unsigned long) ;
 int FUNC_4 (char*,unsigned long) ;

void
FUNC_5(RDPCLIENT * VAR_0, unsigned long VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 seamless_window *VAR_4;

 if (!VAR_0->xwin.seamless_active)
  return;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_4)
 {
  FUNC_4("ui_seamless_restack_window: No information for window 0x%lx\n", VAR_1);
  return;
 }

 if (VAR_2)
 {
  seamless_window *VAR_5;
  Window VAR_6[2];

  VAR_5 = FUNC_2(VAR_0, VAR_2);
  if (!VAR_5)
  {
   FUNC_4("ui_seamless_restack_window: No information for window 0x%lx\n",
    VAR_2);
   return;
  }

  VAR_6[1] = VAR_5->wnd;
  VAR_6[0] = VAR_4->wnd;

  FUNC_1(VAR_0->display, VAR_6, 2);
 }
 else
 {
  FUNC_0(VAR_0->display, VAR_4->wnd);
 }

 FUNC_3(VAR_0, VAR_4, VAR_2);
}
