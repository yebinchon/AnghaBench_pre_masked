
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,struct pid_namespace*) ;
 struct task_struct* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

struct task_struct *FUNC_4(pid_t VAR_1, struct pid_namespace *VAR_2)
{
 FUNC_0(!FUNC_3(),
    "find_task_by_pid_ns() needs rcu_read_lock() protection");
 return FUNC_2(FUNC_1(VAR_1, VAR_2), VAR_0);
}
