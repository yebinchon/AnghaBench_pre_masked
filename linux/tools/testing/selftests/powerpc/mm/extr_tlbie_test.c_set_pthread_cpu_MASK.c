
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int ,struct sched_param*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(pthread_t VAR_2, int VAR_3)
{
 cpu_set_t VAR_4;
 struct sched_param VAR_5;

 FUNC_1(&VAR_4);
 FUNC_0(VAR_3, &VAR_4);
 FUNC_3(VAR_2, sizeof(cpu_set_t), &VAR_4);

 VAR_5.sched_priority = 1;
 if (0 && FUNC_4(0, VAR_0, &VAR_5) == -1) {

  FUNC_2(VAR_1, "could not set SCHED_FIFO, run as root?\n");
 }
}
