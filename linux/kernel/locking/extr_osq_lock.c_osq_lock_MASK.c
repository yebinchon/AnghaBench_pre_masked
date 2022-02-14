
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optimistic_spin_queue {int tail; } ;
struct optimistic_spin_node {int cpu; struct optimistic_spin_node* next; struct optimistic_spin_node* prev; struct optimistic_spin_node* locked; } ;


 int VAR_0 ;
 struct optimistic_spin_node* FUNC_0 (struct optimistic_spin_node*) ;
 int FUNC_1 (struct optimistic_spin_node*,struct optimistic_spin_node*) ;
 int FUNC_2 (int *,int) ;
 struct optimistic_spin_node* FUNC_3 (struct optimistic_spin_node**,struct optimistic_spin_node*,int *) ;
 int FUNC_4 () ;
 struct optimistic_spin_node* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct optimistic_spin_node*) ;
 int VAR_1 ;
 struct optimistic_spin_node* FUNC_9 (struct optimistic_spin_queue*,struct optimistic_spin_node*,struct optimistic_spin_node*) ;
 scalar_t__ FUNC_10 (struct optimistic_spin_node**) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 struct optimistic_spin_node* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;

bool FUNC_15(struct optimistic_spin_queue *VAR_2)
{
 struct optimistic_spin_node *VAR_3 = FUNC_13(&VAR_1);
 struct optimistic_spin_node *VAR_4, *VAR_5;
 int VAR_6 = FUNC_6(FUNC_11());
 int VAR_7;

 VAR_3->locked = 0;
 VAR_3->next = ((void*)0);
 VAR_3->cpu = VAR_6;







 VAR_7 = FUNC_2(&VAR_2->tail, VAR_6);
 if (VAR_7 == VAR_0)
  return 1;

 VAR_4 = FUNC_5(VAR_7);
 VAR_3->prev = VAR_4;
 FUNC_12();

 FUNC_1(VAR_4->next, VAR_3);
 while (!FUNC_0(VAR_3->locked)) {





  if (FUNC_7() || FUNC_14(FUNC_8(VAR_3->prev)))
   goto unqueue;

  FUNC_4();
 }
 return 1;

unqueue:
 for (;;) {
  if (VAR_4->next == VAR_3 &&
      FUNC_3(&VAR_4->next, VAR_3, ((void*)0)) == VAR_3)
   break;






  if (FUNC_10(&VAR_3->locked))
   return 1;

  FUNC_4();





  VAR_4 = FUNC_0(VAR_3->prev);
 }
 VAR_5 = FUNC_9(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return 0;
 FUNC_1(VAR_5->prev, VAR_4);
 FUNC_1(VAR_4->next, VAR_5);

 return 0;
}
