
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {unsigned long* entries; unsigned int max_entries; unsigned int skip; unsigned int nr_entries; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*,struct stack_trace*) ;

unsigned int FUNC_1(struct pt_regs *VAR_0, unsigned long *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 struct stack_trace VAR_4 = {
  .entries = VAR_1,
  .max_entries = VAR_2,
  .skip = VAR_3,
 };

 FUNC_0(VAR_0, &VAR_4);
 return VAR_4.nr_entries;
}
