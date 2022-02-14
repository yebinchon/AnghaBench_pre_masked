
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* uc_regs; scalar_t__* gp_regs; } ;
struct TYPE_6__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_3__ ucontext_t ;
typedef int siginfo_t ;
struct TYPE_4__ {scalar_t__* gregs; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

void FUNC_1(int VAR_3, siginfo_t *VAR_4, void *VAR_5)
{
 ucontext_t *VAR_6 = VAR_5;



 unsigned int *VAR_7 = (unsigned int *)VAR_6->uc_mcontext.uc_regs->gregs[VAR_0];






 if ((*VAR_7 & VAR_2) == VAR_1)
  FUNC_0(0);

 FUNC_0(1);
}
