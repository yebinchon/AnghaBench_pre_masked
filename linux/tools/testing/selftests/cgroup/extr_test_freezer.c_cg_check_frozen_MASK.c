
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  if (FUNC_0(VAR_0, "cgroup.events", "frozen 1") != 0) {
   FUNC_1("Cgroup %s isn't frozen\n", VAR_0);
   return -1;
  }
 } else {



  if (FUNC_0(VAR_0, "cgroup.events", "frozen 0") != 0) {
   FUNC_1("Cgroup %s is frozen\n", VAR_0);
   return -1;
  }
 }

 return 0;
}
