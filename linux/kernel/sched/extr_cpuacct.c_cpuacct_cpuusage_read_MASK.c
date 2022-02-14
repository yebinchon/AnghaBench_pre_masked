
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct cpuacct_usage {scalar_t__* usages; } ;
struct cpuacct {int cpuusage; } ;
typedef enum cpuacct_stat_index { ____Placeholder_cpuacct_stat_index } cpuacct_stat_index ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 struct cpuacct_usage* FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u64 FUNC_5(struct cpuacct *VAR_1, int VAR_2,
     enum cpuacct_stat_index VAR_3)
{
 struct cpuacct_usage *VAR_4 = FUNC_2(VAR_1->cpuusage, VAR_2);
 u64 VAR_5;





 FUNC_0(VAR_3 > VAR_0);





 FUNC_3(&FUNC_1(VAR_2)->lock);


 if (VAR_3 == VAR_0) {
  int VAR_6 = 0;

  VAR_5 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_5 += VAR_4->usages[VAR_6];
 } else {
  VAR_5 = VAR_4->usages[VAR_3];
 }


 FUNC_4(&FUNC_1(VAR_2)->lock);


 return VAR_5;
}
