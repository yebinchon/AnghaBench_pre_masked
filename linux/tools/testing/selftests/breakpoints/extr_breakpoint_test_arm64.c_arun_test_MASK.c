
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_code; } ;
typedef TYPE_1__ siginfo_t ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int *,TYPE_1__*) ;
 int FUNC_10 (scalar_t__,int,int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int*,int ) ;

__attribute__((used)) static bool FUNC_13(int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;
 siginfo_t VAR_13;
 pid_t VAR_14 = FUNC_5();
 pid_t VAR_15;

 if (VAR_14 < 0) {
  FUNC_8(
   "fork() failed: %s\n", FUNC_11(VAR_7));
  return 0;
 }
 if (VAR_14 == 0)
  FUNC_4(VAR_8, VAR_10);

 VAR_15 = FUNC_12(VAR_14, &VAR_12, VAR_6);
 if (VAR_15 != VAR_14) {
  FUNC_7(
   "waitpid() failed: %s\n", FUNC_11(VAR_7));
  return 0;
 }
 if (!FUNC_1(VAR_12)) {
  FUNC_7(
   "child did not stop: %s\n", FUNC_11(VAR_7));
  return 0;
 }
 if (FUNC_2(VAR_12) != VAR_3) {
  FUNC_7("child did not stop with SIGSTOP\n");
  return 0;
 }

 if (!FUNC_10(VAR_14, VAR_9, VAR_11))
  return 0;

 if (FUNC_9(VAR_0, VAR_14, ((void*)0), ((void*)0)) < 0) {
  FUNC_7(
   "ptrace(PTRACE_SINGLESTEP) failed: %s\n",
   FUNC_11(VAR_7));
  return 0;
 }

 FUNC_3(3);
 VAR_15 = FUNC_12(VAR_14, &VAR_12, VAR_6);
 if (VAR_15 != VAR_14) {
  FUNC_7(
   "waitpid() failed: %s\n", FUNC_11(VAR_7));
  return 0;
 }
 FUNC_3(0);
 if (FUNC_0(VAR_12)) {
  FUNC_7("child did not single-step\n");
  return 0;
 }
 if (!FUNC_1(VAR_12)) {
  FUNC_7("child did not stop\n");
  return 0;
 }
 if (FUNC_2(VAR_12) != VAR_4) {
  FUNC_7("child did not stop with SIGTRAP\n");
  return 0;
 }
 if (FUNC_9(VAR_1, VAR_14, ((void*)0), &VAR_13) != 0) {
  FUNC_7(
   "ptrace(PTRACE_GETSIGINFO): %s\n",
   FUNC_11(VAR_7));
  return 0;
 }
 if (VAR_13.si_code != VAR_5) {
  FUNC_7(
   "Unexpected si_code %d\n", VAR_13.si_code);
  return 0;
 }

 FUNC_6(VAR_14, VAR_2);
 VAR_15 = FUNC_12(VAR_14, &VAR_12, 0);
 if (VAR_15 != VAR_14) {
  FUNC_7(
   "waitpid() failed: %s\n", FUNC_11(VAR_7));
  return 0;
 }
 return 1;
}
