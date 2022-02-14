
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_callback {int removed; int (* on_remove ) (struct script_callback*) ;struct script_callback** p_prev_next; struct script_callback* next; } ;


 int VAR_0 ;
 struct script_callback* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct script_callback*) ;

__attribute__((used)) static inline void FUNC_3(struct script_callback *VAR_2)
{
 VAR_2->removed = 1;

 struct script_callback *VAR_3 = VAR_2->next;
 if (VAR_3)
  VAR_3->p_prev_next = VAR_2->p_prev_next;
 *VAR_2->p_prev_next = VAR_2->next;

 FUNC_0(&VAR_0);
 VAR_3 = VAR_1;
 VAR_2->next = VAR_3;
 if (VAR_3)
  VAR_3->p_prev_next = &VAR_2->next;
 VAR_2->p_prev_next = &VAR_1;
 VAR_1 = VAR_2;
 FUNC_1(&VAR_0);

 if (VAR_2->on_remove)
  VAR_2->on_remove(VAR_2);
}
