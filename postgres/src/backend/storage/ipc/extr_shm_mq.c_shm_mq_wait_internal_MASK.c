
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mq_detached; int mq_mutex; } ;
typedef TYPE_1__ shm_mq ;
typedef int pid_t ;
typedef int PGPROC ;
typedef scalar_t__ BgwHandleStatus ;
typedef int BackgroundWorkerHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int,int ,int ) ;

__attribute__((used)) static bool
FUNC_6(shm_mq *VAR_6, PGPROC **VAR_7, BackgroundWorkerHandle *VAR_8)
{
 bool VAR_9 = 0;

 for (;;)
 {
  BgwHandleStatus VAR_10;
  pid_t VAR_11;


  FUNC_3(&VAR_6->mq_mutex);
  VAR_9 = (*VAR_7 != ((void*)0));
  FUNC_4(&VAR_6->mq_mutex);


  if (VAR_6->mq_detached)
  {
   VAR_9 = 0;
   break;
  }
  if (VAR_9)
   break;

  if (VAR_8 != ((void*)0))
  {

   VAR_10 = FUNC_1(VAR_8, &VAR_11);
   if (VAR_10 != VAR_1 && VAR_10 != VAR_0)
   {
    VAR_9 = 0;
    break;
   }
  }


  (void) FUNC_5(VAR_2, VAR_5 | VAR_4, 0,
       VAR_3);


  FUNC_2(VAR_2);


  FUNC_0();
 }

 return VAR_9;
}
