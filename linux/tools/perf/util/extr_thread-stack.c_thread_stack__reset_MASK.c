
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack {unsigned int arr_sz; } ;
struct thread {int dummy; } ;


 int FUNC_0 (struct thread*,struct thread_stack*) ;
 int FUNC_1 (struct thread_stack*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct thread *VAR_0, struct thread_stack *VAR_1)
{
 unsigned int VAR_2 = VAR_1->arr_sz;

 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->arr_sz = VAR_2;
}
