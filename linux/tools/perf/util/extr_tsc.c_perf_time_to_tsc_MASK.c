
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_tsc_conversion {int time_zero; int time_mult; int time_shift; } ;



u64 FUNC_0(u64 VAR_0, struct perf_tsc_conversion *VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_0 - VAR_1->time_zero;
 VAR_3 = VAR_2 / VAR_1->time_mult;
 VAR_4 = VAR_2 % VAR_1->time_mult;
 return (VAR_3 << VAR_1->time_shift) +
        (VAR_4 << VAR_1->time_shift) / VAR_1->time_mult;
}
