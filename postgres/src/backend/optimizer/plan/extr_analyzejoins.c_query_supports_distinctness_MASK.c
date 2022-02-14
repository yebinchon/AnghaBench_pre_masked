
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ distinctClause; scalar_t__ groupClause; scalar_t__ groupingSets; scalar_t__ setOperations; scalar_t__ havingQual; scalar_t__ hasAggs; scalar_t__ hasTargetSRFs; } ;
typedef TYPE_1__ Query ;


 scalar_t__ VAR_0 ;

bool
FUNC_0(Query *VAR_1)
{

 if (VAR_1->hasTargetSRFs && VAR_1->distinctClause == VAR_0)
  return 0;


 if (VAR_1->distinctClause != VAR_0 ||
  VAR_1->groupClause != VAR_0 ||
  VAR_1->groupingSets != VAR_0 ||
  VAR_1->hasAggs ||
  VAR_1->havingQual ||
  VAR_1->setOperations)
  return 1;

 return 0;
}
