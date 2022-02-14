
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nworkers_launched; } ;
struct TYPE_4__ {int finished; int * buffer_usage; TYPE_2__* pcxt; int * reader; int * tqueue; } ;
typedef TYPE_1__ ParallelExecutorInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5(ParallelExecutorInfo *VAR_0)
{
 int VAR_1 = VAR_0->pcxt->nworkers_launched;
 int VAR_2;


 if (VAR_0->finished)
  return;





 if (VAR_0->tqueue != ((void*)0))
 {
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   FUNC_4(VAR_0->tqueue[VAR_2]);
  FUNC_3(VAR_0->tqueue);
  VAR_0->tqueue = ((void*)0);
 }





 if (VAR_0->reader != ((void*)0))
 {
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   FUNC_0(VAR_0->reader[VAR_2]);
  FUNC_3(VAR_0->reader);
  VAR_0->reader = ((void*)0);
 }


 FUNC_2(VAR_0->pcxt);





 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_1(&VAR_0->buffer_usage[VAR_2]);

 VAR_0->finished = 1;
}
