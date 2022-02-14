
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_10__ {scalar_t__ trig_delete_after_row; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_11__ {scalar_t__ tcs_delete_old_table; } ;
typedef TYPE_2__ TransitionCaptureState ;
struct TYPE_12__ {TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef int ItemPointer ;
typedef int * HeapTuple ;
typedef int EState ;


 int FUNC_0 (int *,TYPE_3__*,int ,int,int *,int *,int ,int *,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,int *,TYPE_3__*,int ,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_7(EState *VAR_3, ResultRelInfo *VAR_4,
      ItemPointer VAR_5,
      HeapTuple VAR_6,
      TransitionCaptureState *VAR_7)
{
 TriggerDesc *VAR_8 = VAR_4->ri_TrigDesc;
 TupleTableSlot *VAR_9 = FUNC_3(VAR_3, VAR_4);

 if ((VAR_8 && VAR_8->trig_delete_after_row) ||
  (VAR_7 && VAR_7->tcs_delete_old_table))
 {
  FUNC_1(FUNC_5(VAR_6) ^ FUNC_6(VAR_5));
  if (VAR_6 == ((void*)0))
   FUNC_4(VAR_3,
          ((void*)0),
          VAR_4,
          VAR_5,
          VAR_0,
          VAR_9,
          ((void*)0));
  else
   FUNC_2(VAR_6, VAR_9, 0);

  FUNC_0(VAR_3, VAR_4, VAR_2,
         1, VAR_9, ((void*)0), VAR_1, ((void*)0),
         VAR_7);
 }
}
