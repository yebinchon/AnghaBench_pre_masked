
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_tsc_conversion {int time_shift; int time_zero; int time_mult; } ;



u64 FUNC_0(u64 VAR_0, struct perf_tsc_conversion *VAR_1)
{
 u64 VAR_2, VAR_3;

 VAR_2 = VAR_0 >> VAR_1->time_shift;
 VAR_3 = VAR_0 & (((u64)1 << VAR_1->time_shift) - 1);
 return VAR_1->time_zero + VAR_2 * VAR_1->time_mult +
        ((VAR_3 * VAR_1->time_mult) >> VAR_1->time_shift);
}
