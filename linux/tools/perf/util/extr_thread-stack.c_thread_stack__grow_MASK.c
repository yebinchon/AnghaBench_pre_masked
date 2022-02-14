
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack_entry {int dummy; } ;
struct thread_stack {size_t sz; struct thread_stack_entry* stack; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct thread_stack_entry* FUNC_0 (struct thread_stack_entry*,size_t) ;

__attribute__((used)) static int FUNC_1(struct thread_stack *VAR_2)
{
 struct thread_stack_entry *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_5 = VAR_2->sz + VAR_1;
 VAR_4 = VAR_5 * sizeof(struct thread_stack_entry);

 VAR_3 = FUNC_0(VAR_2->stack, VAR_4);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->stack = VAR_3;
 VAR_2->sz = VAR_5;

 return 0;
}
