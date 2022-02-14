
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ magic; } ;
struct TYPE_5__ {TYPE_2__* gplan; } ;
typedef TYPE_1__ CachedPlanSource ;
typedef TYPE_2__ CachedPlan ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_2(CachedPlanSource *VAR_1)
{

 if (VAR_1->gplan)
 {
  CachedPlan *VAR_2 = VAR_1->gplan;

  FUNC_0(VAR_2->magic == VAR_0);
  VAR_1->gplan = ((void*)0);
  FUNC_1(VAR_2, 0);
 }
}
