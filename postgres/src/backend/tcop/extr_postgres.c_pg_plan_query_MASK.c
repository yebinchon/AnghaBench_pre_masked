
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ commandType; } ;
typedef TYPE_1__ Query ;
typedef int PlannedStmt ;
typedef int ParamListInfo ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ VAR_5 ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int * FUNC_12 (TYPE_1__*,int,int ) ;
 int * FUNC_13 (char*) ;

PlannedStmt *
FUNC_14(Query *VAR_6, int VAR_7, ParamListInfo VAR_8)
{
 PlannedStmt *VAR_9;


 if (VAR_6->commandType == VAR_0)
  return ((void*)0);


 FUNC_1(FUNC_0());

 FUNC_5();

 if (VAR_5)
  FUNC_2();


 VAR_9 = FUNC_12(VAR_6, VAR_7, VAR_8);

 if (VAR_5)
  FUNC_3("PLANNER STATISTICS");
 if (VAR_2)
  FUNC_8(VAR_3, "plan", VAR_9, VAR_1);

 FUNC_4();

 return VAR_9;
}
