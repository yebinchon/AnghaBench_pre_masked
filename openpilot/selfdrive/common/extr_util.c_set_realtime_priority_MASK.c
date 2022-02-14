
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sched_param*,int ,int) ;
 int FUNC_1 (long,int ,struct sched_param*) ;
 long FUNC_2 (int ) ;

int FUNC_3(int VAR_2) {


  long VAR_3 = FUNC_2(VAR_1);


  struct sched_param VAR_4;
  FUNC_0(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.sched_priority = VAR_2;
  return FUNC_1(VAR_3, VAR_0, &VAR_4);

}
