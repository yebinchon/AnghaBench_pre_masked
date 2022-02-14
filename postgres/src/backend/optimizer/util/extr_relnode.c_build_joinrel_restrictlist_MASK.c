
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int relids; int joininfo; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;


 int * VAR_0 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static List *
FUNC_3(PlannerInfo *VAR_1,
         RelOptInfo *VAR_2,
         RelOptInfo *VAR_3,
         RelOptInfo *VAR_4)
{
 List *VAR_5;






 VAR_5 = FUNC_2(VAR_2, VAR_3->joininfo, VAR_0);
 VAR_5 = FUNC_2(VAR_2, VAR_4->joininfo, VAR_5);






 VAR_5 = FUNC_1(VAR_5,
       FUNC_0(VAR_1,
                VAR_2->relids,
                VAR_3->relids,
                VAR_4));

 return VAR_5;
}
