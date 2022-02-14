
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_7, siginfo_t *VAR_8, void *VAR_9)
{
 ucontext_t *VAR_10 = (ucontext_t*)VAR_9;

 if (VAR_10->uc_mcontext.gregs[VAR_1] & VAR_4 ||
     (VAR_10->uc_mcontext.gregs[VAR_0] & 3) != 3) {
  FUNC_0("[FAIL]\tSignal frame should not reflect vm86 mode\n");
  VAR_6++;
 }

 const char *VAR_11;
 if (VAR_7 == VAR_3)
  VAR_11 = "SIGSEGV";
 else if (VAR_7 == VAR_2)
  VAR_11 = "SIGILL";
 else
  VAR_11 = "unexpected signal";

 FUNC_0("[INFO]\t%s: FLAGS = 0x%lx, CS = 0x%hx\n", VAR_11,
        (unsigned long)VAR_10->uc_mcontext.gregs[VAR_1],
        (unsigned short)VAR_10->uc_mcontext.gregs[VAR_0]);

 VAR_5 = 1;
}
