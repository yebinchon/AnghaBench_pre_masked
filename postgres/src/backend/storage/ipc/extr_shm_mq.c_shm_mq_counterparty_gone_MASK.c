
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mq_detached; } ;
typedef TYPE_1__ shm_mq ;
typedef int pid_t ;
typedef scalar_t__ BgwHandleStatus ;
typedef int BackgroundWorkerHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1(shm_mq *VAR_2, BackgroundWorkerHandle *VAR_3)
{
 pid_t VAR_4;


 if (VAR_2->mq_detached)
  return 1;


 if (VAR_3 != ((void*)0))
 {
  BgwHandleStatus VAR_5;


  VAR_5 = FUNC_0(VAR_3, &VAR_4);
  if (VAR_5 != VAR_1 && VAR_5 != VAR_0)
  {

   VAR_2->mq_detached = 1;
   return 1;
  }
 }


 return 0;
}
