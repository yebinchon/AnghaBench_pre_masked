
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_19__ {int attrMap; } ;
typedef TYPE_4__ TupleConversionMap ;
struct TYPE_23__ {TYPE_5__* es_result_relation_info; } ;
struct TYPE_22__ {TYPE_3__* mt_oc_transition_capture; TYPE_2__* mt_transition_capture; } ;
struct TYPE_21__ {int * pi_PartitionTupleSlot; TYPE_4__* pi_RootToPartitionMap; int * pi_PartitionToRootMap; } ;
struct TYPE_20__ {TYPE_1__* ri_TrigDesc; TYPE_6__* ri_PartitionInfo; } ;
struct TYPE_18__ {int * tcs_map; } ;
struct TYPE_17__ {int * tcs_map; int * tcs_original_insert_tuple; } ;
struct TYPE_16__ {scalar_t__ trig_insert_before_row; } ;
typedef TYPE_5__ ResultRelInfo ;
typedef int PartitionTupleRouting ;
typedef TYPE_6__ PartitionRoutingInfo ;
typedef TYPE_7__ ModifyTableState ;
typedef TYPE_8__ EState ;


 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (TYPE_7__*,TYPE_5__*,int *,int *,TYPE_8__*) ;
 int * FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_3(ModifyTableState *VAR_0,
      EState *VAR_1,
      PartitionTupleRouting *VAR_2,
      ResultRelInfo *VAR_3,
      TupleTableSlot *VAR_4)
{
 ResultRelInfo *VAR_5;
 PartitionRoutingInfo *VAR_6;
 TupleConversionMap *VAR_7;
 VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_2, VAR_4, VAR_1);
 VAR_6 = VAR_5->ri_PartitionInfo;
 FUNC_0(VAR_6 != ((void*)0));




 VAR_1->es_result_relation_info = VAR_5;





 if (VAR_0->mt_transition_capture != ((void*)0))
 {
  if (VAR_5->ri_TrigDesc &&
   VAR_5->ri_TrigDesc->trig_insert_before_row)
  {




   VAR_0->mt_transition_capture->tcs_original_insert_tuple = ((void*)0);
   VAR_0->mt_transition_capture->tcs_map =
    VAR_6->pi_PartitionToRootMap;
  }
  else
  {




   VAR_0->mt_transition_capture->tcs_original_insert_tuple = VAR_4;
   VAR_0->mt_transition_capture->tcs_map = ((void*)0);
  }
 }
 if (VAR_0->mt_oc_transition_capture != ((void*)0))
 {
  VAR_0->mt_oc_transition_capture->tcs_map =
   VAR_6->pi_PartitionToRootMap;
 }




 VAR_7 = VAR_6->pi_RootToPartitionMap;
 if (VAR_7 != ((void*)0))
 {
  TupleTableSlot *VAR_8 = VAR_6->pi_PartitionTupleSlot;

  VAR_4 = FUNC_2(VAR_7->attrMap, VAR_4, VAR_8);
 }

 return VAR_4;
}
