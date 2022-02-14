
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int relids; } ;
struct TYPE_6__ {int outer_is_left; int right_relids; int left_relids; } ;
typedef TYPE_1__ RestrictInfo ;
typedef TYPE_2__ RelOptInfo ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_1(RestrictInfo *VAR_0, RelOptInfo *VAR_1,
      RelOptInfo *VAR_2)
{
 if (FUNC_0(VAR_0->left_relids, VAR_1->relids) &&
  FUNC_0(VAR_0->right_relids, VAR_2->relids))
 {

  VAR_0->outer_is_left = 1;
  return 1;
 }
 else if (FUNC_0(VAR_0->left_relids, VAR_2->relids) &&
    FUNC_0(VAR_0->right_relids, VAR_1->relids))
 {

  VAR_0->outer_is_left = 0;
  return 1;
 }
 return 0;
}
