
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack {unsigned int arr_sz; } ;
struct thread {struct thread_stack* ts; } ;


 int FUNC_0 (struct thread*,struct thread_stack*) ;
 int FUNC_1 (struct thread_stack**) ;

void FUNC_2(struct thread *VAR_0)
{
 struct thread_stack *VAR_1 = VAR_0->ts;
 unsigned int VAR_2;

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_1->arr_sz; VAR_2++)
   FUNC_0(VAR_0, VAR_1 + VAR_2);
  FUNC_1(&VAR_0->ts);
 }
}
