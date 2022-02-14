
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu_event_symbol {struct perf_pmu_event_symbol* symbol; } ;


 struct perf_pmu_event_symbol* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_pmu_event_symbol**) ;

__attribute__((used)) static void FUNC_1(void)
{
 if (VAR_1 > 0) {
  struct perf_pmu_event_symbol *VAR_2;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   VAR_2 = VAR_0 + VAR_3;
   FUNC_0(&VAR_2->symbol);
  }
  FUNC_0(&VAR_0);
  VAR_1 = 0;
 }
}
