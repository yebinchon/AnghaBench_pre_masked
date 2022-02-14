
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_7__ {int es_query_cxt; } ;
struct TYPE_6__ {int * ri_TrigOldSlot; int ri_RelationDesc; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef int Relation ;
typedef int MemoryContext ;
typedef TYPE_2__ EState ;


 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

TupleTableSlot *
FUNC_4(EState *VAR_0, ResultRelInfo *VAR_1)
{
 if (VAR_1->ri_TrigOldSlot == ((void*)0))
 {
  Relation VAR_2 = VAR_1->ri_RelationDesc;
  MemoryContext VAR_3 = FUNC_1(VAR_0->es_query_cxt);

  VAR_1->ri_TrigOldSlot =
   FUNC_0(VAR_0,
           FUNC_2(VAR_2),
           FUNC_3(VAR_2));

  FUNC_1(VAR_3);
 }

 return VAR_1->ri_TrigOldSlot;
}
