
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct thread_stack_entry {scalar_t__ ret_addr; scalar_t__ non_call; TYPE_1__* cp; } ;
struct thread_stack {int cnt; struct thread_stack_entry* stack; } ;
struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct TYPE_2__ {struct symbol* sym; } ;


 int FUNC_0 (struct thread*,struct thread_stack*,int,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct thread *VAR_0, struct thread_stack *VAR_1,
    u64 VAR_2, u64 VAR_3, u64 VAR_4,
    struct symbol *VAR_5)
{
 int VAR_6;

 if (!VAR_1->cnt)
  return 1;

 if (VAR_1->cnt == 1) {
  struct thread_stack_entry *VAR_7 = &VAR_1->stack[0];

  if (VAR_7->cp->sym == VAR_5)
   return FUNC_0(VAR_0, VAR_1, --VAR_1->cnt,
        VAR_3, VAR_4, 0);
 }

 if (VAR_1->stack[VAR_1->cnt - 1].ret_addr == VAR_2 &&
     !VAR_1->stack[VAR_1->cnt - 1].non_call) {
  return FUNC_0(VAR_0, VAR_1, --VAR_1->cnt,
       VAR_3, VAR_4, 0);
 } else {
  size_t VAR_8 = VAR_1->cnt - 1;

  while (VAR_8--) {
   if (VAR_1->stack[VAR_8].ret_addr != VAR_2 ||
       VAR_1->stack[VAR_8].non_call)
    continue;
   VAR_8 += 1;
   while (VAR_1->cnt > VAR_8) {
    VAR_6 = FUNC_0(VAR_0, VAR_1,
        --VAR_1->cnt,
        VAR_3, VAR_4,
        1);
    if (VAR_6)
     return VAR_6;
   }
   return FUNC_0(VAR_0, VAR_1, --VAR_1->cnt,
        VAR_3, VAR_4, 0);
  }
 }

 return 1;
}
