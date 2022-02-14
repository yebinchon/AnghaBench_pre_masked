
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nTuples; int readCounter; int * tuple; int done; } ;
struct TYPE_5__ {TYPE_2__* gm_tuple_buffers; } ;
typedef int HeapTuple ;
typedef TYPE_1__ GatherMergeState ;
typedef TYPE_2__ GMReaderTupleBuffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int,int *) ;

__attribute__((used)) static void
FUNC_2(GatherMergeState *VAR_1, int VAR_2)
{
 GMReaderTupleBuffer *VAR_3;
 int VAR_4;


 if (VAR_2 == 0)
  return;

 VAR_3 = &VAR_1->gm_tuple_buffers[VAR_2 - 1];


 if (VAR_3->nTuples == VAR_3->readCounter)
  VAR_3->nTuples = VAR_3->readCounter = 0;


 for (VAR_4 = VAR_3->nTuples; VAR_4 < VAR_0; VAR_4++)
 {
  HeapTuple VAR_5;

  VAR_5 = FUNC_1(VAR_1,
          VAR_2,
          1,
          &VAR_3->done);
  if (!FUNC_0(VAR_5))
   break;
  VAR_3->tuple[VAR_4] = VAR_5;
  VAR_3->nTuples++;
 }
}
