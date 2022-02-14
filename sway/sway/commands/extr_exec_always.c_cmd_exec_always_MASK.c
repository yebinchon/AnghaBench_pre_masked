
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct cmd_results {int dummy; } ;
typedef int ssize_t ;
typedef int sigset_t ;
typedef scalar_t__ pid_t ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ validating; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 int FUNC_2 (int) ;
 struct cmd_results* FUNC_3 (int ,char*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_4 (char*,char*,char*,char*,void*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char**,int) ;
 scalar_t__ FUNC_8 (int*) ;
 int FUNC_9 (int,int *,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *,int *) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (scalar_t__,int *,int ) ;
 int FUNC_20 (int,int *,int) ;

struct cmd_results *FUNC_21(int VAR_9, char **VAR_10) {
 struct cmd_results *VAR_11 = ((void*)0);
 if (!VAR_8->active || VAR_8->validating) {
  return FUNC_3(VAR_0, ((void*)0));
 }
 if ((VAR_11 = FUNC_1(VAR_9, VAR_10[-1], VAR_3, 1))) {
  return VAR_11;
 }

 char *VAR_12 = ((void*)0);
 if (FUNC_14(VAR_10[0], "--no-startup-id") == 0) {
  FUNC_18(VAR_7, "exec switch '--no-startup-id' not supported, ignored.");
  --VAR_9; ++VAR_10;
  if ((VAR_11 = FUNC_1(VAR_9, VAR_10[-1], VAR_3, 1))) {
   return VAR_11;
  }
 }

 if (VAR_9 == 1 && (VAR_10[0][0] == '\'' || VAR_10[0][0] == '"')) {
  VAR_12 = FUNC_15(VAR_10[0]);
  FUNC_16(VAR_12);
 } else {
  VAR_12 = FUNC_7(VAR_10, VAR_9);
 }


 char VAR_13[4096];
 FUNC_17(VAR_13, VAR_12, sizeof(VAR_13) - 1);
 VAR_13[sizeof(VAR_13) - 1] = 0;
 FUNC_6(VAR_12);
 FUNC_18(VAR_5, "Executing %s", VAR_13);

 int VAR_14[2];
 if (FUNC_8(VAR_14) != 0) {
  FUNC_18(VAR_6, "Unable to create pipe for fork");
 }

 pid_t VAR_15, VAR_16;

 if ((VAR_15 = FUNC_5()) == 0) {

  FUNC_11();
  sigset_t VAR_17;
  FUNC_12(&VAR_17);
  FUNC_13(VAR_4, &VAR_17, ((void*)0));
  FUNC_2(VAR_14[0]);
  if ((VAR_16 = FUNC_5()) == 0) {
   FUNC_2(VAR_14[1]);
   FUNC_4("/bin/sh", "/bin/sh", "-c", VAR_13, (void *)((void*)0));
   FUNC_0(0);
  }
  ssize_t VAR_18 = 0;
  while ((size_t)VAR_18 < sizeof(pid_t)) {
   VAR_18 += FUNC_20(VAR_14[1], ((uint8_t *)&VAR_16) + VAR_18, sizeof(pid_t) - VAR_18);
  }
  FUNC_2(VAR_14[1]);
  FUNC_0(0);
 } else if (VAR_15 < 0) {
  FUNC_2(VAR_14[0]);
  FUNC_2(VAR_14[1]);
  return FUNC_3(VAR_1, "fork() failed");
 }
 FUNC_2(VAR_14[1]);
 ssize_t VAR_19 = 0;
 while ((size_t)VAR_19 < sizeof(pid_t)) {
  VAR_19 += FUNC_9(VAR_14[0], ((uint8_t *)&VAR_16) + VAR_19, sizeof(pid_t) - VAR_19);
 }
 FUNC_2(VAR_14[0]);

 FUNC_19(VAR_15, ((void*)0), 0);
 if (VAR_16 > 0) {
  FUNC_18(VAR_5, "Child process created with pid %d", VAR_16);
  FUNC_10(VAR_16);
 } else {
  return FUNC_3(VAR_1, "Second fork() failed");
 }

 return FUNC_3(VAR_2, ((void*)0));
}
