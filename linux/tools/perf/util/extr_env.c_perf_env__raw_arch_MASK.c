
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {char const* arch; } ;


 int FUNC_0 (struct perf_env*) ;

const char *FUNC_1(struct perf_env *VAR_0)
{
 return VAR_0 && !FUNC_0(VAR_0) ? VAR_0->arch : "unknown";
}
