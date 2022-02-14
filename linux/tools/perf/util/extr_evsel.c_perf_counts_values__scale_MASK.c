
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_counts_values {double run; double ena; scalar_t__ val; } ;
typedef int s8 ;



void FUNC_0(struct perf_counts_values *VAR_0,
          bool VAR_1, s8 *VAR_2)
{
 s8 VAR_3 = 0;

 if (VAR_1) {
  if (VAR_0->run == 0) {
   VAR_3 = -1;
   VAR_0->val = 0;
  } else if (VAR_0->run < VAR_0->ena) {
   VAR_3 = 1;
   VAR_0->val = (u64)((double) VAR_0->val * VAR_0->ena / VAR_0->run);
  }
 }

 if (VAR_2)
  *VAR_2 = VAR_3;
}
