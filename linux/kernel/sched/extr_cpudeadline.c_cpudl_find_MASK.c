
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_dl_entity {int deadline; } ;
struct task_struct {int cpus_ptr; struct sched_dl_entity dl; } ;
struct cpumask {int dummy; } ;
struct cpudl {TYPE_1__* elements; int free_cpus; } ;
struct TYPE_2__ {int dl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cpudl*) ;
 scalar_t__ FUNC_3 (struct cpumask*,int ,int ) ;
 int FUNC_4 (int,struct cpumask*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

int FUNC_7(struct cpudl *VAR_0, struct task_struct *VAR_1,
        struct cpumask *VAR_2)
{
 const struct sched_dl_entity *VAR_3 = &VAR_1->dl;

 if (VAR_2 &&
     FUNC_3(VAR_2, VAR_0->free_cpus, VAR_1->cpus_ptr)) {
  return 1;
 } else {
  int VAR_4 = FUNC_2(VAR_0);

  FUNC_0(VAR_4 != -1 && !FUNC_1(VAR_4));

  if (FUNC_5(VAR_4, VAR_1->cpus_ptr) &&
      FUNC_6(VAR_3->deadline, VAR_0->elements[0].dl)) {
   if (VAR_2)
    FUNC_4(VAR_4, VAR_2);

   return 1;
  }
 }
 return 0;
}
