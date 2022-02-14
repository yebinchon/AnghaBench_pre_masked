
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* gregs; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct unwind_state {unsigned long ip; int depth; } ;
typedef int siginfo_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,struct unwind_state*) ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(int VAR_8, siginfo_t *VAR_9, void *VAR_10)
{
 ucontext_t *VAR_11 = (ucontext_t *)VAR_10;
 struct unwind_state VAR_12;
 unsigned long VAR_13 = VAR_11->uc_mcontext.gregs[VAR_1];

 if (!VAR_4 && VAR_13 == VAR_6) {
  VAR_4 = 1;


  VAR_5 = *(unsigned long *)(unsigned long)VAR_11->uc_mcontext.gregs[VAR_2];

  FUNC_1("\tIn vsyscall at 0x%lx, returning to 0x%lx\n",
         VAR_13, VAR_5);
 }

 if (!VAR_4)
  return;

 if (VAR_13 == VAR_5) {
  VAR_11->uc_mcontext.gregs[VAR_0] &= ~VAR_3;
  FUNC_1("\tVsyscall is done\n");
  return;
 }

 FUNC_1("\tSIGTRAP at 0x%lx\n", VAR_13);

 VAR_12.ip = VAR_13;
 VAR_12.depth = -1;
 FUNC_0(VAR_7, &VAR_12);
}
