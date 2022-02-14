
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* fp_regs; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; struct TYPE_4__* uc_link; } ;
typedef TYPE_2__ ucontext_t ;
typedef int siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (char*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(int VAR_5, siginfo_t *VAR_6, void *VAR_7)
{
 int VAR_8;
 ucontext_t *VAR_9 = VAR_7;
 ucontext_t *VAR_10 = VAR_9->uc_link;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {

  VAR_3 = (VAR_9->uc_mcontext.fp_regs[VAR_0 + VAR_8] != VAR_4[VAR_8]);
  if (VAR_3) {
   VAR_2 = 1;
   FUNC_0("FPR%d (1st context) == %g instead of %g (expected)\n",
    VAR_0 + VAR_8, VAR_9->uc_mcontext.fp_regs[VAR_0 + VAR_8], VAR_4[VAR_8]);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {

  VAR_3 = (VAR_10->uc_mcontext.fp_regs[VAR_0 + VAR_8] != VAR_4[VAR_1 + VAR_8]);
  if (VAR_3) {
   VAR_2 = 1;
   FUNC_0("FPR%d (2nd context) == %g instead of %g (expected)\n",
    VAR_0 + VAR_8, VAR_10->uc_mcontext.fp_regs[VAR_0 + VAR_8], VAR_4[VAR_1 + VAR_8]);
  }
 }
}
