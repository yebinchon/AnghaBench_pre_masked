
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;
typedef scalar_t__ JoinType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int *,int *,int *) ;

List *
FUNC_1(PlannerInfo *VAR_3,
     RelOptInfo *VAR_4,
     JoinType VAR_5,
     List *VAR_6)
{
 if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
  return VAR_2;
 return FUNC_0(VAR_3, VAR_4, VAR_6);
}
