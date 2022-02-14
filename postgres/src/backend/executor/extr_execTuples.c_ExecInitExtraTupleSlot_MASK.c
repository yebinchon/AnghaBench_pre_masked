
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlotOps ;
typedef int TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_3__ {int es_tupleTable; } ;
typedef TYPE_1__ EState ;


 int * FUNC_0 (int *,int ,int const*) ;

TupleTableSlot *
FUNC_1(EState *VAR_0,
        TupleDesc VAR_1,
        const TupleTableSlotOps *VAR_2)
{
 return FUNC_0(&VAR_0->es_tupleTable, VAR_1, VAR_2);
}
