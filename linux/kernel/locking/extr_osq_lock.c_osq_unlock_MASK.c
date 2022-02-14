
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optimistic_spin_queue {int tail; } ;
struct optimistic_spin_node {int locked; int next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_1 ;
 struct optimistic_spin_node* FUNC_4 (struct optimistic_spin_queue*,struct optimistic_spin_node*,int *) ;
 int FUNC_5 () ;
 struct optimistic_spin_node* FUNC_6 (int *) ;
 struct optimistic_spin_node* FUNC_7 (int *,int *) ;

void FUNC_8(struct optimistic_spin_queue *VAR_2)
{
 struct optimistic_spin_node *VAR_3, *VAR_4;
 int VAR_5 = FUNC_2(FUNC_5());




 if (FUNC_3(FUNC_1(&VAR_2->tail, VAR_5,
       VAR_0) == VAR_5))
  return;




 VAR_3 = FUNC_6(&VAR_1);
 VAR_4 = FUNC_7(&VAR_3->next, ((void*)0));
 if (VAR_4) {
  FUNC_0(VAR_4->locked, 1);
  return;
 }

 VAR_4 = FUNC_4(VAR_2, VAR_3, ((void*)0));
 if (VAR_4)
  FUNC_0(VAR_4->locked, 1);
}
