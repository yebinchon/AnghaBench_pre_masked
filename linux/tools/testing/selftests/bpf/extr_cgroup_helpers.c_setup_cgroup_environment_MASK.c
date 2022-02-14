
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*,char*,char*,int,int *) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(void)
{
 char VAR_8[VAR_6 + 1];

 FUNC_2(VAR_8, "");

 if (FUNC_6(VAR_1)) {
  FUNC_3("unshare");
  return 1;
 }

 if (FUNC_5("none", "/", ((void*)0), VAR_5 | VAR_4, ((void*)0))) {
  FUNC_3("mount fakeroot");
  return 1;
 }

 if (FUNC_5("none", VAR_0, "cgroup2", 0, ((void*)0)) && VAR_7 != VAR_2) {
  FUNC_3("mount cgroup2");
  return 1;
 }


 FUNC_0();

 if (FUNC_4(VAR_8, 0777) && VAR_7 != VAR_3) {
  FUNC_3("mkdir cgroup work dir");
  return 1;
 }

 if (FUNC_1(VAR_8))
  return 1;

 return 0;
}
