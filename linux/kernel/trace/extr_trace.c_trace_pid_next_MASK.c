
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_pid_list {unsigned long pid_max; int pids; } ;
typedef int loff_t ;


 unsigned long FUNC_0 (int ,unsigned long,unsigned long) ;

void *FUNC_1(struct trace_pid_list *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_1;

 (*VAR_2)++;


 VAR_3 = FUNC_0(VAR_0->pids, VAR_0->pid_max, VAR_3);


 if (VAR_3 < VAR_0->pid_max)
  return (void *)(VAR_3 + 1);

 return ((void*)0);
}
