
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pin_cookie {int dummy; } ;
struct lockdep_map {int dummy; } ;
struct TYPE_2__ {int lockdep_recursion; } ;


 struct pin_cookie VAR_0 ;
 struct pin_cookie FUNC_0 (struct lockdep_map*) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

struct pin_cookie FUNC_5(struct lockdep_map *VAR_2)
{
 struct pin_cookie VAR_3 = VAR_0;
 unsigned long VAR_4;

 if (FUNC_4(VAR_1->lockdep_recursion))
  return VAR_3;

 FUNC_3(VAR_4);
 FUNC_1(VAR_4);

 VAR_1->lockdep_recursion = 1;
 VAR_3 = FUNC_0(VAR_2);
 VAR_1->lockdep_recursion = 0;
 FUNC_2(VAR_4);

 return VAR_3;
}
