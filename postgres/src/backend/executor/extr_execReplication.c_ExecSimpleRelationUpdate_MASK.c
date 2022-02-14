
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_35__ {int tts_tid; } ;
typedef TYPE_5__ TupleTableSlot ;
struct TYPE_38__ {int es_snapshot; TYPE_6__* es_result_relation_info; } ;
struct TYPE_37__ {TYPE_4__* rd_att; TYPE_1__* rd_rel; } ;
struct TYPE_36__ {scalar_t__ ri_NumIndices; scalar_t__ ri_PartitionCheck; TYPE_2__* ri_TrigDesc; TYPE_7__* ri_RelationDesc; } ;
struct TYPE_34__ {TYPE_3__* constr; } ;
struct TYPE_33__ {scalar_t__ has_generated_stored; } ;
struct TYPE_32__ {scalar_t__ trig_update_before_row; } ;
struct TYPE_31__ {scalar_t__ relkind; } ;
typedef TYPE_6__ ResultRelInfo ;
typedef TYPE_7__* Relation ;
typedef int List ;
typedef int * ItemPointer ;
typedef TYPE_8__ EState ;
typedef int EPQState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_8__*,TYPE_6__*,int *,int *,TYPE_5__*,int *,int *) ;
 int FUNC_3 (TYPE_8__*,int *,TYPE_6__*,int *,int *,TYPE_5__*) ;
 int FUNC_4 (TYPE_8__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,TYPE_8__*) ;
 int * FUNC_6 (TYPE_5__*,TYPE_8__*,int,int *,int *) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*,TYPE_8__*,int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_7__*,int *,TYPE_5__*,int ,int*) ;

void
FUNC_10(EState *VAR_3, EPQState *VAR_4,
       TupleTableSlot *VAR_5, TupleTableSlot *VAR_6)
{
 bool VAR_7 = 0;
 ResultRelInfo *VAR_8 = VAR_3->es_result_relation_info;
 Relation VAR_9 = VAR_8->ri_RelationDesc;
 ItemPointer VAR_10 = &(VAR_5->tts_tid);


 FUNC_0(VAR_9->rd_rel->relkind == VAR_2);

 FUNC_1(VAR_9, VAR_0);


 if (VAR_8->ri_TrigDesc &&
  VAR_8->ri_TrigDesc->trig_update_before_row)
 {
  if (!FUNC_3(VAR_3, VAR_4, VAR_8,
          VAR_10, ((void*)0), VAR_6))
   VAR_7 = 1;
 }

 if (!VAR_7)
 {
  List *VAR_11 = VAR_1;
  bool VAR_12;


  if (VAR_9->rd_att->constr &&
   VAR_9->rd_att->constr->has_generated_stored)
   FUNC_4(VAR_3, VAR_6);


  if (VAR_9->rd_att->constr)
   FUNC_5(VAR_8, VAR_6, VAR_3);
  if (VAR_8->ri_PartitionCheck)
   FUNC_7(VAR_8, VAR_6, VAR_3, 1);

  FUNC_9(VAR_9, VAR_10, VAR_6, VAR_3->es_snapshot,
          &VAR_12);

  if (VAR_8->ri_NumIndices > 0 && VAR_12)
   VAR_11 = FUNC_6(VAR_6, VAR_3, 0, ((void*)0),
               VAR_1);


  FUNC_2(VAR_3, VAR_8,
        VAR_10, ((void*)0), VAR_6,
        VAR_11, ((void*)0));

  FUNC_8(VAR_11);
 }
}
