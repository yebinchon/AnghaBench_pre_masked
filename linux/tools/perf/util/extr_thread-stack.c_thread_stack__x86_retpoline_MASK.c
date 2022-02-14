
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_stack_entry {struct call_path* cp; } ;
struct thread_stack {int cnt; struct thread_stack_entry* stack; int kernel_start; TYPE_1__* crp; } ;
struct symbol {scalar_t__ start; int name; } ;
struct perf_sample {int addr; } ;
struct call_path_root {int dummy; } ;
struct call_path {struct symbol* sym; } ;
struct addr_location {scalar_t__ addr; struct symbol* sym; } ;
struct TYPE_2__ {struct call_path_root* cpr; } ;


 int VAR_0 ;
 struct call_path* FUNC_0 (struct call_path_root*,struct call_path*,struct symbol*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct thread_stack *VAR_1,
           struct perf_sample *VAR_2,
           struct addr_location *VAR_3)
{
 struct thread_stack_entry *VAR_4 = &VAR_1->stack[VAR_1->cnt - 1];
 struct call_path_root *VAR_5 = VAR_1->crp->cpr;
 struct symbol *VAR_6 = VAR_4->cp->sym;
 struct symbol *VAR_7 = VAR_3->sym;
 struct call_path *VAR_8;

 if (VAR_6 && FUNC_1(VAR_6->name)) {
  VAR_1->cnt -= 1;
  VAR_6 = VAR_1->stack[VAR_1->cnt - 2].cp->sym;
  if (VAR_6 && VAR_6 == VAR_7 && VAR_3->addr != VAR_7->start) {





   VAR_1->cnt -= 1;
   return 0;
  }
 } else if (VAR_6 && VAR_6 == VAR_7) {




  VAR_1->cnt -= 1;
  return 0;
 }

 VAR_8 = FUNC_0(VAR_5, VAR_1->stack[VAR_1->cnt - 2].cp, VAR_7,
    VAR_2->addr, VAR_1->kernel_start);
 if (!VAR_8)
  return -VAR_0;


 VAR_1->stack[VAR_1->cnt - 1].cp = VAR_8;

 return 0;
}
