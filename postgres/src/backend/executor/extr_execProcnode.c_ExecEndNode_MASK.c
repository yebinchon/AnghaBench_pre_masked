
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WorkTableScanState ;
typedef int WindowAggState ;
typedef int ValuesScanState ;
typedef int UniqueState ;
typedef int TidScanState ;
typedef int TableFuncScanState ;
struct TYPE_4__ {int * chgParam; } ;
typedef int SubqueryScanState ;
typedef int SortState ;
typedef int SetOpState ;
typedef int SeqScanState ;
typedef int SampleScanState ;
typedef int ResultState ;
typedef int RecursiveUnionState ;
typedef int ProjectSetState ;
typedef TYPE_1__ PlanState ;
typedef int NestLoopState ;
typedef int NamedTuplestoreScanState ;
typedef int ModifyTableState ;
typedef int MergeJoinState ;
typedef int MergeAppendState ;
typedef int MaterialState ;
typedef int LockRowsState ;
typedef int LimitState ;
typedef int IndexScanState ;
typedef int IndexOnlyScanState ;
typedef int HashState ;
typedef int HashJoinState ;
typedef int GroupState ;
typedef int GatherState ;
typedef int GatherMergeState ;
typedef int FunctionScanState ;
typedef int ForeignScanState ;
typedef int CustomScanState ;
typedef int CteScanState ;
typedef int BitmapOrState ;
typedef int BitmapIndexScanState ;
typedef int BitmapHeapScanState ;
typedef int BitmapAndState ;
typedef int AppendState ;
typedef int AggState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *) ;
 int FUNC_40 () ;
 int FUNC_41 (int ,char*,int) ;
 int FUNC_42 (TYPE_1__*) ;

void
FUNC_43(PlanState *VAR_1)
{



 if (VAR_1 == ((void*)0))
  return;






 FUNC_40();

 if (VAR_1->chgParam != ((void*)0))
 {
  FUNC_39(VAR_1->chgParam);
  VAR_1->chgParam = ((void*)0);
 }

 switch (FUNC_42(VAR_1))
 {



  case 139:
   FUNC_27((ResultState *) VAR_1);
   break;

  case 141:
   FUNC_25((ProjectSetState *) VAR_1);
   break;

  case 144:
   FUNC_22((ModifyTableState *) VAR_1);
   break;

  case 165:
   FUNC_1((AppendState *) VAR_1);
   break;

  case 146:
   FUNC_20((MergeAppendState *) VAR_1);
   break;

  case 140:
   FUNC_26((RecursiveUnionState *) VAR_1);
   break;

  case 164:
   FUNC_2((BitmapAndState *) VAR_1);
   break;

  case 161:
   FUNC_5((BitmapOrState *) VAR_1);
   break;




  case 137:
   FUNC_29((SeqScanState *) VAR_1);
   break;

  case 138:
   FUNC_28((SampleScanState *) VAR_1);
   break;

  case 155:
   FUNC_10((GatherState *) VAR_1);
   break;

  case 156:
   FUNC_11((GatherMergeState *) VAR_1);
   break;

  case 150:
   FUNC_16((IndexScanState *) VAR_1);
   break;

  case 151:
   FUNC_15((IndexOnlyScanState *) VAR_1);
   break;

  case 162:
   FUNC_4((BitmapIndexScanState *) VAR_1);
   break;

  case 163:
   FUNC_3((BitmapHeapScanState *) VAR_1);
   break;

  case 132:
   FUNC_34((TidScanState *) VAR_1);
   break;

  case 134:
   FUNC_32((SubqueryScanState *) VAR_1);
   break;

  case 157:
   FUNC_9((FunctionScanState *) VAR_1);
   break;

  case 133:
   FUNC_33((TableFuncScanState *) VAR_1);
   break;

  case 130:
   FUNC_36((ValuesScanState *) VAR_1);
   break;

  case 160:
   FUNC_6((CteScanState *) VAR_1);
   break;

  case 143:
   FUNC_23((NamedTuplestoreScanState *) VAR_1);
   break;

  case 128:
   FUNC_38((WorkTableScanState *) VAR_1);
   break;

  case 158:
   FUNC_8((ForeignScanState *) VAR_1);
   break;

  case 159:
   FUNC_7((CustomScanState *) VAR_1);
   break;




  case 142:
   FUNC_24((NestLoopState *) VAR_1);
   break;

  case 145:
   FUNC_21((MergeJoinState *) VAR_1);
   break;

  case 153:
   FUNC_14((HashJoinState *) VAR_1);
   break;




  case 147:
   FUNC_19((MaterialState *) VAR_1);
   break;

  case 135:
   FUNC_31((SortState *) VAR_1);
   break;

  case 154:
   FUNC_12((GroupState *) VAR_1);
   break;

  case 166:
   FUNC_0((AggState *) VAR_1);
   break;

  case 129:
   FUNC_37((WindowAggState *) VAR_1);
   break;

  case 131:
   FUNC_35((UniqueState *) VAR_1);
   break;

  case 152:
   FUNC_13((HashState *) VAR_1);
   break;

  case 136:
   FUNC_30((SetOpState *) VAR_1);
   break;

  case 148:
   FUNC_18((LockRowsState *) VAR_1);
   break;

  case 149:
   FUNC_17((LimitState *) VAR_1);
   break;

  default:
   FUNC_41(VAR_0, "unrecognized node type: %d", (int) FUNC_42(VAR_1));
   break;
 }
}
