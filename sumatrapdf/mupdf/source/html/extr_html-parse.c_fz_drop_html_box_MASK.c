
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* down; int flow_head; struct TYPE_3__* next; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, fz_html_box *VAR_1)
{
 while (VAR_1)
 {
  fz_html_box *VAR_2 = VAR_1->next;
  FUNC_0(VAR_0, VAR_1->flow_head);
  FUNC_1(VAR_0, VAR_1->down);
  VAR_1 = VAR_2;
 }
}
