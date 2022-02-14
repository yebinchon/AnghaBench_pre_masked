
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lockdep_map {int dummy; } ;
struct TYPE_3__ {int lockdep_recursion; } ;


 scalar_t__ FUNC_0 (struct lockdep_map*,unsigned long) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct lockdep_map*,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct lockdep_map *VAR_1, int VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_6(VAR_0->lockdep_recursion))
  return;

 FUNC_4(VAR_4);
 FUNC_2(VAR_4);
 VAR_0->lockdep_recursion = 1;
 FUNC_5(VAR_1, VAR_3);
 if (FUNC_0(VAR_1, VAR_3))
  FUNC_1(VAR_0);
 VAR_0->lockdep_recursion = 0;
 FUNC_3(VAR_4);
}
