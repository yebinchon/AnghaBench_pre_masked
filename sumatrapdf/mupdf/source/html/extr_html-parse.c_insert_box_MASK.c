
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; struct TYPE_4__* next; struct TYPE_4__* down; struct TYPE_4__* up; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;



__attribute__((used)) static void FUNC_0(fz_context *VAR_0, fz_html_box *VAR_1, int VAR_2, fz_html_box *VAR_3)
{
 VAR_1->type = VAR_2;

 VAR_1->up = VAR_3;

 if (VAR_3)
 {


  if (!VAR_3->next)
  {
   VAR_3->down = VAR_3->next = VAR_1;
  }
  else
  {
   VAR_3->next->next = VAR_1;

   VAR_3->next = VAR_1;
  }
 }
}
