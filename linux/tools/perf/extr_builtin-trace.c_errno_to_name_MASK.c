
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {int dummy; } ;
struct evsel {int dummy; } ;


 char const* FUNC_0 (char const*,int) ;
 char* FUNC_1 (struct perf_env*) ;
 struct perf_env* FUNC_2 (struct evsel*) ;

__attribute__((used)) static const char *FUNC_3(struct evsel *VAR_0, int VAR_1)
{
 struct perf_env *VAR_2 = FUNC_2(VAR_0);
 const char *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3, VAR_1);
}
