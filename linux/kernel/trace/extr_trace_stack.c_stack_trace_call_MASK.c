
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct ftrace_ops {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,unsigned long*) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(unsigned long VAR_2, unsigned long VAR_3,
   struct ftrace_ops *VAR_4, struct pt_regs *VAR_5)
{
 unsigned long VAR_6;

 FUNC_4();


 FUNC_1(VAR_1);
 if (FUNC_2(VAR_1) != 1)
  goto out;


 if (!FUNC_6())
  goto out;

 VAR_2 += VAR_0;

 FUNC_3(VAR_2, &VAR_6);

 out:
 FUNC_0(VAR_1);

 FUNC_5();
}
