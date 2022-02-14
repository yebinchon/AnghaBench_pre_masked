
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 struct task_struct* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;

void FUNC_6(const char *VAR_3, const int VAR_4, const char *VAR_5)
{
 struct task_struct *VAR_6 = VAR_0;


 FUNC_2("\n");
 FUNC_2("=============================\n");
 FUNC_2("WARNING: suspicious RCU usage\n");
 FUNC_3();
 FUNC_2("-----------------------------\n");
 FUNC_2("%s:%d %s!\n", VAR_3, VAR_4, VAR_5);
 FUNC_2("\nother info that might help us debug this:\n\n");
 FUNC_2("\n%srcu_scheduler_active = %d, debug_locks = %d\n",
        !FUNC_5()
   ? "RCU used illegally from offline CPU!\n"
   : !FUNC_4()
    ? "RCU used illegally from idle CPU!\n"
    : "",
        VAR_2, VAR_1);
 if (!FUNC_4())
  FUNC_2("RCU used illegally from extended quiescent state!\n");

 FUNC_1(VAR_6);
 FUNC_2("\nstack backtrace:\n");
 FUNC_0();
}
