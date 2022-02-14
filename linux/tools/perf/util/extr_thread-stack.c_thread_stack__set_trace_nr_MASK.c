
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thread_stack {scalar_t__ trace_nr; } ;
struct thread {int dummy; } ;


 int FUNC_0 (struct thread*,struct thread_stack*) ;
 struct thread_stack* FUNC_1 (struct thread*,int) ;

void FUNC_2(struct thread *VAR_0, int VAR_1, u64 VAR_2)
{
 struct thread_stack *VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_3)
  return;

 if (VAR_2 != VAR_3->trace_nr) {
  if (VAR_3->trace_nr)
   FUNC_0(VAR_0, VAR_3);
  VAR_3->trace_nr = VAR_2;
 }
}
