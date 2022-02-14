
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* gp_regs; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_0(int VAR_6, siginfo_t *VAR_7, void *VAR_8)
{
 ucontext_t *VAR_9 = VAR_8;
 uint64_t VAR_10;


 VAR_10 = VAR_1 & VAR_9->uc_mcontext.gp_regs[VAR_2];





 if (VAR_4) {

  if (VAR_5 == 0) {






  }

  else if (VAR_5 == 1) {
   if (VAR_10 == VAR_0) {

    VAR_9->uc_mcontext.gp_regs[VAR_3] += 16;
   } else {





    VAR_9->uc_mcontext.gp_regs[VAR_2] |= 1UL;
    VAR_9->uc_mcontext.gp_regs[VAR_3] += 4;
   }
  }
 }





 else {

  if (VAR_5 == 0) {





   VAR_9->uc_mcontext.gp_regs[VAR_2] |= 1UL;
  }

  else if (VAR_5 == 1) {






  }

  else {
   VAR_9->uc_mcontext.gp_regs[VAR_2] &= ~1UL;
   VAR_9->uc_mcontext.gp_regs[VAR_3] += 8;
  }
 }

 VAR_5++;
}
