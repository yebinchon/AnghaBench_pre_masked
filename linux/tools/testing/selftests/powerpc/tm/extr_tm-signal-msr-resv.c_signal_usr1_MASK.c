
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long long* gp_regs; TYPE_1__* uc_regs; } ;
struct TYPE_6__ {TYPE_2__ uc_mcontext; struct TYPE_6__* uc_link; } ;
typedef TYPE_3__ ucontext_t ;
typedef int siginfo_t ;
struct TYPE_4__ {unsigned long long* gregs; } ;


 size_t VAR_0 ;
 int VAR_1 ;

void FUNC_0(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 ucontext_t *VAR_5 = VAR_4;


 VAR_5->uc_link = VAR_5;




 VAR_5->uc_mcontext.uc_regs->gregs[VAR_0] |= (7ULL);


 VAR_1 = 1;
}
