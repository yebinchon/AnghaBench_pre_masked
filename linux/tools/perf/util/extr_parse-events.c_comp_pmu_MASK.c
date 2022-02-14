
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu_event_symbol {int symbol; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct perf_pmu_event_symbol *VAR_2 = (struct perf_pmu_event_symbol *) VAR_0;
 struct perf_pmu_event_symbol *VAR_3 = (struct perf_pmu_event_symbol *) VAR_1;

 return FUNC_0(VAR_2->symbol, VAR_3->symbol);
}
