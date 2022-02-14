
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ paramExecTypes; scalar_t__ rowMarks; int jitFlags; int hasModifyingCTE; } ;
struct TYPE_8__ {int es_top_eflags; int es_jit_flags; int es_instrument; void* es_crosscheck_snapshot; void* es_snapshot; void* es_output_cid; int es_queryEnv; int es_sourceText; int * es_param_exec_vals; int es_param_list_info; int es_query_cxt; } ;
struct TYPE_7__ {int operation; TYPE_5__* plannedstmt; int instrument_options; int crosscheck_snapshot; int snapshot; int queryEnv; int sourceText; int params; TYPE_2__* estate; } ;
typedef TYPE_1__ QueryDesc ;
typedef int ParamExecData ;
typedef int MemoryContext ;
typedef TYPE_2__ EState ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;




 TYPE_2__* FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_8 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

void
FUNC_12(QueryDesc *VAR_5, int VAR_6)
{
 EState *VAR_7;
 MemoryContext VAR_8;


 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_5->estate == ((void*)0));
 if ((VAR_4 || FUNC_6()) &&
  !(VAR_6 & VAR_1))
  FUNC_3(VAR_5->plannedstmt);




 VAR_7 = FUNC_2();
 VAR_5->estate = VAR_7;

 VAR_8 = FUNC_7(VAR_7->es_query_cxt);





 VAR_7->es_param_list_info = VAR_5->params;

 if (VAR_5->plannedstmt->paramExecTypes != VAR_3)
 {
  int VAR_9;

  VAR_9 = FUNC_10(VAR_5->plannedstmt->paramExecTypes);
  VAR_7->es_param_exec_vals = (ParamExecData *)
   FUNC_11(VAR_9 * sizeof(ParamExecData));
 }

 VAR_7->es_sourceText = VAR_5->sourceText;




 VAR_7->es_queryEnv = VAR_5->queryEnv;




 switch (VAR_5->operation)
 {
  case 129:





   if (VAR_5->plannedstmt->rowMarks != VAR_3 ||
    VAR_5->plannedstmt->hasModifyingCTE)
    VAR_7->es_output_cid = FUNC_4(1);







   if (!VAR_5->plannedstmt->hasModifyingCTE)
    VAR_6 |= VAR_2;
   break;

  case 130:
  case 131:
  case 128:
   VAR_7->es_output_cid = FUNC_4(1);
   break;

  default:
   FUNC_9(VAR_0, "unrecognized operation code: %d",
     (int) VAR_5->operation);
   break;
 }




 VAR_7->es_snapshot = FUNC_8(VAR_5->snapshot);
 VAR_7->es_crosscheck_snapshot = FUNC_8(VAR_5->crosscheck_snapshot);
 VAR_7->es_top_eflags = VAR_6;
 VAR_7->es_instrument = VAR_5->instrument_options;
 VAR_7->es_jit_flags = VAR_5->plannedstmt->jitFlags;





 if (!(VAR_6 & (VAR_2 | VAR_1)))
  FUNC_0();




 FUNC_5(VAR_5, VAR_6);

 FUNC_7(VAR_8);
}
