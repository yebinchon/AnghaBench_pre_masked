
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* fp_regs; } ;
struct TYPE_3__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
typedef int siginfo_t ;
typedef TYPE_2__ mcontext_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

void FUNC_0(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 int VAR_5;
 ucontext_t *VAR_6 = VAR_4;
 mcontext_t *VAR_7 = &VAR_6->uc_mcontext;


 for (VAR_5 = 14; VAR_5 < 32; VAR_5++) {
  if (VAR_7->fp_regs[VAR_5] != VAR_1[VAR_5 - 14]) {
   VAR_0 = 1;
   break;
  }
 }
}
