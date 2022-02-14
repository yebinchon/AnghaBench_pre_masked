
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {double startup_cost; double total_cost; } ;
struct TYPE_8__ {int group_pathkeys; TYPE_1__* parse; } ;
struct TYPE_7__ {int groupClause; } ;
typedef TYPE_2__ PlannerInfo ;
typedef TYPE_3__ Path ;
typedef int List ;
typedef double Cost ;


 double VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int *,double,double,double,double,int ,double) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(PlannerInfo *VAR_2,
          List *VAR_3,
          double VAR_4,
          double VAR_5,
          double VAR_6,
          Cost *VAR_7,
          Cost *VAR_8)
{
 if (!FUNC_1(VAR_2->parse->groupClause) ||
  !FUNC_2(VAR_3, VAR_2->group_pathkeys))
 {
  Path VAR_9;

  FUNC_0(&VAR_9,
      VAR_2,
      VAR_3,
      *VAR_7 + *VAR_8,
      VAR_4,
      VAR_5,
      0.0,
      VAR_1,
      VAR_6);

  *VAR_7 = VAR_9.startup_cost;
  *VAR_8 = VAR_9.total_cost - VAR_9.startup_cost;
 }
 else
 {




  double VAR_10 = 1.0 + (VAR_0
            - 1.0) * 0.25;

  *VAR_7 *= VAR_10;
  *VAR_8 *= VAR_10;
 }
}
