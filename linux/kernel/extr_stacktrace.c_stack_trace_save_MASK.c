
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {unsigned long* entries; unsigned int max_entries; unsigned int skip; unsigned int nr_entries; } ;


 int FUNC_0 (struct stack_trace*) ;

unsigned int FUNC_1(unsigned long *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 struct stack_trace VAR_3 = {
  .entries = VAR_0,
  .max_entries = VAR_1,
  .skip = VAR_2 + 1,
 };

 FUNC_0(&VAR_3);
 return VAR_3.nr_entries;
}
