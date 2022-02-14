
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_callback {struct script_callback* next; struct script_callback** p_prev_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct script_callback*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct script_callback *VAR_1)
{
 FUNC_1(&VAR_0);
 struct script_callback *VAR_2 = VAR_1->next;
 if (VAR_2)
  VAR_2->p_prev_next = VAR_1->p_prev_next;
 *VAR_1->p_prev_next = VAR_1->next;
 FUNC_2(&VAR_0);

 FUNC_0(VAR_1);
}
