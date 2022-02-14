
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {unsigned long pc; scalar_t__ sp; int pstate; } ;
struct TYPE_3__ {unsigned long stack; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long,int) ;
 struct pt_regs* FUNC_2 (TYPE_1__*) ;

int FUNC_3(unsigned long VAR_3)
{
 struct pt_regs *VAR_4 = FUNC_2(VAR_2);
 FUNC_1((unsigned long)VAR_4, sizeof(*VAR_4));
 VAR_4->pc = VAR_3;
 VAR_4->pstate = VAR_1;
 unsigned long VAR_5 = FUNC_0();
 if (!VAR_5) {
  return -1;
 }
 VAR_4->sp = VAR_5 + VAR_0;
 VAR_2->stack = VAR_5;
 return 0;
}
