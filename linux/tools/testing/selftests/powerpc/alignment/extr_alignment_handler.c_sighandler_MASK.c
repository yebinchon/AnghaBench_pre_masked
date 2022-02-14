
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* gp_regs; TYPE_1__* uc_regs; } ;
struct TYPE_6__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_3__ ucontext_t ;
typedef int siginfo_t ;
struct TYPE_4__ {int* gregs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;

void FUNC_2(int VAR_4, siginfo_t *VAR_5, void *VAR_6)
{
 ucontext_t *VAR_7 = VAR_6;

 if (!VAR_3) {
  FUNC_1(VAR_4, VAR_1);
  FUNC_0(0, VAR_4);
 }
 VAR_2 = VAR_4;



 VAR_7->uc_mcontext.uc_regs->gregs[VAR_0] += 4;

}
