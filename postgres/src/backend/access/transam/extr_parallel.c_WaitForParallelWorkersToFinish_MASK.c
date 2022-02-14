
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int shm_mq ;
typedef int pid_t ;
struct TYPE_8__ {scalar_t__ last_xlog_end; } ;
struct TYPE_7__ {int nworkers_launched; int * toc; TYPE_1__* worker; scalar_t__* known_attached_workers; } ;
struct TYPE_6__ {int * error_mqh; int * bgwhandle; } ;
typedef TYPE_2__ ParallelContext ;
typedef TYPE_3__ FixedParallelState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int,int,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (int *,int ,int) ;

void
FUNC_12(ParallelContext *VAR_9)
{
 for (;;)
 {
  bool VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12;






  FUNC_1();

  for (VAR_12 = 0; VAR_12 < VAR_9->nworkers_launched; ++VAR_12)
  {






   if (VAR_9->worker[VAR_12].error_mqh == ((void*)0))
    ++VAR_11;
   else if (VAR_9->known_attached_workers[VAR_12])
   {
    VAR_10 = 1;
    break;
   }
  }

  if (!VAR_10)
  {

   if (VAR_11 >= VAR_9->nworkers_launched)
   {
    FUNC_0(VAR_11 == VAR_9->nworkers_launched);
    break;
   }







   for (VAR_12 = 0; VAR_12 < VAR_9->nworkers_launched; ++VAR_12)
   {
    pid_t VAR_13;
    shm_mq *VAR_14;






    if (VAR_9->worker[VAR_12].error_mqh == ((void*)0) ||
     VAR_9->worker[VAR_12].bgwhandle == ((void*)0) ||
     FUNC_2(VAR_9->worker[VAR_12].bgwhandle,
             &VAR_13) != VAR_0)
     continue;
    VAR_14 = FUNC_9(VAR_9->worker[VAR_12].error_mqh);
    if (FUNC_10(VAR_14) == ((void*)0))
     FUNC_5(VAR_2,
       (FUNC_6(VAR_1),
        FUNC_8("parallel worker failed to initialize"),
        FUNC_7("More details may be available in the server log.")));
   }
  }

  (void) FUNC_4(VAR_3, VAR_7 | VAR_6, -1,
       VAR_5);
  FUNC_3(VAR_3);
 }

 if (VAR_9->toc != ((void*)0))
 {
  FixedParallelState *VAR_15;

  VAR_15 = FUNC_11(VAR_9->toc, VAR_4, 0);
  if (VAR_15->last_xlog_end > VAR_8)
   VAR_8 = VAR_15->last_xlog_end;
 }
}
