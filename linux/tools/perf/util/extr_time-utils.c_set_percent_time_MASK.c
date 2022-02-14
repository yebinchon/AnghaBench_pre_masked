
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u64 ;
struct perf_time_interval {double start; double end; } ;


 double FUNC_0 (double) ;

__attribute__((used)) static int FUNC_1(struct perf_time_interval *VAR_0, double VAR_1,
       double VAR_2, u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5 = VAR_4 - VAR_3;

 if (VAR_1 < 0.0 || VAR_1 > 1.0 ||
     VAR_2 < 0.0 || VAR_2 > 1.0) {
  return -1;
 }

 VAR_0->start = VAR_3 + FUNC_0(VAR_1 * VAR_5);
 VAR_0->end = VAR_3 + FUNC_0(VAR_2 * VAR_5);

 if (VAR_0->end > VAR_0->start && VAR_0->end != VAR_4)
  VAR_0->end -= 1;

 return 0;
}
