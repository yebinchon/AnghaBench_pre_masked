
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SpecialJoinInfo ;
typedef int Selectivity ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;
typedef int JoinType ;
typedef int Bitmapset ;


 int FUNC_0 (int *,int *,int,int ,int *,int *,int **) ;
 int FUNC_1 (int *,int *,int,int ,int *,int *,int **) ;

Selectivity
FUNC_2(PlannerInfo *VAR_0, List *VAR_1, int VAR_2,
          JoinType VAR_3, SpecialJoinInfo *VAR_4,
          RelOptInfo *VAR_5, Bitmapset **VAR_6)
{
 Selectivity VAR_7;


 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
            VAR_4, VAR_5, VAR_6);
 VAR_7 *= FUNC_0(VAR_0, VAR_1, VAR_2,
              VAR_3, VAR_4, VAR_5,
              VAR_6);

 return VAR_7;
}
