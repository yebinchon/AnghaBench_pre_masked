
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lockdep_recursion; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 FUNC_0(&VAR_2);






 if (!VAR_1) {
  FUNC_1(&VAR_2);
  return 0;
 }

 VAR_0->lockdep_recursion++;
 return 1;
}
