
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rtekind; scalar_t__ statlist; } ;
typedef int SpecialJoinInfo ;
typedef double Selectivity ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;
typedef int JoinType ;
typedef int Bitmapset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_0 (int *,int *,int,int ,int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 double FUNC_2 (int *,int *,int,int ,int *,TYPE_1__*,int **) ;

Selectivity
FUNC_3(PlannerInfo *VAR_2,
        List *VAR_3,
        int VAR_4,
        JoinType VAR_5,
        SpecialJoinInfo *VAR_6)
{
 Selectivity VAR_7 = 1.0;
 RelOptInfo *VAR_8;
 Bitmapset *VAR_9 = ((void*)0);





 VAR_8 = FUNC_1(VAR_2, VAR_3);
 if (VAR_8 && VAR_8->rtekind == VAR_1 && VAR_8->statlist != VAR_0)
 {







  VAR_7 *= FUNC_2(VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_6, VAR_8,
            &VAR_9);
 }





 return VAR_7 * FUNC_0(VAR_2, VAR_3, VAR_4,
             VAR_5, VAR_6,
             VAR_9);
}
