
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_8__ {scalar_t__ trig_insert_after_row; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_9__ {scalar_t__ tcs_insert_new_table; } ;
typedef TYPE_2__ TransitionCaptureState ;
struct TYPE_10__ {TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef int List ;
typedef int EState ;


 int FUNC_0 (int *,TYPE_3__*,int ,int,int *,int *,int *,int *,TYPE_2__*) ;
 int VAR_0 ;

void
FUNC_1(EState *VAR_1, ResultRelInfo *VAR_2,
      TupleTableSlot *VAR_3, List *VAR_4,
      TransitionCaptureState *VAR_5)
{
 TriggerDesc *VAR_6 = VAR_2->ri_TrigDesc;

 if ((VAR_6 && VAR_6->trig_insert_after_row) ||
  (VAR_5 && VAR_5->tcs_insert_new_table))
  FUNC_0(VAR_1, VAR_2, VAR_0,
         1, ((void*)0), VAR_3,
         VAR_4, ((void*)0),
         VAR_5);
}
