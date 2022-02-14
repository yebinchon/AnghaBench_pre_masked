
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* gregs; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int siginfo_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned long,int) ;

__attribute__((used)) static void FUNC_1(int VAR_3, siginfo_t *VAR_4, void *VAR_5)
{
 ucontext_t *VAR_6 = VAR_5;

 FUNC_0("\tGot SIGTRAP with RIP=%lx, EFLAGS.RF=%d\n",
        (unsigned long)VAR_6->uc_mcontext.gregs[VAR_1],
        !!(VAR_6->uc_mcontext.gregs[VAR_0] & VAR_2));
}
