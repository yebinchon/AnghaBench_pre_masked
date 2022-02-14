
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int tts_tableOid; } ;
typedef TYPE_4__ TupleTableSlot ;
struct TYPE_21__ {int ecxt_per_tuple_memory; } ;
struct TYPE_20__ {scalar_t__ operation; scalar_t__ fsSystemCol; } ;
struct TYPE_17__ {TYPE_7__* ps_ExprContext; scalar_t__ plan; } ;
struct TYPE_16__ {int ss_currentRelation; TYPE_3__ ps; } ;
struct TYPE_19__ {TYPE_2__ ss; TYPE_1__* fdwroutine; } ;
struct TYPE_15__ {TYPE_4__* (* IterateForeignScan ) (TYPE_5__*) ;TYPE_4__* (* IterateDirectModify ) (TYPE_5__*) ;} ;
typedef int MemoryContext ;
typedef TYPE_5__ ForeignScanState ;
typedef TYPE_6__ ForeignScan ;
typedef TYPE_7__ ExprContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (TYPE_5__*) ;
 TYPE_4__* FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_5(ForeignScanState *VAR_1)
{
 TupleTableSlot *VAR_2;
 ForeignScan *VAR_3 = (ForeignScan *) VAR_1->ss.ps.plan;
 ExprContext *VAR_4 = VAR_1->ss.ps.ps_ExprContext;
 MemoryContext VAR_5;


 VAR_5 = FUNC_0(VAR_4->ecxt_per_tuple_memory);
 if (VAR_3->operation != VAR_0)
  VAR_2 = VAR_1->fdwroutine->IterateDirectModify(VAR_1);
 else
  VAR_2 = VAR_1->fdwroutine->IterateForeignScan(VAR_1);
 FUNC_0(VAR_5);





 if (VAR_3->fsSystemCol && !FUNC_2(VAR_2))
  VAR_2->tts_tableOid = FUNC_1(VAR_1->ss.ss_currentRelation);

 return VAR_2;
}
