
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ wnd; struct TYPE_7__* next; } ;
typedef TYPE_2__ seamless_window ;
typedef scalar_t__ Window ;
struct TYPE_6__ {TYPE_2__* seamless_windows; } ;
struct TYPE_8__ {TYPE_1__ xwin; } ;
typedef TYPE_3__ RDPCLIENT ;



__attribute__((used)) static seamless_window *
FUNC_0(RDPCLIENT * VAR_0, Window VAR_1)
{
 seamless_window *VAR_2;
 for (VAR_2 = VAR_0->xwin.seamless_windows; VAR_2; VAR_2 = VAR_2->next)
 {
  if (VAR_2->wnd == VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
