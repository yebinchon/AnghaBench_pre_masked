
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int tts_tid; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_14__ {int es_snapshot; TYPE_3__* es_result_relation_info; } ;
struct TYPE_13__ {TYPE_1__* ri_TrigDesc; int ri_RelationDesc; } ;
struct TYPE_11__ {scalar_t__ trig_delete_before_row; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef int Relation ;
typedef int * ItemPointer ;
typedef TYPE_4__ EState ;
typedef int EPQState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int *,int *,int *) ;
 int FUNC_2 (TYPE_4__*,int *,TYPE_3__*,int *,int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;

void
FUNC_4(EState *VAR_1, EPQState *VAR_2,
       TupleTableSlot *VAR_3)
{
 bool VAR_4 = 0;
 ResultRelInfo *VAR_5 = VAR_1->es_result_relation_info;
 Relation VAR_6 = VAR_5->ri_RelationDesc;
 ItemPointer VAR_7 = &VAR_3->tts_tid;

 FUNC_0(VAR_6, VAR_0);


 if (VAR_5->ri_TrigDesc &&
  VAR_5->ri_TrigDesc->trig_delete_before_row)
 {
  VAR_4 = !FUNC_2(VAR_1, VAR_2, VAR_5,
             VAR_7, ((void*)0), ((void*)0));

 }

 if (!VAR_4)
 {

  FUNC_3(VAR_6, VAR_7, VAR_1->es_snapshot);


  FUNC_1(VAR_1, VAR_5,
        VAR_7, ((void*)0), ((void*)0));
 }
}
