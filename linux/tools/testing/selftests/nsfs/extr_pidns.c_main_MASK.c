
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_ino; } ;
struct cr_clone_arg {int stack_ptr; } ;
typedef scalar_t__ pid_t ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (int *) ;

int FUNC_9(int VAR_9, char *VAR_10[])
{
 char *VAR_11[] = {"pid", "user"};
 char VAR_12[] = "/proc/0123456789/ns/pid";
 struct cr_clone_arg VAR_13;
 struct stat VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 pid_t VAR_19;

 VAR_19 = FUNC_0(VAR_7, VAR_13.stack_ptr, VAR_1 | VAR_0 | VAR_5, ((void*)0));
 if (VAR_19 < 0)
  return FUNC_5("clone");

 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  FUNC_6(VAR_12, sizeof(VAR_12), "/proc/%d/ns/%s", VAR_19, VAR_11[VAR_18]);
  VAR_16 = FUNC_4(VAR_12, VAR_4);
  if (VAR_16 < 0)
   return FUNC_5("Unable to open %s", VAR_12);

  VAR_17 = FUNC_2(VAR_16, VAR_3);
  if (VAR_17 < 0)
   return FUNC_5("Unable to get a parent pidns");

  FUNC_6(VAR_12, sizeof(VAR_12), "/proc/self/ns/%s", VAR_11[VAR_18]);
  if (FUNC_7(VAR_12, &VAR_15))
   return FUNC_5("Unable to stat %s", VAR_12);
  if (FUNC_1(VAR_17, &VAR_14))
   return FUNC_5("Unable to stat the parent pidns");
  if (VAR_14 != VAR_15)
   return FUNC_5("NS_GET_PARENT returned a wrong namespace");

  if (FUNC_2(VAR_17, VAR_3) >= 0 || VAR_8 != VAR_2)
   return FUNC_5("Don't get EPERM");
 }

 FUNC_3(VAR_19, VAR_6);
 FUNC_8(((void*)0));
 return 0;
}
