
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct warn_args {int args; int fmt; } ;
struct pt_regs {int dummy; } ;
struct TYPE_3__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,int ,int ,void*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct pt_regs*) ;
 int FUNC_10 (int ,int ) ;

void FUNC_11(const char *VAR_3, int VAR_4, void *VAR_5, unsigned VAR_6,
     struct pt_regs *VAR_7, struct warn_args *VAR_8)
{
 FUNC_1();

 if (VAR_3)
  FUNC_4("WARNING: CPU: %d PID: %d at %s:%d %pS\n",
   FUNC_8(), VAR_1->pid, VAR_3, VAR_4,
   VAR_5);
 else
  FUNC_4("WARNING: CPU: %d PID: %d at %pS\n",
   FUNC_8(), VAR_1->pid, VAR_5);

 if (VAR_8)
  FUNC_10(VAR_8->fmt, VAR_8->args);

 if (VAR_2) {






  VAR_2 = 0;
  FUNC_3("panic_on_warn set ...\n");
 }

 FUNC_6();

 if (VAR_7)
  FUNC_9(VAR_7);
 else
  FUNC_2();

 FUNC_5(VAR_1);

 FUNC_7();


 FUNC_0(VAR_6, VAR_0);
}
