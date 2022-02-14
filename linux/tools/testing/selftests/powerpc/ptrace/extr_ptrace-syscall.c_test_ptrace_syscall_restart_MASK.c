
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ user_syscall_nr; int user_arg0; int user_arg1; int user_arg2; int user_arg3; int user_arg4; int user_arg5; scalar_t__ user_ip; } ;
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
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,struct pt_regs*) ;
 scalar_t__ FUNC_9 (scalar_t__,...) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_12(void)
{
 int VAR_10;
 struct pt_regs VAR_11;
 pid_t VAR_12;

 FUNC_7("[RUN]\tptrace-induced syscall restart\n");

 VAR_12 = FUNC_5();
 if (VAR_12 < 0)
  FUNC_4(1, "fork");
 if (VAR_12 == 0) {
  if (FUNC_8(VAR_4, 0, 0, 0) != 0)
   FUNC_4(1, "PTRACE_TRACEME");

  pid_t VAR_13 = FUNC_6(), VAR_14 = FUNC_9(VAR_7);

  FUNC_7("\tChild will make one syscall\n");
  FUNC_9(VAR_8, VAR_13, VAR_14, VAR_5);

  FUNC_9(VAR_7, 10, 11, 12, 13, 14, 15);
  FUNC_3(0);
 }



 if (FUNC_11(VAR_12, &VAR_10, 0) != VAR_12 || !FUNC_2(VAR_10))
  FUNC_4(1, "waitpid");

 FUNC_7("[RUN]\tSYSEMU\n");
 if (FUNC_8(VAR_3, VAR_12, 0, 0) != 0)
  FUNC_4(1, "PTRACE_SYSEMU");
 FUNC_10(VAR_12);

 if (FUNC_8(VAR_1, VAR_12, 0, &VAR_11) != 0)
  FUNC_4(1, "PTRACE_GETREGS");





 if (VAR_11.user_syscall_nr != VAR_7 ||
     VAR_11.user_arg0 != 10 || VAR_11.user_arg1 != 11 ||
     VAR_11.user_arg2 != 12 || VAR_11.user_arg3 != 13 ||
     VAR_11.user_arg4 != 14 || VAR_11.user_arg5 != 15) {
  FUNC_7("[FAIL]\tInitial args are wrong (nr=%lu, args=%lu %lu %lu %lu %lu %lu)\n",
   (unsigned long)VAR_11.user_syscall_nr,
   (unsigned long)VAR_11.user_arg0,
   (unsigned long)VAR_11.user_arg1,
   (unsigned long)VAR_11.user_arg2,
   (unsigned long)VAR_11.user_arg3,
   (unsigned long)VAR_11.user_arg4,
   (unsigned long)VAR_11.user_arg5);
   VAR_9++;
 } else {
  FUNC_7("[OK]\tInitial nr and args are correct\n"); }

 FUNC_7("[RUN]\tRestart the syscall (ip = 0x%lx)\n",
        (unsigned long)VAR_11.user_ip);





 VAR_11.user_ip -= 4;
 if (FUNC_8(VAR_2, VAR_12, 0, &VAR_11) != 0)
  FUNC_4(1, "PTRACE_SETREGS");

 if (FUNC_8(VAR_3, VAR_12, 0, 0) != 0)
  FUNC_4(1, "PTRACE_SYSEMU");
 FUNC_10(VAR_12);

 if (FUNC_8(VAR_1, VAR_12, 0, &VAR_11) != 0)
  FUNC_4(1, "PTRACE_GETREGS");

 if (VAR_11.user_syscall_nr != VAR_7 ||
     VAR_11.user_arg0 != 10 || VAR_11.user_arg1 != 11 ||
     VAR_11.user_arg2 != 12 || VAR_11.user_arg3 != 13 ||
     VAR_11.user_arg4 != 14 || VAR_11.user_arg5 != 15) {
  FUNC_7("[FAIL]\tRestart nr or args are wrong (nr=%lu, args=%lu %lu %lu %lu %lu %lu)\n",
   (unsigned long)VAR_11.user_syscall_nr,
   (unsigned long)VAR_11.user_arg0,
   (unsigned long)VAR_11.user_arg1,
   (unsigned long)VAR_11.user_arg2,
   (unsigned long)VAR_11.user_arg3,
   (unsigned long)VAR_11.user_arg4,
   (unsigned long)VAR_11.user_arg5);
  VAR_9++;
 } else {
  FUNC_7("[OK]\tRestarted nr and args are correct\n");
 }

 FUNC_7("[RUN]\tChange nr and args and restart the syscall (ip = 0x%lx)\n",
        (unsigned long)VAR_11.user_ip);





 VAR_11.user_syscall_nr = VAR_6;
 VAR_11.user_arg0 = 20;
 VAR_11.user_arg1 = 21;
 VAR_11.user_arg2 = 22;
 VAR_11.user_arg3 = 23;
 VAR_11.user_arg4 = 24;
 VAR_11.user_arg5 = 25;
 VAR_11.user_ip -= 4;

 if (FUNC_8(VAR_2, VAR_12, 0, &VAR_11) != 0)
  FUNC_4(1, "PTRACE_SETREGS");

 if (FUNC_8(VAR_3, VAR_12, 0, 0) != 0)
  FUNC_4(1, "PTRACE_SYSEMU");
 FUNC_10(VAR_12);

 if (FUNC_8(VAR_1, VAR_12, 0, &VAR_11) != 0)
  FUNC_4(1, "PTRACE_GETREGS");






 if (VAR_11.user_syscall_nr != VAR_6
  || VAR_11.user_arg0 != 20 || VAR_11.user_arg1 != 21
  || VAR_11.user_arg2 != 22 || VAR_11.user_arg3 != 23
  || VAR_11.user_arg4 != 24 || VAR_11.user_arg5 != 25) {

  FUNC_7("[FAIL]\tRestart nr or args are wrong (nr=%lu, args=%lu %lu %lu %lu %lu %lu)\n",
   (unsigned long)VAR_11.user_syscall_nr,
   (unsigned long)VAR_11.user_arg0,
   (unsigned long)VAR_11.user_arg1,
   (unsigned long)VAR_11.user_arg2,
   (unsigned long)VAR_11.user_arg3,
   (unsigned long)VAR_11.user_arg4,
   (unsigned long)VAR_11.user_arg5);
  VAR_9++;
 } else {
  FUNC_7("[OK]\tReplacement nr and args are correct\n");
 }

 if (FUNC_8(VAR_0, VAR_12, 0, 0) != 0)
  FUNC_4(1, "PTRACE_CONT");

 if (FUNC_11(VAR_12, &VAR_10, 0) != VAR_12)
  FUNC_4(1, "waitpid");


 if (!FUNC_1(VAR_10) || FUNC_0(VAR_10) != 0) {
  FUNC_7("[FAIL]\tChild failed\n");
  VAR_9++;
 } else {
  FUNC_7("[OK]\tChild exited cleanly\n");
 }
}
