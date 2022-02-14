
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int ,struct sched_param*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(int VAR_2)
{
 cpu_set_t VAR_3;
 struct sched_param VAR_4;

 FUNC_1(&VAR_3);
 FUNC_0(VAR_2, &VAR_3);
 FUNC_3(0, sizeof(cpu_set_t), &VAR_3);

 VAR_4.sched_priority = 1;
 if (0 && FUNC_4(0, VAR_0, &VAR_4) == -1) {
  FUNC_2(VAR_1, "could not set SCHED_FIFO, run as root?\n");
 }
}
