
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlotOps ;
typedef int TupleDesc ;
typedef int ScanState ;
typedef int PlanState ;
typedef int EState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int const*) ;
 int * FUNC_2 (int *) ;

void
FUNC_3(EState *VAR_0,
        ScanState *VAR_1,
        const TupleTableSlotOps *VAR_2)
{
 PlanState *VAR_3;
 TupleDesc VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_0, VAR_1, VAR_4, VAR_2);
}
