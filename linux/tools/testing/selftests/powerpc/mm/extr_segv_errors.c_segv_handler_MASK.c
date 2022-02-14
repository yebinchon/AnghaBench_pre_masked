
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct pt_regs* regs; } ;
struct TYPE_6__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct pt_regs {int nip; } ;
struct TYPE_7__ {int si_code; } ;
typedef TYPE_3__ siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 ucontext_t *VAR_5 = (ucontext_t *)VAR_4;
 struct pt_regs *VAR_6 = VAR_5->uc_mcontext.regs;

 VAR_0 = 1;
 VAR_1 = VAR_3->si_code;
 VAR_6->nip += 4;
}
