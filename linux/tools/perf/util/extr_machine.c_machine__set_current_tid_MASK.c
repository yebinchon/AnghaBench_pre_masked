
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int cpu; } ;
struct machine {int* current_tid; TYPE_1__* env; } ;
typedef int pid_t ;
struct TYPE_2__ {int nr_cpus_online; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int,int) ;
 struct thread* FUNC_1 (struct machine*,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct thread*) ;

int FUNC_5(struct machine *VAR_3, int VAR_4, pid_t VAR_5,
        pid_t VAR_6)
{
 struct thread *VAR_7;
 int VAR_8 = FUNC_2(VAR_3->env->nr_cpus_online, VAR_2);

 if (VAR_4 < 0)
  return -VAR_0;

 if (!VAR_3->current_tid) {
  int VAR_9;

  VAR_3->current_tid = FUNC_0(VAR_8, sizeof(pid_t));
  if (!VAR_3->current_tid)
   return -VAR_1;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   VAR_3->current_tid[VAR_9] = -1;
 }

 if (VAR_4 >= VAR_8) {
  FUNC_3("Requested CPU %d too large. ", VAR_4);
  FUNC_3("Consider raising MAX_NR_CPUS\n");
  return -VAR_0;
 }

 VAR_3->current_tid[VAR_4] = VAR_6;

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->cpu = VAR_4;
 FUNC_4(VAR_7);

 return 0;
}
