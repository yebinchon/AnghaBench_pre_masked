
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outer_is_left; int right_relids; int left_relids; } ;
typedef TYPE_1__ RestrictInfo ;
typedef int Relids ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_1(RestrictInfo *VAR_0, Relids VAR_1,
      Relids VAR_2)
{
 if (FUNC_0(VAR_0->left_relids, VAR_1) &&
  FUNC_0(VAR_0->right_relids, VAR_2))
 {

  VAR_0->outer_is_left = 1;
  return 1;
 }
 else if (FUNC_0(VAR_0->left_relids, VAR_2) &&
    FUNC_0(VAR_0->right_relids, VAR_1))
 {

  VAR_0->outer_is_left = 0;
  return 1;
 }
 return 0;
}
