
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct task_struct {int dummy; } ;
struct kernel_siginfo {scalar_t__ si_code; scalar_t__ si_pid; int si_uid; } ;
typedef int kuid_t ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 struct kernel_siginfo* VAR_0 ;
 struct kernel_siginfo* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,struct kernel_siginfo*,struct task_struct*,int,int) ;
 int VAR_3 ;
 struct user_namespace* FUNC_1 () ;
 int FUNC_2 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_3 (struct kernel_siginfo*) ;
 int FUNC_4 (struct user_namespace*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct task_struct*) ;
 struct user_namespace* FUNC_8 (struct task_struct*,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(int VAR_5, struct kernel_siginfo *VAR_6, struct task_struct *VAR_7,
   enum pid_type VAR_8)
{

 bool VAR_9 = 0;

 if (VAR_6 == VAR_0) {

  VAR_9 = !FUNC_9(VAR_3, FUNC_7(VAR_7));
 } else if (VAR_6 == VAR_1) {

  VAR_9 = 1;
 } else if (FUNC_3(VAR_6)) {

  struct user_namespace *VAR_10;

  FUNC_5();
  VAR_10 = FUNC_8(VAR_7, VAR_4);
  if (FUNC_1() != VAR_10) {
   kuid_t VAR_11 = FUNC_4(FUNC_1(), VAR_6->si_uid);
   VAR_6->si_uid = FUNC_2(VAR_10, VAR_11);
  }
  FUNC_6();


  VAR_9 = (VAR_6->si_code == VAR_2);


  if (!FUNC_9(VAR_3, FUNC_7(VAR_7))) {
   VAR_6->si_pid = 0;
   VAR_9 = 1;
  }
 }
 return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
