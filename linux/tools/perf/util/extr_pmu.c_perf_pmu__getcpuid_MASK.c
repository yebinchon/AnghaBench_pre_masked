
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int dummy; } ;


 char* FUNC_0 (struct perf_pmu*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(struct perf_pmu *VAR_0)
{
 char *VAR_1;
 static bool VAR_2;

 VAR_1 = FUNC_1("PERF_CPUID");
 if (VAR_1)
  VAR_1 = FUNC_3(VAR_1);
 if (!VAR_1)
  VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (!VAR_2) {
  FUNC_2("Using CPUID %s\n", VAR_1);
  VAR_2 = 1;
 }
 return VAR_1;
}
