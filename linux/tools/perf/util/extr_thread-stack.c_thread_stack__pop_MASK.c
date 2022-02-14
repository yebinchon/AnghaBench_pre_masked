
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct thread_stack {size_t cnt; TYPE_1__* stack; } ;
struct TYPE_2__ {scalar_t__ ret_addr; } ;



__attribute__((used)) static void FUNC_0(struct thread_stack *VAR_0, u64 VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = VAR_0->cnt; VAR_2; ) {
  if (VAR_0->stack[--VAR_2].ret_addr == VAR_1) {
   VAR_0->cnt = VAR_2;
   return;
  }
 }
}
