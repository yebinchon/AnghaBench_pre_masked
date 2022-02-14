
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {unsigned long* entries; unsigned int max_entries; unsigned int skip; unsigned int nr_entries; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct task_struct*,struct stack_trace*) ;

unsigned int FUNC_1(struct task_struct *VAR_1,
      unsigned long *VAR_2, unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct stack_trace VAR_5 = {
  .entries = VAR_2,
  .max_entries = VAR_3,

  .skip = VAR_4 + !!(VAR_0 == VAR_1),
 };

 FUNC_0(VAR_1, &VAR_5);
 return VAR_5.nr_entries;
}
