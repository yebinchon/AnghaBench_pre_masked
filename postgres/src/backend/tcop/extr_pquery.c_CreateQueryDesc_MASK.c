
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int commandType; } ;
struct TYPE_5__ {char const* sourceText; int instrument_options; int already_executed; int * totaltime; int * planstate; int * estate; int * tupDesc; int * queryEnv; int params; int * dest; void* crosscheck_snapshot; void* snapshot; TYPE_2__* plannedstmt; int operation; } ;
typedef int Snapshot ;
typedef int QueryEnvironment ;
typedef TYPE_1__ QueryDesc ;
typedef TYPE_2__ PlannedStmt ;
typedef int ParamListInfo ;
typedef int DestReceiver ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

QueryDesc *
FUNC_2(PlannedStmt *VAR_0,
    const char *VAR_1,
    Snapshot VAR_2,
    Snapshot VAR_3,
    DestReceiver *VAR_4,
    ParamListInfo VAR_5,
    QueryEnvironment *VAR_6,
    int VAR_7)
{
 QueryDesc *VAR_8 = (QueryDesc *) FUNC_1(sizeof(QueryDesc));

 VAR_8->operation = VAR_0->commandType;
 VAR_8->plannedstmt = VAR_0;
 VAR_8->sourceText = VAR_1;
 VAR_8->snapshot = FUNC_0(VAR_2);

 VAR_8->crosscheck_snapshot = FUNC_0(VAR_3);
 VAR_8->dest = VAR_4;
 VAR_8->params = VAR_5;
 VAR_8->queryEnv = VAR_6;
 VAR_8->instrument_options = VAR_7;


 VAR_8->tupDesc = ((void*)0);
 VAR_8->estate = ((void*)0);
 VAR_8->planstate = ((void*)0);
 VAR_8->totaltime = ((void*)0);


 VAR_8->already_executed = 0;

 return VAR_8;
}
