
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ resultDesc; } ;
struct TYPE_4__ {scalar_t__ magic; int plancache_list; } ;
typedef TYPE_1__* SPIPlanPtr ;
typedef TYPE_2__ CachedPlanSource ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

bool
FUNC_2(SPIPlanPtr VAR_3)
{
 CachedPlanSource *VAR_4;

 if (VAR_3 == ((void*)0) || VAR_3->magic != VAR_2)
 {
  VAR_1 = VAR_0;
  return 0;
 }

 if (FUNC_1(VAR_3->plancache_list) != 1)
 {
  VAR_1 = 0;
  return 0;
 }
 VAR_4 = (CachedPlanSource *) FUNC_0(VAR_3->plancache_list);






 VAR_1 = 0;


 if (VAR_4->resultDesc)
  return 1;

 return 0;
}
