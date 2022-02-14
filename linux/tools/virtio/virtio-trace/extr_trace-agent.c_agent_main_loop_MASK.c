
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_info {int cpus; int ctl_fd; int * rw_ti; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct agent_info *VAR_2)
{
 int VAR_3;
 pthread_t VAR_4[VAR_1];


 for (VAR_3 = 0; VAR_3 < VAR_2->cpus; VAR_3++)
  VAR_4[VAR_3] = FUNC_4(VAR_2->rw_ti[VAR_3]);

 FUNC_3(VAR_2->ctl_fd);


 for (VAR_3 = 0; VAR_3 < VAR_2->cpus; VAR_3++) {
  int VAR_5;

  VAR_5 = FUNC_2(VAR_4[VAR_3], ((void*)0));
  if (VAR_5 != 0) {
   FUNC_1("pthread_join() error:%d (cpu %d)\n", VAR_5, VAR_3);
   FUNC_0(VAR_0);
  }
 }
}
