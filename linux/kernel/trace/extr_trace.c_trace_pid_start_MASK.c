
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_pid_list {unsigned long pid_max; int pids; } ;
typedef scalar_t__ loff_t ;


 unsigned long FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (struct trace_pid_list*,void*,scalar_t__*) ;

void *FUNC_2(struct trace_pid_list *VAR_0, loff_t *VAR_1)
{
 unsigned long VAR_2;
 loff_t VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0->pids, VAR_0->pid_max);
 if (VAR_2 >= VAR_0->pid_max)
  return ((void*)0);


 for (VAR_2++; VAR_2 && VAR_3 < *VAR_1;
      VAR_2 = (unsigned long)FUNC_1(VAR_0, (void *)VAR_2, &VAR_3))
  ;
 return (void *)VAR_2;
}
