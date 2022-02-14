
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;
struct lockdep_map {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 (struct lockdep_map*) ;
 int FUNC_8 (struct task_struct*) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_1,
           struct lockdep_map *VAR_2,
           unsigned long VAR_3)
{
 if (!FUNC_0())
  return;
 if (VAR_0)
  return;

 FUNC_4("\n");
 FUNC_4("=====================================\n");
 FUNC_4("WARNING: bad unlock balance detected!\n");
 FUNC_6();
 FUNC_4("-------------------------------------\n");
 FUNC_4("%s/%d is trying to release lock (",
  VAR_1->comm, FUNC_8(VAR_1));
 FUNC_7(VAR_2);
 FUNC_3(") at:\n");
 FUNC_5(VAR_3);
 FUNC_4("but there are no more locks to release!\n");
 FUNC_4("\nother info that might help us debug this:\n");
 FUNC_2(VAR_1);

 FUNC_4("\nstack backtrace:\n");
 FUNC_1();
}
