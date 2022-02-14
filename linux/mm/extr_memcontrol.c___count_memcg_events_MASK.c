
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_cgroup {TYPE_2__* vmstats_percpu; int * vmevents; TYPE_1__* vmstats_local; } ;
typedef enum vm_event_item { ____Placeholder_vm_event_item } vm_event_item ;
struct TYPE_4__ {int * events; } ;
struct TYPE_3__ {int * events; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned long,int *) ;
 scalar_t__ FUNC_4 () ;
 struct mem_cgroup* FUNC_5 (struct mem_cgroup*) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct mem_cgroup *VAR_1, enum vm_event_item VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_4())
  return;

 VAR_4 = VAR_3 + FUNC_1(VAR_1->vmstats_percpu->events[VAR_2]);
 if (FUNC_6(VAR_4 > VAR_0)) {
  struct mem_cgroup *VAR_5;





  FUNC_0(VAR_1->vmstats_local->events[VAR_2], VAR_4);
  for (VAR_5 = VAR_1; VAR_5; VAR_5 = FUNC_5(VAR_5))
   FUNC_3(VAR_4, &VAR_5->vmevents[VAR_2]);
  VAR_4 = 0;
 }
 FUNC_2(VAR_1->vmstats_percpu->events[VAR_2], VAR_4);
}
