
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * query_pathkeys; } ;
typedef TYPE_1__ PlannerInfo ;
typedef int List ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(PlannerInfo *VAR_1, List *VAR_2)
{
 if (VAR_1->query_pathkeys == VAR_0)
  return 0;

 if (VAR_2 == VAR_0)
  return 0;

 if (FUNC_1(VAR_1->query_pathkeys, VAR_2))
 {

  return FUNC_0(VAR_1->query_pathkeys);
 }

 return 0;
}
