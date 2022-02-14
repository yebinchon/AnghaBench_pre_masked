
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack {int stack; } ;
struct thread {int dummy; } ;


 int FUNC_0 (struct thread*,struct thread_stack*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct thread *VAR_0, struct thread_stack *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(&VAR_1->stack);
}
