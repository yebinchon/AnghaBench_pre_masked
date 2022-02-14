
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shm_toc ;
typedef int QueryDesc ;
typedef int PlannedStmt ;
typedef int ParamListInfo ;
typedef int DestReceiver ;


 int * FUNC_0 (int *,char*,int ,int ,int *,int ,int *,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static QueryDesc *
FUNC_5(shm_toc *VAR_4, DestReceiver *VAR_5,
       int VAR_6)
{
 char *VAR_7;
 char *VAR_8;
 PlannedStmt *VAR_9;
 ParamListInfo VAR_10;
 char *VAR_11;


 VAR_11 = FUNC_3(VAR_4, VAR_3, 0);


 VAR_7 = FUNC_3(VAR_4, VAR_2, 0);
 VAR_9 = (PlannedStmt *) FUNC_4(VAR_7);


 VAR_8 = FUNC_3(VAR_4, VAR_1, 0);
 VAR_10 = FUNC_2(&VAR_8);


 return FUNC_0(VAR_9,
         VAR_11,
         FUNC_1(), VAR_0,
         VAR_5, VAR_10, ((void*)0), VAR_6);
}
