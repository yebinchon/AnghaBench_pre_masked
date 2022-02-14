
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct percpu_list_node {struct percpu_list_node* next; } ;
struct percpu_list {TYPE_1__* c; } ;
struct TYPE_2__ {int head; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (intptr_t*,intptr_t,intptr_t,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct percpu_list *VAR_0,
   struct percpu_list_node *VAR_1,
   int *VAR_2)
{
 int VAR_3;

 for (;;) {
  intptr_t *VAR_4, VAR_5, VAR_6;
  int VAR_7;

  VAR_3 = FUNC_2();

  VAR_6 = (intptr_t)FUNC_0(VAR_0->c[VAR_3].head);
  VAR_5 = (intptr_t)VAR_1;
  VAR_4 = (intptr_t *)&VAR_0->c[VAR_3].head;
  VAR_1->next = (struct percpu_list_node *)VAR_6;
  VAR_7 = FUNC_1(VAR_4, VAR_6, VAR_5, VAR_3);
  if (FUNC_3(!VAR_7))
   break;

 }
 if (VAR_2)
  *VAR_2 = VAR_3;
}
