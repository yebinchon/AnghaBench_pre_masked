
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ruleId; scalar_t__ event; scalar_t__ enabled; scalar_t__ isInstead; int actions; int qual; } ;
struct TYPE_5__ {int numLocks; TYPE_2__** rules; } ;
typedef TYPE_1__ RuleLock ;
typedef TYPE_2__ RewriteRule ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1(RuleLock *VAR_0, RuleLock *VAR_1)
{
 int VAR_2;






 if (VAR_0 != ((void*)0))
 {
  if (VAR_1 == ((void*)0))
   return 0;
  if (VAR_0->numLocks != VAR_1->numLocks)
   return 0;
  for (VAR_2 = 0; VAR_2 < VAR_0->numLocks; VAR_2++)
  {
   RewriteRule *VAR_3 = VAR_0->rules[VAR_2];
   RewriteRule *VAR_4 = VAR_1->rules[VAR_2];

   if (VAR_3->ruleId != VAR_4->ruleId)
    return 0;
   if (VAR_3->event != VAR_4->event)
    return 0;
   if (VAR_3->enabled != VAR_4->enabled)
    return 0;
   if (VAR_3->isInstead != VAR_4->isInstead)
    return 0;
   if (!FUNC_0(VAR_3->qual, VAR_4->qual))
    return 0;
   if (!FUNC_0(VAR_3->actions, VAR_4->actions))
    return 0;
  }
 }
 else if (VAR_1 != ((void*)0))
  return 0;
 return 1;
}
