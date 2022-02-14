
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_cputime_atomic {int sum_exec_runtime; int stime; int utime; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct task_cputime_atomic *VAR_0,
           u64 *VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4;

 VAR_3 = FUNC_0(&VAR_0->utime);
 VAR_2 = FUNC_0(&VAR_0->stime);
 VAR_4 = FUNC_0(&VAR_0->sum_exec_runtime);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
