
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_14__ {int * es_query_dsa; } ;
struct TYPE_13__ {scalar_t__ nTuples; scalar_t__ readCounter; scalar_t__ done; int * tuple; } ;
struct TYPE_10__ {TYPE_5__* state; } ;
struct TYPE_12__ {int need_to_scan_locally; int ** gm_slots; TYPE_4__* gm_tuple_buffers; TYPE_2__* pei; TYPE_1__ ps; } ;
struct TYPE_11__ {int * area; } ;
typedef int PlanState ;
typedef int HeapTuple ;
typedef TYPE_3__ GatherMergeState ;
typedef TYPE_4__ GMReaderTupleBuffer ;
typedef TYPE_5__ EState ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int,int,scalar_t__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int * FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_8(GatherMergeState *VAR_0, int VAR_1, bool VAR_2)
{
 GMReaderTupleBuffer *VAR_3;
 HeapTuple VAR_4;





 if (VAR_1 == 0)
 {
  if (VAR_0->need_to_scan_locally)
  {
   PlanState *VAR_5 = FUNC_7(VAR_0);
   TupleTableSlot *VAR_6;
   EState *VAR_7 = VAR_0->ps.state;


   VAR_7->es_query_dsa = VAR_0->pei ? VAR_0->pei->area : ((void*)0);
   VAR_6 = FUNC_1(VAR_5);
   VAR_7->es_query_dsa = ((void*)0);

   if (!FUNC_4(VAR_6))
   {
    VAR_0->gm_slots[0] = VAR_6;
    return 1;
   }

   VAR_0->need_to_scan_locally = 0;
  }
  return 0;
 }


 VAR_3 = &VAR_0->gm_tuple_buffers[VAR_1 - 1];

 if (VAR_3->nTuples > VAR_3->readCounter)
 {

  VAR_4 = VAR_3->tuple[VAR_3->readCounter++];
 }
 else if (VAR_3->done)
 {

  return 0;
 }
 else
 {

  VAR_4 = FUNC_5(VAR_0,
        VAR_1,
        VAR_2,
        &VAR_3->done);
  if (!FUNC_3(VAR_4))
   return 0;





  FUNC_6(VAR_0, VAR_1);
 }

 FUNC_0(FUNC_3(VAR_4));


 FUNC_2(VAR_4,
        VAR_0->gm_slots[VAR_1],

        1);

 return 1;
}
