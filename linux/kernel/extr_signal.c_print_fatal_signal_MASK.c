
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ip; } ;


 scalar_t__ FUNC_0 (unsigned char,unsigned char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct pt_regs*) ;
 struct pt_regs* FUNC_6 () ;

__attribute__((used)) static void FUNC_7(int VAR_0)
{
 struct pt_regs *VAR_1 = FUNC_6();
 FUNC_2("potentially unexpected fatal signal %d.\n", VAR_0);
 FUNC_3();
 FUNC_5(VAR_1);
 FUNC_4();
}
