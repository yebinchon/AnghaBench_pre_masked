
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regs_dump {scalar_t__ regs; } ;
struct perf_sample {struct regs_dump intr_regs; } ;


 int FUNC_0 (char*,struct regs_dump*) ;

__attribute__((used)) static void FUNC_1(struct perf_sample *VAR_0)
{
 struct regs_dump *VAR_1 = &VAR_0->intr_regs;

 if (VAR_1->regs)
  FUNC_0("intr", VAR_1);
}
