
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_pid_list {scalar_t__ pid_max; int pids; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (scalar_t__,int ) ;

bool
FUNC_1(struct trace_pid_list *VAR_0, pid_t VAR_1)
{




 if (VAR_1 >= VAR_0->pid_max)
  return 0;

 return FUNC_0(VAR_1, VAR_0->pids);
}
