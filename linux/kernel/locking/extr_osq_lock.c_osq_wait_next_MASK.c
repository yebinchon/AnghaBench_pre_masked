
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optimistic_spin_queue {int tail; } ;
struct optimistic_spin_node {int cpu; scalar_t__ next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct optimistic_spin_node* FUNC_5 (scalar_t__*,int *) ;

__attribute__((used)) static inline struct optimistic_spin_node *
FUNC_6(struct optimistic_spin_queue *VAR_1,
       struct optimistic_spin_node *VAR_2,
       struct optimistic_spin_node *VAR_3)
{
 struct optimistic_spin_node *VAR_4 = ((void*)0);
 int VAR_5 = FUNC_3(FUNC_4());
 int VAR_6;






 VAR_6 = VAR_3 ? VAR_3->cpu : VAR_0;

 for (;;) {
  if (FUNC_1(&VAR_1->tail) == VAR_5 &&
      FUNC_0(&VAR_1->tail, VAR_5, VAR_6) == VAR_5) {





   break;
  }
  if (VAR_2->next) {
   VAR_4 = FUNC_5(&VAR_2->next, ((void*)0));
   if (VAR_4)
    break;
  }

  FUNC_2();
 }

 return VAR_4;
}
