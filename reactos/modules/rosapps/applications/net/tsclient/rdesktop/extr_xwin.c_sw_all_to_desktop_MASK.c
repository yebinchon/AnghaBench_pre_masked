
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ wnd; unsigned int desktop; struct TYPE_7__* next; } ;
typedef TYPE_2__ seamless_window ;
typedef scalar_t__ Window ;
struct TYPE_6__ {TYPE_2__* seamless_windows; } ;
struct TYPE_8__ {TYPE_1__ xwin; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (TYPE_3__*,scalar_t__,unsigned int) ;

__attribute__((used)) static void
FUNC_1(RDPCLIENT * VAR_0, Window VAR_1, unsigned int VAR_2)
{
 seamless_window *VAR_3;
 for (VAR_3 = VAR_0->xwin.seamless_windows; VAR_3; VAR_3 = VAR_3->next)
 {
  if (VAR_3->wnd == VAR_1)
   continue;
  if (VAR_3->desktop != VAR_2)
  {
   FUNC_0(VAR_0, VAR_3->wnd, VAR_2);
   VAR_3->desktop = VAR_2;
  }
 }
}
