
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,struct sched_param*) ;
 int VAR_1 ;

int FUNC_4(int VAR_2)
{
 struct sched_param VAR_3;

 FUNC_0("set scheduler priority to %i\n", VAR_2);

 VAR_3.sched_priority = VAR_2;

 if (FUNC_3(0, VAR_0, &VAR_3) < 0) {
  FUNC_2("sched_setscheduler");
  FUNC_1(VAR_1, "warning: unable to set scheduler priority\n");
  return -1;
 }

 return 0;
}
