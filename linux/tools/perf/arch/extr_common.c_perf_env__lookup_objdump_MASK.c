
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {int * arch; } ;


 int FUNC_0 (struct perf_env*,char*,char const**) ;

int FUNC_1(struct perf_env *VAR_0, const char **VAR_1)
{




 if (VAR_0->arch == ((void*)0))
  return 0;

 return FUNC_0(VAR_0, "objdump", VAR_1);
}
