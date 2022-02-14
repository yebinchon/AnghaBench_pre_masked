
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int wnd; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_8__ {int seamless_active; } ;
struct TYPE_10__ {int display; TYPE_1__ xwin; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (TYPE_3__*,int ,char const*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,unsigned long) ;
 int FUNC_3 (char*,unsigned long) ;

void
FUNC_4(RDPCLIENT * VAR_0, unsigned long VAR_1, const char *VAR_2, unsigned long VAR_3)
{
 seamless_window *VAR_4;

 if (!VAR_0->xwin.seamless_active)
  return;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_4)
 {
  FUNC_3("ui_seamless_settitle: No information for window 0x%lx\n", VAR_1);
  return;
 }


 FUNC_0(VAR_0->display, VAR_4->wnd, VAR_2);
 FUNC_1(VAR_0, VAR_4->wnd, VAR_2);
}
