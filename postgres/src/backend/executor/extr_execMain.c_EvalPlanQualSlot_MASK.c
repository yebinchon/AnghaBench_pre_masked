
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_5__ {int tuple_table; TYPE_1__* parentestate; int ** relsubs_slot; } ;
struct TYPE_4__ {int es_range_table_size; int es_query_cxt; } ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int Index ;
typedef TYPE_2__ EPQState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int *) ;

TupleTableSlot *
FUNC_3(EPQState *VAR_0,
     Relation VAR_1, Index VAR_2)
{
 TupleTableSlot **VAR_3;

 FUNC_0(VAR_1);
 FUNC_0(VAR_2 > 0 && VAR_2 <= VAR_0->parentestate->es_range_table_size);
 VAR_3 = &VAR_0->relsubs_slot[VAR_2 - 1];

 if (*VAR_3 == ((void*)0))
 {
  MemoryContext VAR_4;

  VAR_4 = FUNC_1(VAR_0->parentestate->es_query_cxt);
  *VAR_3 = FUNC_2(VAR_1, &VAR_0->tuple_table);
  FUNC_1(VAR_4);
 }

 return *VAR_3;
}
