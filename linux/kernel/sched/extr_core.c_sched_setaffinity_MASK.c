
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int flags; } ;
struct cpumask {int dummy; } ;
typedef int pid_t ;
typedef int cpumask_var_t ;
struct TYPE_6__ {int user_ns; } ;
struct TYPE_5__ {TYPE_1__* rd; } ;
struct TYPE_4__ {int span; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct task_struct*,int ,int) ;
 TYPE_3__* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ,struct cpumask const*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct task_struct*,int ) ;
 scalar_t__ FUNC_8 () ;
 struct task_struct* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct task_struct*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (struct task_struct*) ;
 scalar_t__ FUNC_17 (struct task_struct*) ;
 TYPE_2__* FUNC_18 (struct task_struct*) ;

long FUNC_19(pid_t VAR_8, const struct cpumask *VAR_9)
{
 cpumask_var_t VAR_10, VAR_11;
 struct task_struct *VAR_12;
 int VAR_13;

 FUNC_14();

 VAR_12 = FUNC_9(VAR_8);
 if (!VAR_12) {
  FUNC_15();
  return -VAR_5;
 }


 FUNC_11(VAR_12);
 FUNC_15();

 if (VAR_12->flags & VAR_7) {
  VAR_13 = -VAR_2;
  goto out_put_task;
 }
 if (!FUNC_2(&VAR_10, VAR_6)) {
  VAR_13 = -VAR_3;
  goto out_put_task;
 }
 if (!FUNC_2(&VAR_11, VAR_6)) {
  VAR_13 = -VAR_3;
  goto out_free_cpus_allowed;
 }
 VAR_13 = -VAR_4;
 if (!FUNC_3(VAR_12)) {
  FUNC_14();
  if (!FUNC_12(FUNC_1(VAR_12)->user_ns, VAR_0)) {
   FUNC_15();
   goto out_free_new_mask;
  }
  FUNC_15();
 }

 VAR_13 = FUNC_16(VAR_12);
 if (VAR_13)
  goto out_free_new_mask;


 FUNC_7(VAR_12, VAR_10);
 FUNC_4(VAR_11, VAR_9, VAR_10);
again:
 VAR_13 = FUNC_0(VAR_12, VAR_11, 1);

 if (!VAR_13) {
  FUNC_7(VAR_12, VAR_10);
  if (!FUNC_6(VAR_11, VAR_10)) {





   FUNC_5(VAR_11, VAR_10);
   goto again;
  }
 }
out_free_new_mask:
 FUNC_10(VAR_11);
out_free_cpus_allowed:
 FUNC_10(VAR_10);
out_put_task:
 FUNC_13(VAR_12);
 return VAR_13;
}
