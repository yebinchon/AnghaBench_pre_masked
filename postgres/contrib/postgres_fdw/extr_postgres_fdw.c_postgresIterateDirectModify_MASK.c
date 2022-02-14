
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_17__ {int es_processed; TYPE_3__* es_result_relation_info; } ;
struct TYPE_11__ {TYPE_5__* instrument; TYPE_7__* state; } ;
struct TYPE_12__ {TYPE_1__ ps; int * ss_ScanTupleSlot; } ;
struct TYPE_16__ {TYPE_2__ ss; scalar_t__ fdw_state; } ;
struct TYPE_15__ {int tuplecount; } ;
struct TYPE_14__ {int num_tuples; scalar_t__ set_processed; int has_returning; } ;
struct TYPE_13__ {int ri_projectReturning; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef TYPE_4__ PgFdwDirectModifyState ;
typedef TYPE_5__ Instrumentation ;
typedef TYPE_6__ ForeignScanState ;
typedef TYPE_7__ EState ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int * FUNC_3 (TYPE_6__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_4(ForeignScanState *VAR_0)
{
 PgFdwDirectModifyState *VAR_1 = (PgFdwDirectModifyState *) VAR_0->fdw_state;
 EState *VAR_2 = VAR_0->ss.ps.state;
 ResultRelInfo *VAR_3 = VAR_2->es_result_relation_info;




 if (VAR_1->num_tuples == -1)
  FUNC_2(VAR_0);




 if (!VAR_3->ri_projectReturning)
 {
  TupleTableSlot *VAR_4 = VAR_0->ss.ss_ScanTupleSlot;
  Instrumentation *VAR_5 = VAR_0->ss.ps.instrument;

  FUNC_0(!VAR_1->has_returning);


  if (VAR_1->set_processed)
   VAR_2->es_processed += VAR_1->num_tuples;


  if (VAR_5)
   VAR_5->tuplecount += VAR_1->num_tuples;

  return FUNC_1(VAR_4);
 }




 return FUNC_3(VAR_0);
}
