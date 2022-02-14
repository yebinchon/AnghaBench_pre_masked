
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack {int dummy; } ;
struct thread {struct thread_stack* ts; } ;


 struct thread_stack* FUNC_0 (struct thread*,int) ;
 scalar_t__ FUNC_1 (struct thread*) ;

__attribute__((used)) static inline struct thread_stack *FUNC_2(struct thread *VAR_0,
          int VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 if (FUNC_1(VAR_0))
  return FUNC_0(VAR_0, VAR_1);

 return VAR_0->ts;
}
