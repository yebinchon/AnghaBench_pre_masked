
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct pt_regs* regs; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct pt_regs {int nip; scalar_t__ dar; } ;
typedef int siginfo_t ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4, siginfo_t *VAR_5, void *VAR_6)
{
 ucontext_t *VAR_7 = (ucontext_t *)VAR_6;
 struct pt_regs *VAR_8 = VAR_7->uc_mcontext.regs;

 if (!VAR_2) {
  FUNC_1(VAR_3, "Segfault outside of test !\n");
  FUNC_0(1);
 }

 VAR_1 = 1;
 VAR_0 = (void *)VAR_8->dar;
 VAR_8->nip += 4;
}
