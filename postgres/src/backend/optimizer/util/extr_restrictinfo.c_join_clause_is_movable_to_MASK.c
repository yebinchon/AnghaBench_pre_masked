
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lateral_referencers; int relid; } ;
struct TYPE_5__ {int clause_relids; int nullable_relids; int outer_relids; } ;
typedef TYPE_1__ RestrictInfo ;
typedef TYPE_2__ RelOptInfo ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool
FUNC_2(RestrictInfo *VAR_0, RelOptInfo *VAR_1)
{

 if (!FUNC_0(VAR_1->relid, VAR_0->clause_relids))
  return 0;


 if (FUNC_0(VAR_1->relid, VAR_0->outer_relids))
  return 0;


 if (FUNC_0(VAR_1->relid, VAR_0->nullable_relids))
  return 0;


 if (FUNC_1(VAR_1->lateral_referencers, VAR_0->clause_relids))
  return 0;

 return 1;
}
