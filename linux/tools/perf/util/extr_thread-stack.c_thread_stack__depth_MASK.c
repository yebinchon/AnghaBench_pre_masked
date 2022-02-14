
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack {size_t cnt; } ;
struct thread {int dummy; } ;


 struct thread_stack* FUNC_0 (struct thread*,int) ;

size_t FUNC_1(struct thread *VAR_0, int VAR_1)
{
 struct thread_stack *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  return 0;
 return VAR_2->cnt;
}
