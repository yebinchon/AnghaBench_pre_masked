
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*,int *,int,int *) ;
 scalar_t__ FUNC_11 (int ,int,int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (char*,char*,int ,...) ;

__attribute__((used)) static bool FUNC_16(uid_t VAR_11)
{
 uid_t VAR_12;
 gid_t VAR_13;
 int VAR_14;
 bool VAR_15;

 VAR_12 = FUNC_5();
 VAR_13 = FUNC_4();





 if (FUNC_14(VAR_5) == 0) {
  FUNC_8("[NOTE]\tUsing global UIDs for tests\n");
  if (FUNC_11(VAR_9, 1, 0, 0, 0) != 0)
   FUNC_6("PR_SET_KEEPCAPS - %s\n",
      FUNC_13(VAR_10));
  if (FUNC_12(VAR_11, VAR_11, -1) != 0)
   FUNC_6("setresuid - %s\n", FUNC_13(VAR_10));


  FUNC_1();
  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
   if (FUNC_2(VAR_2, VAR_14))
    FUNC_3(VAR_0, VAR_1, VAR_14);
  if (FUNC_0(VAR_3) != 0)
   FUNC_6(
     "capng_apply - %s\n", FUNC_13(VAR_10));

  VAR_15 = 1;
 } else if (FUNC_14(VAR_6 | VAR_5) == 0) {
  FUNC_8("[NOTE]\tUsing a user namespace for tests\n");
  FUNC_9("/proc/self/setgroups", "deny");
  FUNC_15("/proc/self/uid_map", "%d %d 1", VAR_11, VAR_12);
  FUNC_15("/proc/self/gid_map", "0 %d 1", VAR_13);

  VAR_15 = 0;
 } else {
  FUNC_7("must be root or be able to create a userns\n");
 }

 if (FUNC_10("none", "/", ((void*)0), VAR_8 | VAR_7, ((void*)0)) != 0)
  FUNC_6("remount everything private - %s\n",
     FUNC_13(VAR_10));

 return VAR_15;
}
