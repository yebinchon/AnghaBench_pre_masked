
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
struct kernel_siginfo {int si_signo; int si_errno; int si_pid; int si_code; } ;
struct cred {int dummy; } ;
typedef int sigval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct kernel_siginfo*,struct task_struct*,int ,int) ;
 int FUNC_1 (struct kernel_siginfo*) ;
 int FUNC_2 (struct cred const*,struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*,unsigned long*) ;
 struct task_struct* FUNC_4 (struct pid*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct task_struct*,struct kernel_siginfo*,int,struct cred const*) ;
 int FUNC_8 (struct task_struct*,unsigned long*) ;
 int FUNC_9 (int) ;

int FUNC_10(int VAR_6, int VAR_7, sigval_t VAR_8,
    struct pid *VAR_9, const struct cred *VAR_10)
{
 struct kernel_siginfo VAR_11;
 struct task_struct *VAR_12;
 unsigned long VAR_13;
 int VAR_14 = -VAR_0;

 FUNC_1(&VAR_11);
 VAR_11.si_signo = VAR_6;
 VAR_11.si_errno = VAR_7;
 VAR_11.si_code = VAR_5;
 *((sigval_t *)&VAR_11.si_pid) = VAR_8;

 if (!FUNC_9(VAR_6))
  return VAR_14;

 FUNC_5();
 VAR_12 = FUNC_4(VAR_9, VAR_3);
 if (!VAR_12) {
  VAR_14 = -VAR_2;
  goto out_unlock;
 }
 if (!FUNC_2(VAR_10, VAR_12)) {
  VAR_14 = -VAR_1;
  goto out_unlock;
 }
 VAR_14 = FUNC_7(VAR_12, &VAR_11, VAR_6, VAR_10);
 if (VAR_14)
  goto out_unlock;

 if (VAR_6) {
  if (FUNC_3(VAR_12, &VAR_13)) {
   VAR_14 = FUNC_0(VAR_6, &VAR_11, VAR_12, VAR_4, 0);
   FUNC_8(VAR_12, &VAR_13);
  } else
   VAR_14 = -VAR_2;
 }
out_unlock:
 FUNC_6();
 return VAR_14;
}
