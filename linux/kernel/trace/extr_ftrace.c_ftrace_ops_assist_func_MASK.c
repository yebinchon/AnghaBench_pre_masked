
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct ftrace_ops {int flags; int (* func ) (unsigned long,unsigned long,struct ftrace_ops*,struct pt_regs*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,unsigned long,struct ftrace_ops*,struct pt_regs*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_3, unsigned long VAR_4,
       struct ftrace_ops *VAR_5, struct pt_regs *VAR_6)
{
 int VAR_7;

 if ((VAR_5->flags & VAR_0) && !FUNC_2())
  return;

 VAR_7 = FUNC_5(VAR_2, VAR_1);
 if (VAR_7 < 0)
  return;

 FUNC_0();

 VAR_5->func(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_1();
 FUNC_4(VAR_7);
}
