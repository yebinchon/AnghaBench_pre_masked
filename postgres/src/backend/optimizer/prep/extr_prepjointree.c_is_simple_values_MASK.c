
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* parse; } ;
struct TYPE_7__ {scalar_t__ rtekind; scalar_t__ values_lists; } ;
struct TYPE_6__ {scalar_t__ rtable; } ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ PlannerInfo ;
typedef int Node ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_5(PlannerInfo *VAR_1, RangeTblEntry *VAR_2)
{
 FUNC_0(VAR_2->rtekind == VAR_0);






 if (FUNC_4(VAR_2->values_lists) != 1)
  return 0;
 if (FUNC_2((Node *) VAR_2->values_lists) ||
  FUNC_1((Node *) VAR_2->values_lists))
  return 0;







 if (FUNC_4(VAR_1->parse->rtable) != 1 ||
  VAR_2 != (RangeTblEntry *) FUNC_3(VAR_1->parse->rtable))
  return 0;

 return 1;
}
