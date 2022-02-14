
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread_stack_entry {scalar_t__ trace_end; } ;
struct thread_stack {int cnt; struct thread_stack_entry* stack; } ;
struct thread {int dummy; } ;


 int FUNC_0 (struct thread*,struct thread_stack*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct thread *VAR_0,
         struct thread_stack *VAR_1, u64 VAR_2,
         u64 VAR_3)
{
 struct thread_stack_entry *VAR_4;
 int VAR_5;

 if (!VAR_1->cnt)
  return 0;


 VAR_4 = &VAR_1->stack[VAR_1->cnt - 1];
 if (VAR_4->trace_end) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, --VAR_1->cnt,
      VAR_2, VAR_3, 0);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
