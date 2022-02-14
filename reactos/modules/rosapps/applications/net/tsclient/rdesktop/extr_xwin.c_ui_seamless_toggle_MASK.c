
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int wnd; } ;
struct TYPE_7__ {int seamless_active; TYPE_5__* seamless_windows; scalar_t__ seamless_hidden; int seamless_started; } ;
struct TYPE_8__ {TYPE_1__ xwin; int wnd; int display; int seamless_rdp; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*) ;

void
FUNC_5(RDPCLIENT * VAR_0)
{
 if (!VAR_0->seamless_rdp)
  return;

 if (!VAR_0->xwin.seamless_started)
  return;

 if (VAR_0->xwin.seamless_hidden)
  return;

 if (VAR_0->xwin.seamless_active)
 {

  while (VAR_0->xwin.seamless_windows)
  {
   FUNC_0(VAR_0->display, VAR_0->xwin.seamless_windows->wnd);
   FUNC_4(VAR_0, VAR_0->xwin.seamless_windows);
  }
  FUNC_1(VAR_0->display, VAR_0->wnd);
 }
 else
 {

  FUNC_2(VAR_0->display, VAR_0->wnd);
  FUNC_3(VAR_0);
 }

 VAR_0->xwin.seamless_active = !VAR_0->xwin.seamless_active;
}
