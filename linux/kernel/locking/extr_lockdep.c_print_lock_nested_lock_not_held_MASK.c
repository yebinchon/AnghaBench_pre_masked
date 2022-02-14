
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int comm; } ;
struct held_lock {TYPE_1__* nest_lock; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (struct held_lock*) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static void
FUNC_7(struct task_struct *VAR_1,
    struct held_lock *VAR_2,
    unsigned long VAR_3)
{
 if (!FUNC_0())
  return;
 if (VAR_0)
  return;

 FUNC_3("\n");
 FUNC_3("==================================\n");
 FUNC_3("WARNING: Nested lock was not taken\n");
 FUNC_4();
 FUNC_3("----------------------------------\n");

 FUNC_3("%s/%d is trying to lock:\n", VAR_1->comm, FUNC_6(VAR_1));
 FUNC_5(VAR_2);

 FUNC_3("\nbut this task is not holding:\n");
 FUNC_3("%s\n", VAR_2->nest_lock->name);

 FUNC_3("\nstack backtrace:\n");
 FUNC_1();

 FUNC_3("\nother info that might help us debug this:\n");
 FUNC_2(VAR_1);

 FUNC_3("\nstack backtrace:\n");
 FUNC_1();
}
