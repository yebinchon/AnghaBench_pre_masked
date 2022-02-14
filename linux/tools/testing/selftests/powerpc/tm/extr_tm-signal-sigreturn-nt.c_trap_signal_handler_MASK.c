
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* regs; } ;
struct TYPE_6__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_3__ ucontext_t ;
typedef int siginfo_t ;
struct TYPE_4__ {int nip; } ;



void FUNC_0(int VAR_0, siginfo_t *VAR_1, void *VAR_2)
{
 ucontext_t *VAR_3 = (ucontext_t *) VAR_2;

 asm("tbegin.; tsuspend.;");


 VAR_3->uc_mcontext.regs->nip += 4;
}
