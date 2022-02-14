
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hasHavingQual; TYPE_1__* parse; } ;
struct TYPE_4__ {scalar_t__ groupClause; int hasAggs; scalar_t__ groupingSets; } ;
typedef TYPE_1__ Query ;
typedef TYPE_2__ PlannerInfo ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(PlannerInfo *VAR_1)
{
 Query *VAR_2 = VAR_1->parse;

 return (VAR_1->hasHavingQual || VAR_2->groupingSets) &&
  !VAR_2->hasAggs && VAR_2->groupClause == VAR_0;
}
