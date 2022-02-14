
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_5__ {int recheckplanstate; TYPE_1__* recheckestate; } ;
struct TYPE_4__ {int es_query_cxt; } ;
typedef int MemoryContext ;
typedef TYPE_2__ EPQState ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

TupleTableSlot *
FUNC_2(EPQState *VAR_0)
{
 MemoryContext VAR_1;
 TupleTableSlot *VAR_2;

 VAR_1 = FUNC_1(VAR_0->recheckestate->es_query_cxt);
 VAR_2 = FUNC_0(VAR_0->recheckplanstate);
 FUNC_1(VAR_1);

 return VAR_2;
}
