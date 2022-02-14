
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 struct perf_cpu_map* FUNC_2 (int *) ;

__attribute__((used)) static struct perf_cpu_map *FUNC_3(const char *VAR_0)
{
 FILE *VAR_1;
 struct perf_cpu_map *VAR_2;

 VAR_1 = FUNC_1(VAR_0, "r");
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 return VAR_2;
}
