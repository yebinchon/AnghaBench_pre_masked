
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
 uid_t VAR_2;
 gid_t VAR_3;

 VAR_2 = FUNC_2();
 VAR_3 = FUNC_1();

 if (FUNC_7(VAR_0) !=0) {
  FUNC_0("unshare(CLONE_NEWUSER) failed: %s\n",
   FUNC_6(VAR_1));
 }

 FUNC_3("/proc/self/setgroups", "deny");
 FUNC_8("/proc/self/uid_map", "0 %d 1", VAR_2);
 FUNC_8("/proc/self/gid_map", "0 %d 1", VAR_3);

 if (FUNC_4(0) != 0) {
  FUNC_0 ("setgid(0) failed %s\n",
   FUNC_6(VAR_1));
 }
 if (FUNC_5(0) != 0) {
  FUNC_0("setuid(0) failed %s\n",
   FUNC_6(VAR_1));
 }
}
