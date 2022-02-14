
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_6__ {scalar_t__ commandType; int utilityStmt; } ;
typedef int QueryEnvironment ;
typedef TYPE_1__ Query ;
typedef int PlannedStmt ;
typedef int ParamListInfo ;
typedef int IntoClause ;
typedef int ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int *,char const*,int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int,int *,int *,char const*,int ,int *) ;
 int FUNC_2 (int ,int *,int *,char const*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int *,int *,char const*,int ,int *) ;

__attribute__((used)) static void
FUNC_7(Query *VAR_1, int VAR_2,
    IntoClause *VAR_3, ExplainState *VAR_4,
    const char *VAR_5, ParamListInfo VAR_6,
    QueryEnvironment *VAR_7)
{

 if (VAR_1->commandType == VAR_0)
 {
  FUNC_2(VAR_1->utilityStmt, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);
  return;
 }


 if (&FUNC_1)
  FUNC_1) (VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, VAR_7);
 else
 {
  PlannedStmt *VAR_8;
  instr_time VAR_9,
     VAR_10;

  FUNC_3(VAR_9);


  VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_6);

  FUNC_3(VAR_10);
  FUNC_4(VAR_10, VAR_9);


  FUNC_0(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
        &VAR_10);
 }
}
