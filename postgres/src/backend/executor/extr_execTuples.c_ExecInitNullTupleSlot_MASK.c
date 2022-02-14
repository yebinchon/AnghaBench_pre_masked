
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlotOps ;
typedef int TupleTableSlot ;
typedef int TupleDesc ;
typedef int EState ;


 int * FUNC_0 (int *,int ,int const*) ;
 int * FUNC_1 (int *) ;

TupleTableSlot *
FUNC_2(EState *VAR_0, TupleDesc VAR_1,
       const TupleTableSlotOps *VAR_2)
{
 TupleTableSlot *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 return FUNC_1(VAR_3);
}
