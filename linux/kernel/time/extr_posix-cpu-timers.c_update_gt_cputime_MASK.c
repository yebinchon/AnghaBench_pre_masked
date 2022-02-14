
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_cputime_atomic {int sum_exec_runtime; int stime; int utime; } ;
struct task_cputime {int sum_exec_runtime; int stime; int utime; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct task_cputime_atomic *VAR_0,
         struct task_cputime *VAR_1)
{
 FUNC_0(&VAR_0->utime, VAR_1->utime);
 FUNC_0(&VAR_0->stime, VAR_1->stime);
 FUNC_0(&VAR_0->sum_exec_runtime, VAR_1->sum_exec_runtime);
}
