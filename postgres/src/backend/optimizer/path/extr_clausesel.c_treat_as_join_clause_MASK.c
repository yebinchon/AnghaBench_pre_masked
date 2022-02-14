
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clause_relids; } ;
typedef int SpecialJoinInfo ;
typedef TYPE_1__ RestrictInfo ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool
FUNC_2(Node *VAR_1, RestrictInfo *VAR_2,
      int VAR_3, SpecialJoinInfo *VAR_4)
{
 if (VAR_3 != 0)
 {




  return 0;
 }
 else if (VAR_4 == ((void*)0))
 {




  return 0;
 }
 else
 {
  if (VAR_2)
   return (FUNC_1(VAR_2->clause_relids) == VAR_0);
  else
   return (FUNC_0(VAR_1) > 1);
 }
}
