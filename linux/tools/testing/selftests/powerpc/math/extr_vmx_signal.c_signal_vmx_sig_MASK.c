
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* v_regs; } ;
struct TYPE_5__ {TYPE_3__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int siginfo_t ;
typedef TYPE_3__ mcontext_t ;
struct TYPE_4__ {int** vrregs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int **,int) ;
 int FUNC_1 (char*,...) ;
 int ** VAR_1 ;

void FUNC_2(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 int VAR_5;
 ucontext_t *VAR_6 = VAR_4;
 mcontext_t *VAR_7 = &VAR_6->uc_mcontext;


 for (VAR_5 = 20; VAR_5 < 32; VAR_5++) {
  if (FUNC_0(VAR_7->v_regs->vrregs[VAR_5], &VAR_1[VAR_5 - 20], 16)) {
   int VAR_8;






   FUNC_1("VMX mismatch at reg %d!\n", VAR_5);
   FUNC_1("Reg | Actual                  | Expected\n");
   for (VAR_8 = 20; VAR_8 < 32; VAR_8++) {
    FUNC_1("%d  | 0x%04x%04x%04x%04x      | 0x%04x%04x%04x%04x\n", VAR_8, VAR_7->v_regs->vrregs[VAR_8][0],
        VAR_7->v_regs->vrregs[VAR_8][1], VAR_7->v_regs->vrregs[VAR_8][2], VAR_7->v_regs->vrregs[VAR_8][3],
        VAR_1[VAR_8 - 20][0], VAR_1[VAR_8 - 20][1], VAR_1[VAR_8 - 20][2], VAR_1[VAR_8 - 20][3]);
   }
   VAR_0 = 1;
   break;
  }
 }
}
