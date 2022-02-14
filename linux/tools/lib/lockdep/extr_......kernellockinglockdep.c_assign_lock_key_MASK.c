
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockdep_map {void* key; } ;
struct lock_class_key {int dummy; } ;
typedef int raw_spinlock_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct lockdep_map*) ;

__attribute__((used)) static bool FUNC_7(struct lockdep_map *VAR_0)
{
 unsigned long VAR_1, VAR_2 = (unsigned long)VAR_0;
 if (FUNC_1(VAR_2, &VAR_1))
  VAR_0->key = (void *)VAR_1;
 else if (FUNC_2(VAR_2, &VAR_1))
  VAR_0->key = (void *)VAR_1;
 else if (FUNC_6(VAR_0))
  VAR_0->key = (void *)VAR_0;
 else {

  FUNC_3();
  FUNC_5("INFO: trying to register non-static key.\n");
  FUNC_5("the code is fine but needs lockdep annotation.\n");
  FUNC_5("turning off the locking correctness validator.\n");
  FUNC_4();
  return 0;
 }

 return 1;
}
