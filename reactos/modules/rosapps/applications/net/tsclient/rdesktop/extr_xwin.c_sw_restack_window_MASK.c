
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned long behind; unsigned long id; struct TYPE_7__* next; } ;
typedef TYPE_2__ seamless_window ;
struct TYPE_6__ {TYPE_2__* seamless_windows; } ;
struct TYPE_8__ {TYPE_1__ xwin; } ;
typedef TYPE_3__ RDPCLIENT ;



__attribute__((used)) static void
FUNC_0(RDPCLIENT * VAR_0, seamless_window * VAR_1, unsigned long VAR_2)
{
 seamless_window *VAR_3;


 for (VAR_3 = VAR_0->xwin.seamless_windows; VAR_3; VAR_3 = VAR_3->next)
 {
  if (VAR_3->behind == VAR_1->id)
   break;
 }

 if (VAR_3)
  VAR_3->behind = VAR_1->behind;


 for (VAR_3 = VAR_0->xwin.seamless_windows; VAR_3; VAR_3 = VAR_3->next)
 {
  if (VAR_3->behind == VAR_2)
   break;
 }

 if (VAR_3)
  VAR_3->behind = VAR_1->id;

 VAR_1->behind = VAR_2;
}
