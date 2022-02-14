
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 10; VAR_1 > 0; VAR_1--) {
  if (FUNC_0(VAR_0, "cgroup.procs", "") == 0)
   return 0;

  FUNC_1(100000);
 }
 return -1;
}
