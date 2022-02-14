
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* machine; } ;
struct perf_env {char* arch; } ;


 char const* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct utsname*) ;

const char *FUNC_2(struct perf_env *VAR_0)
{
 struct utsname VAR_1;
 char *VAR_2;

 if (!VAR_0 || !VAR_0->arch) {
  if (FUNC_1(&VAR_1) < 0)
   return ((void*)0);
  VAR_2 = VAR_1.machine;
 } else
  VAR_2 = VAR_0->arch;

 return FUNC_0(VAR_2);
}
