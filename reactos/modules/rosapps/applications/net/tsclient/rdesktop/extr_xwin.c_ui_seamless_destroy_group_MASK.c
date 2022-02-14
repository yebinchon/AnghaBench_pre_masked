
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int wnd; TYPE_2__* group; struct TYPE_10__* next; } ;
typedef TYPE_3__ seamless_window ;
struct TYPE_8__ {TYPE_3__* seamless_windows; int seamless_active; } ;
struct TYPE_11__ {int display; TYPE_1__ xwin; } ;
struct TYPE_9__ {unsigned long id; } ;
typedef TYPE_4__ RDPCLIENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;

void
FUNC_2(RDPCLIENT * VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 seamless_window *VAR_3, *VAR_4;

 if (!VAR_0->xwin.seamless_active)
  return;

 for (VAR_3 = VAR_0->xwin.seamless_windows; VAR_3; VAR_3 = VAR_4)
 {
  VAR_4 = VAR_3->next;

  if (VAR_3->group->id == VAR_1)
  {
   FUNC_0(VAR_0->display, VAR_3->wnd);
   FUNC_1(VAR_0, VAR_3);
  }
 }
}
