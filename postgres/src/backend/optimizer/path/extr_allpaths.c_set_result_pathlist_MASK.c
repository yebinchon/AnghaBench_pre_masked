
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lateral_relids; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef int RangeTblEntry ;
typedef int PlannerInfo ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(PlannerInfo *VAR_0, RelOptInfo *VAR_1,
     RangeTblEntry *VAR_2)
{
 Relids VAR_3;


 FUNC_3(VAR_0, VAR_1);






 VAR_3 = VAR_1->lateral_relids;


 FUNC_0(VAR_1, FUNC_1(VAR_0, VAR_1, VAR_3));


 FUNC_2(VAR_1);
}
