
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cpuacct_usage {int * usages; } ;
struct cpuacct {int cpuusage; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 struct cpuacct_usage* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cpuacct *VAR_1, int VAR_2, u64 VAR_3)
{
 struct cpuacct_usage *VAR_4 = FUNC_1(VAR_1->cpuusage, VAR_2);
 int VAR_5;





 FUNC_2(&FUNC_0(VAR_2)->lock);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4->usages[VAR_5] = VAR_3;


 FUNC_3(&FUNC_0(VAR_2)->lock);

}
