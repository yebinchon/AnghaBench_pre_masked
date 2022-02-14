
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlot ;
typedef int IndexOnlyScanState ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static bool
FUNC_1(IndexOnlyScanState *VAR_1, TupleTableSlot *VAR_2)
{
 FUNC_0(VAR_0, "EvalPlanQual recheck is not supported in index-only scans");
 return 0;
}
