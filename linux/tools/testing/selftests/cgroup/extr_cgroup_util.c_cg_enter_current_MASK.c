
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pidbuf ;


 int FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int) ;

int FUNC_3(const char *VAR_0)
{
 char VAR_1[64];

 FUNC_2(VAR_1, sizeof(VAR_1), "%d", FUNC_1());
 return FUNC_0(VAR_0, "cgroup.procs", VAR_1);
}
