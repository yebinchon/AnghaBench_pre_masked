
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Query ;
typedef int PlannedStmt ;
typedef int ParamListInfo ;


 int * FUNC_0 (int *,int,int ) ;
 int * FUNC_1 (int *,int,int ) ;
 int * FUNC_2 (int *,int,int ) ;

PlannedStmt *
FUNC_3(Query *VAR_0, int VAR_1, ParamListInfo VAR_2)
{
 PlannedStmt *VAR_3;

 if (&FUNC_0)
  VAR_3 = FUNC_0) (VAR_0, VAR_1, VAR_2);
 else
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_3;
}
