
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_cgroup {TYPE_1__* vmstats_percpu; } ;
typedef enum mem_cgroup_events_target { ____Placeholder_mem_cgroup_events_target } mem_cgroup_events_target ;
struct TYPE_2__ {int * targets; int nr_page_events; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct mem_cgroup *VAR_3,
           enum mem_cgroup_events_target VAR_4)
{
 unsigned long VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3->vmstats_percpu->nr_page_events);
 VAR_6 = FUNC_0(VAR_3->vmstats_percpu->targets[VAR_4]);

 if ((long)(VAR_6 - VAR_5) < 0) {
  switch (VAR_4) {
  case 128:
   VAR_6 = VAR_5 + VAR_2;
   break;
  case 129:
   VAR_6 = VAR_5 + VAR_1;
   break;
  case 130:
   VAR_6 = VAR_5 + VAR_0;
   break;
  default:
   break;
  }
  FUNC_1(VAR_3->vmstats_percpu->targets[VAR_4], VAR_6);
  return 1;
 }
 return 0;
}
