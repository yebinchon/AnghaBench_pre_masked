
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack {unsigned int arr_sz; int stack; } ;
struct thread {struct thread_stack* ts; } ;



__attribute__((used)) static struct thread_stack *FUNC_0(struct thread *VAR_0, int VAR_1)
{
 struct thread_stack *VAR_2 = VAR_0->ts;

 if (VAR_1 < 0)
  VAR_1 = 0;

 if (!VAR_2 || (unsigned int)VAR_1 >= VAR_2->arr_sz)
  return ((void*)0);

 VAR_2 += VAR_1;

 if (!VAR_2->stack)
  return ((void*)0);

 return VAR_2;
}
