
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long long* VAR_4 ;
 unsigned long long* VAR_5 ;
 int FUNC_0 (char*,int ,double,...) ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long long VAR_8 ;
 TYPE_1__* VAR_9 ;
 unsigned long long* VAR_10 ;
 unsigned long long* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long long FUNC_1 (int ,int ) ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_16, double *VAR_17,
       unsigned int VAR_18)
{
 unsigned long long VAR_19, VAR_20, VAR_21;
 unsigned long long VAR_22;

 if (!VAR_6[VAR_18])
  return -1;

 if (VAR_16 != VAR_0 && VAR_16 != VAR_1)
  return -1;

 VAR_20 = VAR_10[VAR_18] - VAR_11[VAR_18];
 VAR_19 = VAR_4[VAR_18] - VAR_5[VAR_18];

 if (VAR_7 == VAR_3) {
  VAR_21 = VAR_14 - VAR_15;
  *VAR_17 = 100.0 * VAR_20 / VAR_21;
  FUNC_0("%s: TSC Ref - mperf_diff: %llu, tsc_diff: %llu\n",
         VAR_9[VAR_16].name, VAR_20, VAR_21);
 } else if (VAR_7 == VAR_2) {
  VAR_22 = VAR_8 * FUNC_1(VAR_13, VAR_12);
  *VAR_17 = 100.0 * VAR_20 / VAR_22;
  FUNC_0("%s: MAXFREQ - mperf_diff: %llu, time_diff: %llu\n",
         VAR_9[VAR_16].name, VAR_20, VAR_22);
 } else
  return -1;

 if (VAR_16 == VAR_1)
  *VAR_17 = 100.0 - *VAR_17;

 FUNC_0("%s: previous: %llu - current: %llu - (%u)\n",
  VAR_9[VAR_16].name, VAR_20, VAR_19, VAR_18);
 FUNC_0("%s: %f\n", VAR_9[VAR_16].name, *VAR_17);
 return 0;
}
