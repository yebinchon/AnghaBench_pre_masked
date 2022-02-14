
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcu_head {int dummy; } ;
struct pending_free {int dummy; } ;
struct TYPE_4__ {int lockdep_recursion; } ;
struct TYPE_3__ {int index; int scheduled; struct pending_free* pf; struct rcu_head rcu_head; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct pending_free*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pending_free*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(struct rcu_head *VAR_3)
{
 struct pending_free *VAR_4;
 unsigned long VAR_5;

 if (FUNC_0(VAR_3 != &VAR_1.rcu_head))
  return;

 FUNC_6(VAR_5);
 FUNC_2(&VAR_2);
 VAR_0->lockdep_recursion = 1;


 VAR_4 = VAR_1.pf + (VAR_1.index ^ 1);
 FUNC_1(VAR_4);
 VAR_1.scheduled = 0;




 FUNC_4(VAR_1.pf + VAR_1.index);

 VAR_0->lockdep_recursion = 0;
 FUNC_3(&VAR_2);
 FUNC_5(VAR_5);
}
