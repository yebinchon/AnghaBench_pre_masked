
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_html_flow ;
struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* next; struct TYPE_3__* down; int flow_head; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_1, fz_html_box *VAR_2, fz_html_flow *VAR_3)
{
 while (VAR_2)
 {
  if (VAR_2->type == VAR_0)
  {
   if (FUNC_0(VAR_1, VAR_2->flow_head, VAR_3))
    return 1;
  }
  else
  {
   if (FUNC_1(VAR_1, VAR_2->down, VAR_3))
    return 1;
  }
  VAR_2 = VAR_2->next;
 }
 return 0;
}
