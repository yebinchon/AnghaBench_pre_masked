
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thread_stack {size_t cnt; size_t sz; TYPE_1__* stack; } ;
struct TYPE_2__ {int trace_end; int ret_addr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct thread_stack*) ;

__attribute__((used)) static int FUNC_2(struct thread_stack *VAR_0, u64 VAR_1,
         bool VAR_2)
{
 int VAR_3 = 0;

 if (VAR_0->cnt == VAR_0->sz) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3) {
   FUNC_0("Out of memory: discarding thread stack\n");
   VAR_0->cnt = 0;
  }
 }

 VAR_0->stack[VAR_0->cnt].trace_end = VAR_2;
 VAR_0->stack[VAR_0->cnt++].ret_addr = VAR_1;

 return VAR_3;
}
