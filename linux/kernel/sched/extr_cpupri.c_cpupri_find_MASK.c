
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int cpus_ptr; int prio; } ;
struct cpupri_vec {int mask; int count; } ;
struct cpupri {struct cpupri_vec* pri_to_cpu; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpumask*,int ,int ) ;
 scalar_t__ FUNC_4 (struct cpumask*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 () ;

int FUNC_7(struct cpupri *VAR_2, struct task_struct *VAR_3,
  struct cpumask *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = FUNC_2(VAR_3->prio);

 FUNC_0(VAR_6 >= VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  struct cpupri_vec *VAR_7 = &VAR_2->pri_to_cpu[VAR_5];
  int VAR_8 = 0;

  if (!FUNC_1(&(VAR_7)->count))
   VAR_8 = 1;
  FUNC_6();


  if (VAR_8)
   continue;

  if (FUNC_5(VAR_3->cpus_ptr, VAR_7->mask) >= VAR_1)
   continue;

  if (VAR_4) {
   FUNC_3(VAR_4, VAR_3->cpus_ptr, VAR_7->mask);
   if (FUNC_4(VAR_4) >= VAR_1)
    continue;
  }

  return 1;
 }

 return 0;
}
