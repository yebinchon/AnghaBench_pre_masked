
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hasNonSerial; scalar_t__ hasNonPartial; } ;
struct TYPE_7__ {TYPE_1__* parse; } ;
struct TYPE_6__ {scalar_t__ groupClause; scalar_t__ groupingSets; int hasAggs; } ;
typedef TYPE_1__ Query ;
typedef TYPE_2__ PlannerInfo ;
typedef TYPE_3__ AggClauseCosts ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(PlannerInfo *VAR_1, const AggClauseCosts *VAR_2)
{
 Query *VAR_3 = VAR_1->parse;

 if (!VAR_3->hasAggs && VAR_3->groupClause == VAR_0)
 {




  return 0;
 }
 else if (VAR_3->groupingSets)
 {

  return 0;
 }
 else if (VAR_2->hasNonPartial || VAR_2->hasNonSerial)
 {

  return 0;
 }


 return 1;
}
