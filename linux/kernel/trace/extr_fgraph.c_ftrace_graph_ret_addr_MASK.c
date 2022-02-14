
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int curr_ret_stack; TYPE_1__* ret_stack; } ;
struct TYPE_2__ {unsigned long ret; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

unsigned long FUNC_1(struct task_struct *VAR_1, int *VAR_2,
        unsigned long VAR_3, unsigned long *VAR_4)
{
 int VAR_5;

 if (VAR_3 != (unsigned long)FUNC_0(VAR_0))
  return VAR_3;

 VAR_5 = VAR_1->curr_ret_stack;

 if (!VAR_1->ret_stack || VAR_5 < *VAR_2)
  return VAR_3;

 VAR_5 -= *VAR_2;
 (*VAR_2)++;

 return VAR_1->ret_stack[VAR_5].ret;
}
