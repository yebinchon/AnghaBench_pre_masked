
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int* current_tid; TYPE_1__* env; } ;
typedef int pid_t ;
struct TYPE_2__ {int nr_cpus_online; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

pid_t FUNC_1(struct machine *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->env->nr_cpus_online, VAR_0);

 if (VAR_2 < 0 || VAR_2 >= VAR_3 || !VAR_1->current_tid)
  return -1;

 return VAR_1->current_tid[VAR_2];
}
