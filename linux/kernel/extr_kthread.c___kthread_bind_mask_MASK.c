
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pi_lock; int flags; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*,struct cpumask const*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct task_struct*,long) ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_1, const struct cpumask *VAR_2, long VAR_3)
{
 unsigned long VAR_4;

 if (!FUNC_4(VAR_1, VAR_3)) {
  FUNC_0(1);
  return;
 }


 FUNC_2(&VAR_1->pi_lock, VAR_4);
 FUNC_1(VAR_1, VAR_2);
 VAR_1->flags |= VAR_0;
 FUNC_3(&VAR_1->pi_lock, VAR_4);
}
