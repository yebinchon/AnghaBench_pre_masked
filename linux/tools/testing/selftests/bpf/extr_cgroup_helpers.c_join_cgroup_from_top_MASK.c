
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int cgroup_procs_path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_6(char *VAR_2)
{
 char VAR_3[VAR_1 + 1];
 pid_t VAR_4 = FUNC_2();
 int VAR_5, VAR_6 = 0;

 FUNC_5(VAR_3, sizeof(VAR_3),
   "%s/cgroup.procs", VAR_2);

 VAR_5 = FUNC_4(VAR_3, VAR_0);
 if (VAR_5 < 0) {
  FUNC_3("Opening Cgroup Procs: %s", VAR_3);
  return 1;
 }

 if (FUNC_1(VAR_5, "%d\n", VAR_4) < 0) {
  FUNC_3("Joining Cgroup");
  VAR_6 = 1;
 }

 FUNC_0(VAR_5);
 return VAR_6;
}
