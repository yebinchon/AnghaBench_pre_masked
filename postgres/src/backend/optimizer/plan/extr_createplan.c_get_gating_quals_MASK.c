
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hasPseudoConstantQuals; } ;
typedef TYPE_1__ PlannerInfo ;
typedef int List ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int * FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static List *
FUNC_2(PlannerInfo *VAR_1, List *VAR_2)
{

 if (!VAR_1->hasPseudoConstantQuals)
  return VAR_0;


 VAR_2 = FUNC_1(VAR_1, VAR_2);


 return FUNC_0(VAR_2, 1);
}
