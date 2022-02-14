
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int tts_tableOid; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_14__ {TYPE_1__* ecxt_scantuple; TYPE_1__* ecxt_outertuple; } ;
struct TYPE_13__ {TYPE_4__* pi_exprContext; } ;
struct TYPE_12__ {int ri_RelationDesc; TYPE_3__* ri_projectReturning; } ;
typedef TYPE_2__ ResultRelInfo ;
typedef TYPE_3__ ProjectionInfo ;
typedef TYPE_4__ ExprContext ;


 TYPE_1__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_2(ResultRelInfo *VAR_0,
      TupleTableSlot *VAR_1,
      TupleTableSlot *VAR_2)
{
 ProjectionInfo *VAR_3 = VAR_0->ri_projectReturning;
 ExprContext *VAR_4 = VAR_3->pi_exprContext;


 if (VAR_1)
  VAR_4->ecxt_scantuple = VAR_1;
 VAR_4->ecxt_outertuple = VAR_2;





 VAR_4->ecxt_scantuple->tts_tableOid =
  FUNC_1(VAR_0->ri_RelationDesc);


 return FUNC_0(VAR_3);
}
