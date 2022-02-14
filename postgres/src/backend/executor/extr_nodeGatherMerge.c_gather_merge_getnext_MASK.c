
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_6__ {int ** gm_slots; int gm_heap; int gm_initialized; } ;
typedef TYPE_1__ GatherMergeState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,int) ;

__attribute__((used)) static TupleTableSlot *
FUNC_9(GatherMergeState *VAR_0)
{
 int VAR_1;

 if (!VAR_0->gm_initialized)
 {




  FUNC_7(VAR_0);
 }
 else
 {






  VAR_1 = FUNC_0(FUNC_3(VAR_0->gm_heap));

  if (FUNC_8(VAR_0, VAR_1, 0))
   FUNC_5(VAR_0->gm_heap, FUNC_1(VAR_1));
  else
  {

   (void) FUNC_4(VAR_0->gm_heap);
  }
 }

 if (FUNC_2(VAR_0->gm_heap))
 {

  FUNC_6(VAR_0);
  return ((void*)0);
 }
 else
 {

  VAR_1 = FUNC_0(FUNC_3(VAR_0->gm_heap));
  return VAR_0->gm_slots[VAR_1];
 }
}
