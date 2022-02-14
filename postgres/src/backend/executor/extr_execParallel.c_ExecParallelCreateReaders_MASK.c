
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleQueueReader ;
struct TYPE_7__ {int * tqueue; int ** reader; TYPE_2__* pcxt; } ;
struct TYPE_6__ {int nworkers_launched; TYPE_1__* worker; } ;
struct TYPE_5__ {int bgwhandle; } ;
typedef TYPE_3__ ParallelExecutorInfo ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(ParallelExecutorInfo *VAR_0)
{
 int VAR_1 = VAR_0->pcxt->nworkers_launched;
 int VAR_2;

 FUNC_0(VAR_0->reader == ((void*)0));

 if (VAR_1 > 0)
 {
  VAR_0->reader = (TupleQueueReader **)
   FUNC_2(VAR_1 * sizeof(TupleQueueReader *));

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  {
   FUNC_3(VAR_0->tqueue[VAR_2],
         VAR_0->pcxt->worker[VAR_2].bgwhandle);
   VAR_0->reader[VAR_2] = FUNC_1(VAR_0->tqueue[VAR_2]);
  }
 }
}
