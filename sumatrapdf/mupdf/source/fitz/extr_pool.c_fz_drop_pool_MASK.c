
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* head; } ;
typedef TYPE_1__ fz_pool_node ;
typedef TYPE_1__ fz_pool ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

void FUNC_1(fz_context *VAR_0, fz_pool *VAR_1)
{
 fz_pool_node *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->head;
 while (VAR_2)
 {
  fz_pool_node *VAR_3 = VAR_2->next;
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = VAR_3;
 }
 FUNC_0(VAR_0, VAR_1);
}
