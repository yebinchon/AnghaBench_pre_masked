
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockdep_map {struct lock_class** class_cache; } ;
struct lock_class {int dummy; } ;
struct held_lock {int class_idx; int nest_lock; scalar_t__ references; struct lockdep_map const* instance; } ;


 scalar_t__ FUNC_0 (int) ;
 struct lock_class const* VAR_0 ;
 struct lock_class* FUNC_1 (struct lockdep_map const*,int ) ;

__attribute__((used)) static int FUNC_2(const struct held_lock *VAR_1,
     const struct lockdep_map *VAR_2)
{
 if (VAR_1->instance == VAR_2)
  return 1;

 if (VAR_1->references) {
  const struct lock_class *VAR_3 = VAR_2->class_cache[0];

  if (!VAR_3)
   VAR_3 = FUNC_1(VAR_2, 0);







  if (!VAR_3)
   return 0;






  if (FUNC_0(!VAR_1->nest_lock))
   return 0;

  if (VAR_1->class_idx == VAR_3 - VAR_0)
   return 1;
 }

 return 0;
}
