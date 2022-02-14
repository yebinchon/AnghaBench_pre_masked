
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_sched {scalar_t__ run_measurement_overhead; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct perf_sched *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = FUNC_0(), VAR_3;

 do {
  VAR_3 = FUNC_0();
 } while (VAR_3 + VAR_0->run_measurement_overhead < VAR_2 + VAR_1);
}
