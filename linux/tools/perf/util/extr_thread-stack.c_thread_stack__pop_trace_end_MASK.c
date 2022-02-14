
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_stack {size_t cnt; TYPE_1__* stack; } ;
struct TYPE_2__ {scalar_t__ trace_end; } ;



__attribute__((used)) static void FUNC_0(struct thread_stack *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = VAR_0->cnt; VAR_1; ) {
  if (VAR_0->stack[--VAR_1].trace_end)
   VAR_0->cnt = VAR_1;
  else
   return;
 }
}
