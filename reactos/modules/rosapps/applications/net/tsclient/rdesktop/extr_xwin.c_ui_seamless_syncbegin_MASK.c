
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int wnd; } ;
struct TYPE_6__ {TYPE_5__* seamless_windows; int seamless_active; } ;
struct TYPE_7__ {TYPE_1__ xwin; int display; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*) ;

void
FUNC_2(RDPCLIENT * VAR_0, unsigned long VAR_1)
{
 if (!VAR_0->xwin.seamless_active)
  return;


 while (VAR_0->xwin.seamless_windows)
 {
  FUNC_0(VAR_0->display, VAR_0->xwin.seamless_windows->wnd);
  FUNC_1(VAR_0, VAR_0->xwin.seamless_windows);
 }
}
