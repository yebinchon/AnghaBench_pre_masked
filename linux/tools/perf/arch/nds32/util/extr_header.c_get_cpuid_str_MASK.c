
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int cpus; } ;
struct cpu_map {int nr; } ;


 int VAR_0 ;
 struct cpu_map* FUNC_0 (int ) ;
 int FUNC_1 (struct cpu_map*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 () ;

char *FUNC_5(struct perf_pmu *VAR_1)
{

 char *VAR_2 = ((void*)0);
 struct cpu_map *VAR_3;
 const char *VAR_4 = FUNC_4();

 if (!VAR_4 || !VAR_1 || !VAR_1->cpus)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1->cpus);
 FUNC_3(VAR_2, "0x%x", VAR_3->nr - 1);
 FUNC_1(VAR_3);
 return VAR_2;
}
