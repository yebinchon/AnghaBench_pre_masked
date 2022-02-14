
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_8__ {int * ecxt_scantuple; } ;
struct TYPE_7__ {int * ri_PartitionCheckExpr; int * ri_PartitionCheck; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef int List ;
typedef TYPE_2__ ExprContext ;
typedef int EState ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 TYPE_2__* FUNC_3 (int *) ;

bool
FUNC_4(ResultRelInfo *VAR_0, TupleTableSlot *VAR_1,
       EState *VAR_2, bool VAR_3)
{
 ExprContext *VAR_4;
 bool VAR_5;






 if (VAR_0->ri_PartitionCheckExpr == ((void*)0))
 {
  List *VAR_6 = VAR_0->ri_PartitionCheck;

  VAR_0->ri_PartitionCheckExpr = FUNC_2(VAR_6, VAR_2);
 }





 VAR_4 = FUNC_3(VAR_2);


 VAR_4->ecxt_scantuple = VAR_1;





 VAR_5 = FUNC_0(VAR_0->ri_PartitionCheckExpr, VAR_4);


 if (!VAR_5 && VAR_3)
  FUNC_1(VAR_0, VAR_1, VAR_2);

 return VAR_5;
}
