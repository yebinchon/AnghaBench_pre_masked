
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_ino; } ;
typedef scalar_t__ pid_t ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int,char*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int,char*,scalar_t__) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *) ;

int FUNC_15(int VAR_8, char *VAR_9[])
{
 int VAR_10[2], VAR_11, VAR_12, VAR_13;
 struct stat VAR_14, VAR_15;
 char VAR_16[128];
 pid_t VAR_17;
 char VAR_18;

 if (FUNC_6(VAR_10))
  return 1;

 VAR_17 = FUNC_1();
 if (VAR_17 < 0)
  return FUNC_7("fork");
 if (VAR_17 == 0) {
  FUNC_8(VAR_5, VAR_6);
  if (FUNC_13(VAR_1 | VAR_0))
   return FUNC_7("unshare");
  FUNC_0(VAR_10[0]);
  FUNC_0(VAR_10[1]);
  while (1)
   FUNC_10(1);
  return 0;
 }
 FUNC_0(VAR_10[1]);
 if (FUNC_9(VAR_10[0], &VAR_18, 1) != 0)
  return FUNC_7("Unable to read from pipe");
 FUNC_0(VAR_10[0]);

 FUNC_11(VAR_16, sizeof(VAR_16), "/proc/%d/ns/uts", VAR_17);
 VAR_11 = FUNC_5(VAR_16, VAR_4);
 if (VAR_11 < 0)
  return FUNC_7("Unable to open %s", VAR_16);

 VAR_12 = FUNC_3(VAR_11, VAR_3);
 if (VAR_12 < 0)
  return FUNC_7("Unable to get an owning user namespace");

 if (FUNC_2(VAR_12, &VAR_14))
  return FUNC_7("fstat");

 FUNC_11(VAR_16, sizeof(VAR_16), "/proc/%d/ns/user", VAR_17);
 if (FUNC_12(VAR_16, &VAR_15))
  return FUNC_7("stat");

 if (VAR_14 != VAR_15)
  return FUNC_7("NS_GET_USERNS returned a wrong namespace");

 VAR_13 = FUNC_3(VAR_12, VAR_3);
 if (VAR_12 < 0)
  return FUNC_7("Unable to get an owning user namespace");

 if (FUNC_3(VAR_13, VAR_3) >= 0 || VAR_7 != VAR_2)
  return FUNC_7("Don't get EPERM");

 if (FUNC_13(VAR_0))
  return FUNC_7("unshare");

 if (FUNC_3(VAR_11, VAR_3) >= 0 || VAR_7 != VAR_2)
  return FUNC_7("Don't get EPERM");
 if (FUNC_3(VAR_13, VAR_3) >= 0 || VAR_7 != VAR_2)
  return FUNC_7("Don't get EPERM");

 FUNC_4(VAR_17, VAR_6);
 FUNC_14(((void*)0));
 return 0;
}
