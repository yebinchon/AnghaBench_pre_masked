
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_20__ {char const* ccname; int ccbin; } ;
struct TYPE_19__ {int es_query_cxt; } ;
struct TYPE_18__ {int * ecxt_scantuple; } ;
struct TYPE_17__ {TYPE_2__* rd_att; } ;
struct TYPE_16__ {int ** ri_ConstraintExprs; TYPE_4__* ri_RelationDesc; } ;
struct TYPE_15__ {TYPE_1__* constr; } ;
struct TYPE_14__ {int num_check; TYPE_7__* check; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef TYPE_4__* Relation ;
typedef int MemoryContext ;
typedef int ExprState ;
typedef TYPE_5__ ExprContext ;
typedef int Expr ;
typedef TYPE_6__ EState ;
typedef TYPE_7__ ConstrCheck ;


 int FUNC_0 (int *,TYPE_5__*) ;
 int * FUNC_1 (int *,TYPE_6__*) ;
 TYPE_5__* FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static const char *
FUNC_6(ResultRelInfo *VAR_0,
    TupleTableSlot *VAR_1, EState *VAR_2)
{
 Relation VAR_3 = VAR_0->ri_RelationDesc;
 int VAR_4 = VAR_3->rd_att->constr->num_check;
 ConstrCheck *VAR_5 = VAR_3->rd_att->constr->check;
 ExprContext *VAR_6;
 MemoryContext VAR_7;
 int VAR_8;






 if (VAR_0->ri_ConstraintExprs == ((void*)0))
 {
  VAR_7 = FUNC_3(VAR_2->es_query_cxt);
  VAR_0->ri_ConstraintExprs =
   (ExprState **) FUNC_4(VAR_4 * sizeof(ExprState *));
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  {
   Expr *VAR_9;

   VAR_9 = FUNC_5(VAR_5[VAR_8].ccbin);
   VAR_0->ri_ConstraintExprs[VAR_8] =
    FUNC_1(VAR_9, VAR_2);
  }
  FUNC_3(VAR_7);
 }





 VAR_6 = FUNC_2(VAR_2);


 VAR_6->ecxt_scantuple = VAR_1;


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
 {
  ExprState *VAR_10 = VAR_0->ri_ConstraintExprs[VAR_8];






  if (!FUNC_0(VAR_10, VAR_6))
   return VAR_5[VAR_8].ccname;
 }


 return ((void*)0);
}
