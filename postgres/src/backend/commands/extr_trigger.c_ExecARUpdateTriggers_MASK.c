
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_11__ {scalar_t__ trig_update_after_row; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_12__ {scalar_t__ tcs_update_new_table; scalar_t__ tcs_update_old_table; } ;
typedef TYPE_2__ TransitionCaptureState ;
struct TYPE_13__ {TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef int List ;
typedef int ItemPointer ;
typedef int * HeapTuple ;
typedef int EState ;


 int FUNC_0 (int *,TYPE_3__*,int ,int,int *,int *,int *,int ,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int *,int *,TYPE_3__*,int ,int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_7(EState *VAR_2, ResultRelInfo *VAR_3,
      ItemPointer VAR_4,
      HeapTuple VAR_5,
      TupleTableSlot *VAR_6,
      List *VAR_7,
      TransitionCaptureState *VAR_8)
{
 TriggerDesc *VAR_9 = VAR_3->ri_TrigDesc;
 TupleTableSlot *VAR_10 = FUNC_3(VAR_2, VAR_3);

 FUNC_1(VAR_10);

 if ((VAR_9 && VAR_9->trig_update_after_row) ||
  (VAR_8 &&
   (VAR_8->tcs_update_old_table ||
    VAR_8->tcs_update_new_table)))
 {






  if (VAR_5 == ((void*)0) && FUNC_6(VAR_4))
   FUNC_5(VAR_2,
          ((void*)0),
          VAR_3,
          VAR_4,
          VAR_0,
          VAR_10,
          ((void*)0));
  else if (VAR_5 != ((void*)0))
   FUNC_2(VAR_5, VAR_10, 0);

  FUNC_0(VAR_2, VAR_3, VAR_1,
         1, VAR_10, VAR_6, VAR_7,
         FUNC_4(VAR_3, VAR_2),
         VAR_8);
 }
}
