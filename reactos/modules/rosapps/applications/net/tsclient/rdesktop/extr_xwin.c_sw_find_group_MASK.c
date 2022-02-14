
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* group; struct TYPE_9__* next; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_10__ {unsigned long id; scalar_t__ refcnt; int wnd; } ;
typedef TYPE_3__ seamless_group ;
typedef int XSetWindowAttributes ;
struct TYPE_8__ {int screen; TYPE_2__* seamless_windows; } ;
struct TYPE_11__ {TYPE_1__ xwin; int display; } ;
typedef TYPE_4__ RDPCLIENT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int,int,int,int ,int ,int ,int ,int ,int *) ;
 TYPE_3__* FUNC_2 (int) ;

__attribute__((used)) static seamless_group *
FUNC_3(RDPCLIENT * VAR_1, unsigned long VAR_2, BOOL VAR_3)
{
 seamless_window *VAR_4;
 seamless_group *VAR_5;
 XSetWindowAttributes VAR_6;

 for (VAR_4 = VAR_1->xwin.seamless_windows; VAR_4; VAR_4 = VAR_4->next)
 {
  if (VAR_4->group->id == VAR_2)
   return VAR_4->group;
 }

 if (VAR_3)
  return ((void*)0);

 VAR_5 = FUNC_2(sizeof(seamless_group));

 VAR_5->wnd =
  FUNC_1(VAR_1->display, FUNC_0(VAR_1->xwin.screen), -1, -1, 1, 1, 0,
         VAR_0, VAR_0, VAR_0, 0, &VAR_6);

 VAR_5->id = VAR_2;
 VAR_5->refcnt = 0;

 return VAR_5;
}
