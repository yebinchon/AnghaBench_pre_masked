
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuacct {int cpuusage; int cpustat; } ;
struct cgroup_subsys_state {int dummy; } ;


 struct cpuacct* FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cpuacct*) ;

__attribute__((used)) static void FUNC_3(struct cgroup_subsys_state *VAR_0)
{
 struct cpuacct *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->cpustat);
 FUNC_1(VAR_1->cpuusage);
 FUNC_2(VAR_1);
}
