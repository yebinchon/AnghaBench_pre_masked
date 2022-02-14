
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ,char*,scalar_t__) ;

int FUNC_10(int VAR_6, char *VAR_7[])
{
 int VAR_8 = -1, VAR_9 = VAR_1;
 char VAR_10[4096] = { 0 };
 pid_t VAR_11;
 int VAR_12, VAR_13;
 ssize_t VAR_14;

 VAR_11 = FUNC_4(VAR_0, &VAR_8);
 if (VAR_11 < 0)
  FUNC_1(VAR_9, "CLONE_PIDFD");
 if (VAR_8 == -1) {
  FUNC_8("CLONE_PIDFD is not supported by the kernel");
  goto out;
 }

 VAR_12 = FUNC_5(VAR_11, VAR_8);
 FUNC_0(VAR_8);
 if (VAR_12 < 0)
  goto out;

 VAR_13 = FUNC_3(VAR_12, "status", VAR_4 | VAR_3);
 FUNC_0(VAR_12);
 if (VAR_13 < 0)
  goto out;

 VAR_14 = FUNC_6(VAR_13, VAR_10, sizeof(VAR_10));
 if (VAR_14 > 0)
  VAR_14 = FUNC_9(VAR_5, VAR_10, VAR_14);
 FUNC_0(VAR_13);
 VAR_9 = VAR_2;

out:
 (void)FUNC_7(((void*)0));

 FUNC_2(VAR_9);
}
