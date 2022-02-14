
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regs_struct {scalar_t__ user_syscall_nr; int user_arg0; int user_arg1; int user_arg2; int user_arg3; int user_arg4; int user_arg5; scalar_t__ user_ax; scalar_t__ user_ip; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,struct user_regs_struct*) ;
 scalar_t__ FUNC_9 (scalar_t__,...) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_12(void)
{
 FUNC_7("[RUN]\tptrace-induced syscall restart\n");
 pid_t VAR_10 = FUNC_5();
 if (VAR_10 < 0)
  FUNC_4(1, "fork");

 if (VAR_10 == 0) {
  if (FUNC_8(VAR_4, 0, 0, 0) != 0)
   FUNC_4(1, "PTRACE_TRACEME");

  pid_t VAR_11 = FUNC_6(), VAR_12 = FUNC_9(VAR_7);

  FUNC_7("\tChild will make one syscall\n");
  FUNC_9(VAR_8, VAR_11, VAR_12, VAR_5);

  FUNC_9(VAR_7, 10, 11, 12, 13, 14, 15);
  FUNC_3(0);
 }

 int VAR_13;


 if (FUNC_11(VAR_10, &VAR_13, 0) != VAR_10 || !FUNC_2(VAR_13))
  FUNC_4(1, "waitpid");

 struct user_regs_struct VAR_14;

 FUNC_7("[RUN]\tSYSEMU\n");
 if (FUNC_8(VAR_3, VAR_10, 0, 0) != 0)
  FUNC_4(1, "PTRACE_SYSEMU");
 FUNC_10(VAR_10);

 if (FUNC_8(VAR_1, VAR_10, 0, &VAR_14) != 0)
  FUNC_4(1, "PTRACE_GETREGS");

 if (VAR_14.user_syscall_nr != VAR_7 ||
     VAR_14.user_arg0 != 10 || VAR_14.user_arg1 != 11 ||
     VAR_14.user_arg2 != 12 || VAR_14.user_arg3 != 13 ||
     VAR_14.user_arg4 != 14 || VAR_14.user_arg5 != 15) {
  FUNC_7("[FAIL]\tInitial args are wrong (nr=%lu, args=%lu %lu %lu %lu %lu %lu)\n", (unsigned long)VAR_14.user_syscall_nr, (unsigned long)VAR_14.user_arg0, (unsigned long)VAR_14.user_arg1, (unsigned long)VAR_14.user_arg2, (unsigned long)VAR_14.user_arg3, (unsigned long)VAR_14.user_arg4, (unsigned long)VAR_14.user_arg5);
  VAR_9++;
 } else {
  FUNC_7("[OK]\tInitial nr and args are correct\n");
 }

 FUNC_7("[RUN]\tRestart the syscall (ip = 0x%lx)\n",
        (unsigned long)VAR_14.user_ip);







 VAR_14.user_ax = VAR_14.user_syscall_nr;
 VAR_14.user_ip -= 2;
 if (FUNC_8(VAR_2, VAR_10, 0, &VAR_14) != 0)
  FUNC_4(1, "PTRACE_SETREGS");

 if (FUNC_8(VAR_3, VAR_10, 0, 0) != 0)
  FUNC_4(1, "PTRACE_SYSEMU");
 FUNC_10(VAR_10);

 if (FUNC_8(VAR_1, VAR_10, 0, &VAR_14) != 0)
  FUNC_4(1, "PTRACE_GETREGS");

 if (VAR_14.user_syscall_nr != VAR_7 ||
     VAR_14.user_arg0 != 10 || VAR_14.user_arg1 != 11 ||
     VAR_14.user_arg2 != 12 || VAR_14.user_arg3 != 13 ||
     VAR_14.user_arg4 != 14 || VAR_14.user_arg5 != 15) {
  FUNC_7("[FAIL]\tRestart nr or args are wrong (nr=%lu, args=%lu %lu %lu %lu %lu %lu)\n", (unsigned long)VAR_14.user_syscall_nr, (unsigned long)VAR_14.user_arg0, (unsigned long)VAR_14.user_arg1, (unsigned long)VAR_14.user_arg2, (unsigned long)VAR_14.user_arg3, (unsigned long)VAR_14.user_arg4, (unsigned long)VAR_14.user_arg5);
  VAR_9++;
 } else {
  FUNC_7("[OK]\tRestarted nr and args are correct\n");
 }

 FUNC_7("[RUN]\tChange nr and args and restart the syscall (ip = 0x%lx)\n",
        (unsigned long)VAR_14.user_ip);

 VAR_14.user_ax = VAR_6;
 VAR_14.user_arg0 = 20;
 VAR_14.user_arg1 = 21;
 VAR_14.user_arg2 = 22;
 VAR_14.user_arg3 = 23;
 VAR_14.user_arg4 = 24;
 VAR_14.user_arg5 = 25;
 VAR_14.user_ip -= 2;

 if (FUNC_8(VAR_2, VAR_10, 0, &VAR_14) != 0)
  FUNC_4(1, "PTRACE_SETREGS");

 if (FUNC_8(VAR_3, VAR_10, 0, 0) != 0)
  FUNC_4(1, "PTRACE_SYSEMU");
 FUNC_10(VAR_10);

 if (FUNC_8(VAR_1, VAR_10, 0, &VAR_14) != 0)
  FUNC_4(1, "PTRACE_GETREGS");

 if (VAR_14.user_syscall_nr != VAR_6 ||
     VAR_14.user_arg0 != 20 || VAR_14.user_arg1 != 21 || VAR_14.user_arg2 != 22 ||
     VAR_14.user_arg3 != 23 || VAR_14.user_arg4 != 24 || VAR_14.user_arg5 != 25) {
  FUNC_7("[FAIL]\tRestart nr or args are wrong (nr=%lu, args=%lu %lu %lu %lu %lu %lu)\n", (unsigned long)VAR_14.user_syscall_nr, (unsigned long)VAR_14.user_arg0, (unsigned long)VAR_14.user_arg1, (unsigned long)VAR_14.user_arg2, (unsigned long)VAR_14.user_arg3, (unsigned long)VAR_14.user_arg4, (unsigned long)VAR_14.user_arg5);
  VAR_9++;
 } else {
  FUNC_7("[OK]\tReplacement nr and args are correct\n");
 }

 if (FUNC_8(VAR_0, VAR_10, 0, 0) != 0)
  FUNC_4(1, "PTRACE_CONT");
 if (FUNC_11(VAR_10, &VAR_13, 0) != VAR_10)
  FUNC_4(1, "waitpid");
 if (!FUNC_1(VAR_13) || FUNC_0(VAR_13) != 0) {
  FUNC_7("[FAIL]\tChild failed\n");
  VAR_9++;
 } else {
  FUNC_7("[OK]\tChild exited cleanly\n");
 }
}
