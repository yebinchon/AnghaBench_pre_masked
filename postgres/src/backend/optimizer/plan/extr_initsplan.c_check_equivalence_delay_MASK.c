
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ join_info_list; } ;
struct TYPE_6__ {int right_relids; int left_relids; } ;
typedef TYPE_1__ RestrictInfo ;
typedef int Relids ;
typedef TYPE_2__ PlannerInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,int) ;

__attribute__((used)) static bool
FUNC_2(PlannerInfo *VAR_1,
      RestrictInfo *VAR_2)
{
 Relids VAR_3;
 Relids VAR_4;


 if (VAR_1->join_info_list == VAR_0)
  return 1;


 VAR_3 = FUNC_0(VAR_2->left_relids);

 if (FUNC_1(VAR_1, &VAR_3, &VAR_4, 1))
  return 0;


 VAR_3 = FUNC_0(VAR_2->right_relids);
 if (FUNC_1(VAR_1, &VAR_3, &VAR_4, 1))
  return 0;

 return 1;
}
