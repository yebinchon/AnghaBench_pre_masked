
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pidbuf ;


 int FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

int FUNC_2(const char *VAR_0, int VAR_1)
{
 char VAR_2[64];

 FUNC_1(VAR_2, sizeof(VAR_2), "%d", VAR_1);
 return FUNC_0(VAR_0, "cgroup.procs", VAR_2);
}
