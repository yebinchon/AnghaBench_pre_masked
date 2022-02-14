
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ distinctClause; scalar_t__ groupClause; scalar_t__ hasTargetSRFs; scalar_t__ hasWindowFuncs; scalar_t__ hasAggs; int * havingQual; scalar_t__ setOperations; } ;
typedef TYPE_1__ Query ;
typedef scalar_t__ LockClauseStrength ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

void
FUNC_5(Query *VAR_4, LockClauseStrength VAR_5)
{
 FUNC_0(VAR_5 != VAR_2);

 if (VAR_4->setOperations)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),


     FUNC_4("%s is not allowed with UNION/INTERSECT/EXCEPT",
      FUNC_1(VAR_5))));
 if (VAR_4->distinctClause != VAR_3)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),


     FUNC_4("%s is not allowed with DISTINCT clause",
      FUNC_1(VAR_5))));
 if (VAR_4->groupClause != VAR_3)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),


     FUNC_4("%s is not allowed with GROUP BY clause",
      FUNC_1(VAR_5))));
 if (VAR_4->havingQual != ((void*)0))
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),


     FUNC_4("%s is not allowed with HAVING clause",
      FUNC_1(VAR_5))));
 if (VAR_4->hasAggs)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),


     FUNC_4("%s is not allowed with aggregate functions",
      FUNC_1(VAR_5))));
 if (VAR_4->hasWindowFuncs)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),


     FUNC_4("%s is not allowed with window functions",
      FUNC_1(VAR_5))));
 if (VAR_4->hasTargetSRFs)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),


     FUNC_4("%s is not allowed with set-returning functions in the target list",
      FUNC_1(VAR_5))));
}
