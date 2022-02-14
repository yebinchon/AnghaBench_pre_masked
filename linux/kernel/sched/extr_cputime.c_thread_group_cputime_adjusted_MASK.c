
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct task_struct {TYPE_1__* signal; } ;
struct task_cputime {int dummy; } ;
struct TYPE_2__ {int prev_cputime; } ;


 int FUNC_0 (struct task_cputime*,int *,int *,int *) ;
 int FUNC_1 (struct task_struct*,struct task_cputime*) ;

void FUNC_2(struct task_struct *VAR_0, u64 *VAR_1, u64 *VAR_2)
{
 struct task_cputime VAR_3;

 FUNC_1(VAR_0, &VAR_3);
 FUNC_0(&VAR_3, &VAR_0->signal->prev_cputime, VAR_1, VAR_2);
}
