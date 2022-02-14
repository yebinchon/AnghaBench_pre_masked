
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_27__ {TYPE_5__* es_result_relation_info; } ;
struct TYPE_26__ {TYPE_4__* rd_att; TYPE_1__* rd_rel; } ;
struct TYPE_25__ {scalar_t__ ri_NumIndices; TYPE_6__* ri_RelationDesc; scalar_t__ ri_PartitionCheck; TYPE_2__* ri_TrigDesc; } ;
struct TYPE_24__ {TYPE_3__* constr; } ;
struct TYPE_23__ {scalar_t__ has_generated_stored; } ;
struct TYPE_22__ {scalar_t__ trig_insert_before_row; } ;
struct TYPE_21__ {scalar_t__ relkind; } ;
typedef TYPE_5__ ResultRelInfo ;
typedef TYPE_6__* Relation ;
typedef int List ;
typedef TYPE_7__ EState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_7__*,TYPE_5__*,int *,int *,int *) ;
 int FUNC_3 (TYPE_7__*,TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 int FUNC_5 (TYPE_5__*,int *,TYPE_7__*) ;
 int * FUNC_6 (int *,TYPE_7__*,int,int *,int *) ;
 int FUNC_7 (TYPE_5__*,int *,TYPE_7__*,int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_6__*,int *) ;

void
FUNC_10(EState *VAR_3, TupleTableSlot *VAR_4)
{
 bool VAR_5 = 0;
 ResultRelInfo *VAR_6 = VAR_3->es_result_relation_info;
 Relation VAR_7 = VAR_6->ri_RelationDesc;


 FUNC_0(VAR_7->rd_rel->relkind == VAR_2);

 FUNC_1(VAR_7, VAR_0);


 if (VAR_6->ri_TrigDesc &&
  VAR_6->ri_TrigDesc->trig_insert_before_row)
 {
  if (!FUNC_3(VAR_3, VAR_6, VAR_4))
   VAR_5 = 1;
 }

 if (!VAR_5)
 {
  List *VAR_8 = VAR_1;


  if (VAR_7->rd_att->constr &&
   VAR_7->rd_att->constr->has_generated_stored)
   FUNC_4(VAR_3, VAR_4);


  if (VAR_7->rd_att->constr)
   FUNC_5(VAR_6, VAR_4, VAR_3);
  if (VAR_6->ri_PartitionCheck)
   FUNC_7(VAR_6, VAR_4, VAR_3, 1);


  FUNC_9(VAR_6->ri_RelationDesc, VAR_4);

  if (VAR_6->ri_NumIndices > 0)
   VAR_8 = FUNC_6(VAR_4, VAR_3, 0, ((void*)0),
               VAR_1);


  FUNC_2(VAR_3, VAR_6, VAR_4,
        VAR_8, ((void*)0));







  FUNC_8(VAR_8);
 }
}
