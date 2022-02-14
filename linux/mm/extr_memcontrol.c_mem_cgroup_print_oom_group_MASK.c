
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cgroup; } ;
struct mem_cgroup {TYPE_1__ css; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct mem_cgroup *VAR_0)
{
 FUNC_2("Tasks in ");
 FUNC_1(VAR_0->css.cgroup);
 FUNC_0(" are going to be killed due to memory.oom.group set\n");
}
