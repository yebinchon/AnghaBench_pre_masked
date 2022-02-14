
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ readCounter; scalar_t__ nTuples; int * tuple; } ;
struct TYPE_4__ {int nreaders; int * gm_slots; TYPE_2__* gm_tuple_buffers; } ;
typedef TYPE_1__ GatherMergeState ;
typedef TYPE_2__ GMReaderTupleBuffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(GatherMergeState *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nreaders; VAR_1++)
 {
  GMReaderTupleBuffer *VAR_2 = &VAR_0->gm_tuple_buffers[VAR_1];

  while (VAR_2->readCounter < VAR_2->nTuples)
   FUNC_1(VAR_2->tuple[VAR_2->readCounter++]);

  FUNC_0(VAR_0->gm_slots[VAR_1 + 1]);
 }
}
