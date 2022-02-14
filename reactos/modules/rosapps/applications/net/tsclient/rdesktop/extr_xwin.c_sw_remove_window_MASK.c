
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ refcnt; struct TYPE_8__* next; struct TYPE_8__* position_timer; struct TYPE_8__* group; int wnd; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_7__ {TYPE_2__* seamless_windows; } ;
struct TYPE_9__ {int display; TYPE_1__ xwin; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(RDPCLIENT * VAR_0, seamless_window * VAR_1)
{
 seamless_window *VAR_2, **VAR_3 = &VAR_0->xwin.seamless_windows;
 for (VAR_2 = VAR_0->xwin.seamless_windows; VAR_2; VAR_2 = VAR_2->next)
 {
  if (VAR_2 == VAR_1)
  {
   *VAR_3 = VAR_2->next;
   VAR_2->group->refcnt--;
   if (VAR_2->group->refcnt == 0)
   {
    FUNC_0(VAR_0->display, VAR_2->group->wnd);
    FUNC_1(VAR_2->group);
   }
   FUNC_1(VAR_2->position_timer);
   FUNC_1(VAR_2);
   return;
  }
  VAR_3 = &VAR_2->next;
 }
 return;
}
