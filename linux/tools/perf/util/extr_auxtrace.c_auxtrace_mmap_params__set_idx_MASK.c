
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ threads; TYPE_1__* cpus; } ;
struct evlist {TYPE_2__ core; } ;
struct auxtrace_mmap_params {int idx; int cpu; int tid; } ;
struct TYPE_3__ {int* map; } ;


 void* FUNC_0 (scalar_t__,int) ;

void FUNC_1(struct auxtrace_mmap_params *VAR_0,
       struct evlist *VAR_1, int VAR_2,
       bool VAR_3)
{
 VAR_0->idx = VAR_2;

 if (VAR_3) {
  VAR_0->cpu = VAR_1->core.cpus->map[VAR_2];
  if (VAR_1->core.threads)
   VAR_0->tid = FUNC_0(VAR_1->core.threads, 0);
  else
   VAR_0->tid = -1;
 } else {
  VAR_0->cpu = -1;
  VAR_0->tid = FUNC_0(VAR_1->core.threads, VAR_2);
 }
}
