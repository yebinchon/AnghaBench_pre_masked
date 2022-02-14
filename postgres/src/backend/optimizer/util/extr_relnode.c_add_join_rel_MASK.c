
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* join_rel; } ;
struct TYPE_8__ {scalar_t__ join_rel_hash; int join_rel_list; } ;
struct TYPE_7__ {int relids; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef TYPE_3__ JoinHashEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int*) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(PlannerInfo *VAR_1, RelOptInfo *VAR_2)
{

 VAR_1->join_rel_list = FUNC_2(VAR_1->join_rel_list, VAR_2);


 if (VAR_1->join_rel_hash)
 {
  JoinHashEntry *VAR_3;
  bool VAR_4;

  VAR_3 = (JoinHashEntry *) FUNC_1(VAR_1->join_rel_hash,
              &(VAR_2->relids),
              VAR_0,
              &VAR_4);
  FUNC_0(!VAR_4);
  VAR_3->join_rel = VAR_2;
 }
}
