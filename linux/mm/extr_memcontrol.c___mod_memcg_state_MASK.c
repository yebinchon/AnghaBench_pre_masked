
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_cgroup {TYPE_2__* vmstats_percpu; int * vmstats; TYPE_1__* vmstats_local; } ;
struct TYPE_4__ {int * stat; } ;
struct TYPE_3__ {int * stat; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,long) ;
 scalar_t__ FUNC_3 (long) ;
 int FUNC_4 (long,int *) ;
 scalar_t__ FUNC_5 () ;
 struct mem_cgroup* FUNC_6 (struct mem_cgroup*) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct mem_cgroup *VAR_1, int VAR_2, int VAR_3)
{
 long VAR_4;

 if (FUNC_5())
  return;

 VAR_4 = VAR_3 + FUNC_1(VAR_1->vmstats_percpu->stat[VAR_2]);
 if (FUNC_7(FUNC_3(VAR_4) > VAR_0)) {
  struct mem_cgroup *VAR_5;





  FUNC_0(VAR_1->vmstats_local->stat[VAR_2], VAR_4);
  for (VAR_5 = VAR_1; VAR_5; VAR_5 = FUNC_6(VAR_5))
   FUNC_4(VAR_4, &VAR_5->vmstats[VAR_2]);
  VAR_4 = 0;
 }
 FUNC_2(VAR_1->vmstats_percpu->stat[VAR_2], VAR_4);
}
