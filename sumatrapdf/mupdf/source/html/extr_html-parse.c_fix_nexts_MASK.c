
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* up; struct TYPE_3__* down; } ;
typedef TYPE_1__ fz_html_box ;



__attribute__((used)) static void
FUNC_0(fz_html_box *VAR_0)
{
 while (VAR_0)
 {
  if (VAR_0->down)
   FUNC_0(VAR_0->down);
  if (VAR_0->next && VAR_0->next->up == VAR_0)
  {
   VAR_0->next = ((void*)0);
   break;
  }
  VAR_0 = VAR_0->next;
 }
}
