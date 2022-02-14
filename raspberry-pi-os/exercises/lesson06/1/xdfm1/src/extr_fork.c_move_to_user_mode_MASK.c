
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {unsigned long pc; int sp; int pstate; } ;
struct TYPE_5__ {int pgd; } ;
struct TYPE_6__ {TYPE_1__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (int ) ;
 struct pt_regs* FUNC_3 (TYPE_2__*) ;

int FUNC_4(unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 struct pt_regs *VAR_6 = FUNC_3(VAR_2);
 VAR_6->pstate = VAR_1;
 VAR_6->pc = VAR_5;
 VAR_6->sp = 2 * VAR_0;
 unsigned long VAR_7 = FUNC_0(VAR_2, 0);
 if (VAR_7 == 0) {
  return -1;
 }
 FUNC_1(VAR_3, VAR_7, VAR_4);
 FUNC_2(VAR_2->mm.pgd);
 return 0;
}
