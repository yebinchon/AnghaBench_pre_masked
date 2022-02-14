
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int shm_mq ;
struct TYPE_9__ {scalar_t__ last_xlog_end; } ;
struct TYPE_8__ {scalar_t__ nworkers_launched; scalar_t__ nworkers; int seg; TYPE_1__* worker; int toc; scalar_t__ nknown_attached_workers; int * known_attached_workers; } ;
struct TYPE_7__ {int error_mqh; } ;
typedef TYPE_2__ ParallelContext ;
typedef TYPE_3__ FixedParallelState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int ,int ,int) ;

void
FUNC_7(ParallelContext *VAR_4)
{
 FixedParallelState *VAR_5;


 if (VAR_4->nworkers_launched > 0)
 {
  FUNC_1(VAR_4);
  FUNC_0(VAR_4);
  VAR_4->nworkers_launched = 0;
  if (VAR_4->known_attached_workers)
  {
   FUNC_2(VAR_4->known_attached_workers);
   VAR_4->known_attached_workers = ((void*)0);
   VAR_4->nknown_attached_workers = 0;
  }
 }


 VAR_5 = FUNC_6(VAR_4->toc, VAR_3, 0);
 VAR_5->last_xlog_end = 0;


 if (VAR_4->nworkers > 0)
 {
  char *VAR_6;
  int VAR_7;

  VAR_6 =
   FUNC_6(VAR_4->toc, VAR_2, 0);
  for (VAR_7 = 0; VAR_7 < VAR_4->nworkers; ++VAR_7)
  {
   char *VAR_8;
   shm_mq *VAR_9;

   VAR_8 = VAR_6 + VAR_7 * VAR_1;
   VAR_9 = FUNC_4(VAR_8, VAR_1);
   FUNC_5(VAR_9, VAR_0);
   VAR_4->worker[VAR_7].error_mqh = FUNC_3(VAR_9, VAR_4->seg, ((void*)0));
  }
 }
}
