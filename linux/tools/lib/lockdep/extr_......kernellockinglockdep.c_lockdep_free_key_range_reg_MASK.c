
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pending_free {int dummy; } ;
struct TYPE_2__ {int lockdep_recursion; } ;


 int FUNC_0 (struct pending_free*,void*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pending_free*) ;
 TYPE_1__* VAR_0 ;
 struct pending_free* FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void *VAR_2, unsigned long VAR_3)
{
 struct pending_free *VAR_4;
 unsigned long VAR_5;

 FUNC_5();

 FUNC_7(VAR_5);
 FUNC_1(&VAR_1);
 VAR_0->lockdep_recursion = 1;
 VAR_4 = FUNC_4();
 FUNC_0(VAR_4, VAR_2, VAR_3);
 FUNC_3(VAR_4);
 VAR_0->lockdep_recursion = 0;
 FUNC_2(&VAR_1);
 FUNC_6(VAR_5);





 FUNC_8();
}
