
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct perf_cpu_map*,char*,int) ;
 struct perf_cpu_map* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0)
{
 struct perf_cpu_map *VAR_1 = FUNC_1(VAR_0);
 char VAR_2[100];

 if (!VAR_1)
  return -1;

 FUNC_0(VAR_1, VAR_2, sizeof(VAR_2));
 return !FUNC_2(VAR_2, VAR_0);
}
