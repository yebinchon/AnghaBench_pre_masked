
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nullable_relids; int outer_relids; int clause_relids; } ;
typedef TYPE_1__ RestrictInfo ;
typedef int Relids ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool
FUNC_2(RestrictInfo *VAR_0,
       Relids VAR_1,
       Relids VAR_2)
{

 if (!FUNC_0(VAR_0->clause_relids, VAR_2))
  return 0;


 if (!FUNC_1(VAR_1, VAR_0->clause_relids))
  return 0;


 if (FUNC_1(VAR_1, VAR_0->outer_relids))
  return 0;







 if (FUNC_1(VAR_1, VAR_0->nullable_relids))
  return 0;

 return 1;
}
