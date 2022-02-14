
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long* VAR_2 ;
 unsigned long long* VAR_3 ;
 int FUNC_0 (char*,unsigned long long,...) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 double VAR_6 ;
 TYPE_1__* VAR_7 ;
 unsigned long long* VAR_8 ;
 unsigned long long* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long long FUNC_1 (int ,int ) ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_14, unsigned long long *VAR_15,
    unsigned int VAR_16)
{
 unsigned long long VAR_17, VAR_18, VAR_19, VAR_20;

 if (VAR_14 != VAR_0)
  return 1;

 if (!VAR_4[VAR_16])
  return -1;

 VAR_18 = VAR_8[VAR_16] - VAR_9[VAR_16];
 VAR_17 = VAR_2[VAR_16] - VAR_3[VAR_16];

 if (VAR_5 == VAR_1) {

  VAR_20 = VAR_12 - VAR_13;
  VAR_19 = FUNC_1(VAR_11, VAR_10);
  VAR_6 = VAR_20 / VAR_19;
 }

 *VAR_15 = VAR_6 * ((double)VAR_17 / VAR_18);
 FUNC_0("%s: Average freq based on %s maximum frequency:\n",
        VAR_7[VAR_14].name,
        (VAR_5 == VAR_1) ? "TSC calculated" : "sysfs read");
 FUNC_0("max_frequency: %lu\n", VAR_6);
 FUNC_0("aperf_diff: %llu\n", VAR_17);
 FUNC_0("mperf_diff: %llu\n", VAR_18);
 FUNC_0("avg freq:   %llu\n", *VAR_15);
 return 0;
}
