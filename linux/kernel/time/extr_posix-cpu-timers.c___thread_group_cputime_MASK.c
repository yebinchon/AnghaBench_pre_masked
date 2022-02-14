
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_struct {int dummy; } ;
struct task_cputime {int sum_exec_runtime; int utime; int stime; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct task_struct*,struct task_cputime*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0, u64 *VAR_1)
{
 struct task_cputime VAR_2;

 FUNC_1(VAR_0, &VAR_2);
 FUNC_0(VAR_1, VAR_2.stime, VAR_2.utime, VAR_2.sum_exec_runtime);
}
