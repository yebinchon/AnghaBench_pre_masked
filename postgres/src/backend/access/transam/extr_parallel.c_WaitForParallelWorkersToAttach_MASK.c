
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int shm_mq ;
typedef int pid_t ;
struct TYPE_5__ {int nworkers_launched; int* known_attached_workers; int nknown_attached_workers; TYPE_1__* worker; } ;
struct TYPE_4__ {int * error_mqh; int bgwhandle; } ;
typedef TYPE_2__ ParallelContext ;
typedef scalar_t__ BgwHandleStatus ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

void
FUNC_11(ParallelContext *VAR_8)
{
 int VAR_9;


 if (VAR_8->nworkers_launched == 0)
  return;

 for (;;)
 {




  FUNC_1();

  for (VAR_9 = 0; VAR_9 < VAR_8->nworkers_launched; ++VAR_9)
  {
   BgwHandleStatus VAR_10;
   shm_mq *VAR_11;
   int VAR_12;
   pid_t VAR_13;

   if (VAR_8->known_attached_workers[VAR_9])
    continue;





   if (VAR_8->worker[VAR_9].error_mqh == ((void*)0))
   {
    VAR_8->known_attached_workers[VAR_9] = 1;
    ++VAR_8->nknown_attached_workers;
    continue;
   }

   VAR_10 = FUNC_2(VAR_8->worker[VAR_9].bgwhandle, &VAR_13);
   if (VAR_10 == VAR_0)
   {

    VAR_11 = FUNC_9(VAR_8->worker[VAR_9].error_mqh);
    if (FUNC_10(VAR_11) != ((void*)0))
    {

     VAR_8->known_attached_workers[VAR_9] = 1;
     ++VAR_8->nknown_attached_workers;
    }
   }
   else if (VAR_10 == VAR_1)
   {




    VAR_11 = FUNC_9(VAR_8->worker[VAR_9].error_mqh);
    if (FUNC_10(VAR_11) == ((void*)0))
     FUNC_5(VAR_3,
       (FUNC_6(VAR_2),
        FUNC_8("parallel worker failed to initialize"),
        FUNC_7("More details may be available in the server log.")));

    VAR_8->known_attached_workers[VAR_9] = 1;
    ++VAR_8->nknown_attached_workers;
   }
   else
   {






    VAR_12 = FUNC_4(VAR_4,
          VAR_7 | VAR_6,
          -1, VAR_5);

    if (VAR_12 & VAR_7)
     FUNC_3(VAR_4);
   }
  }


  if (VAR_8->nknown_attached_workers >= VAR_8->nworkers_launched)
  {
   FUNC_0(VAR_8->nknown_attached_workers == VAR_8->nworkers_launched);
   break;
  }
 }
}
