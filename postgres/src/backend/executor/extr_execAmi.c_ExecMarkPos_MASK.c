
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SortState ;
typedef int ResultState ;
typedef int PlanState ;
typedef int MaterialState ;
typedef int IndexScanState ;
typedef int IndexOnlyScanState ;
typedef int CustomScanState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;






 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *) ;

void
FUNC_8(PlanState *VAR_1)
{
 switch (FUNC_7(VAR_1))
 {
  case 131:
   FUNC_1((IndexScanState *) VAR_1);
   break;

  case 132:
   FUNC_2((IndexOnlyScanState *) VAR_1);
   break;

  case 133:
   FUNC_0((CustomScanState *) VAR_1);
   break;

  case 130:
   FUNC_3((MaterialState *) VAR_1);
   break;

  case 128:
   FUNC_5((SortState *) VAR_1);
   break;

  case 129:
   FUNC_4((ResultState *) VAR_1);
   break;

  default:

   FUNC_6(VAR_0, "unrecognized node type: %d", (int) FUNC_7(VAR_1));
   break;
 }
}
