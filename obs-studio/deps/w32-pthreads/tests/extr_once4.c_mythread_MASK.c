
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
struct TYPE_3__ {int myPrio; int threadnum; size_t oncenum; int w32Thread; } ;
typedef TYPE_1__ bag_t ;
struct TYPE_4__ {int cs; int i; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,struct sched_param*) ;

void *
FUNC_10(void * VAR_5)
{
  bag_t * VAR_6 = (bag_t *) VAR_5;
  struct sched_param VAR_7;







  pthread_t VAR_8 = FUNC_8();
  VAR_6->w32Thread = FUNC_6(VAR_8);



  VAR_6->myPrio = (VAR_6->threadnum % 5) - 2;
  VAR_7.sched_priority = VAR_6->myPrio;
  FUNC_9(VAR_8, VAR_0, &VAR_7);


  FUNC_3(VAR_8);





  FUNC_2(FUNC_7(&VAR_4[VAR_6->oncenum], VAR_2) == 0);

  FUNC_0(&VAR_3.cs);
  VAR_3.i++;
  FUNC_1(&VAR_3.cs);
  return 0;
}
