
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;

List *
FUNC_5(PlannerInfo *VAR_1,
        RelOptInfo *VAR_2,
        List *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 VAR_5 = FUNC_4(VAR_1, VAR_3);
 if (VAR_5 > VAR_4)
  VAR_4 = VAR_5;





 if (VAR_4 == 0)
  return VAR_0;
 else if (VAR_4 == FUNC_1(VAR_3))
  return VAR_3;
 else
  return FUNC_2(FUNC_0(VAR_3), VAR_4);
}
