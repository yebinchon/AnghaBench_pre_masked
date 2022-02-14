
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int idmap ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
 int VAR_3;
 uid_t VAR_4;
 gid_t VAR_5;

 char VAR_6[4096];

 VAR_4 = FUNC_1();
 VAR_5 = FUNC_0();

 VAR_3 = FUNC_8(VAR_0);
 if (VAR_3 < 0)
  FUNC_2("%s - Failed to unshare user namespace\n",
       FUNC_6(VAR_2));

 FUNC_9("/proc/self/setgroups", "deny", FUNC_7("deny"), VAR_1);

 VAR_3 = FUNC_5(VAR_6, sizeof(VAR_6), "0 %d 1", VAR_4);
 if (VAR_3 < 0 || (size_t)VAR_3 >= sizeof(VAR_6))
  FUNC_2("%s - Failed to prepare uid mapping\n",
       FUNC_6(VAR_2));

 FUNC_9("/proc/self/uid_map", VAR_6, FUNC_7(VAR_6), 0);

 VAR_3 = FUNC_5(VAR_6, sizeof(VAR_6), "0 %d 1", VAR_5);
 if (VAR_3 < 0 || (size_t)VAR_3 >= sizeof(VAR_6))
  FUNC_2("%s - Failed to prepare uid mapping\n",
       FUNC_6(VAR_2));

 FUNC_9("/proc/self/gid_map", VAR_6, FUNC_7(VAR_6), 0);

 VAR_3 = FUNC_3(0);
 if (VAR_3)
  FUNC_2("%s - Failed to setgid(0)\n",
       FUNC_6(VAR_2));

 VAR_3 = FUNC_4(0);
 if (VAR_3)
  FUNC_2("%s - Failed to setgid(0)\n",
       FUNC_6(VAR_2));
}
