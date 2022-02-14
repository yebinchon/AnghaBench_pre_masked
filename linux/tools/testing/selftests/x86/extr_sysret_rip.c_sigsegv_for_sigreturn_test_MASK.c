
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* gregs; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int siginfo_t ;
typedef int gregset_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__**,int *,int) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(int VAR_4, siginfo_t *VAR_5, void *VAR_6)
{
 ucontext_t *VAR_7 = (ucontext_t*)VAR_6;

 if (VAR_2 != VAR_7->uc_mcontext.gregs[VAR_0]) {
  FUNC_3("[FAIL]\tRequested RIP=0x%lx but got RIP=0x%lx\n",
         VAR_2, (unsigned long)VAR_7->uc_mcontext.gregs[VAR_0]);
  FUNC_1(VAR_3);
  FUNC_0(1);
 }

 FUNC_2(&VAR_7->uc_mcontext.gregs, &VAR_1, sizeof(gregset_t));

 FUNC_3("[OK]\tGot SIGSEGV at RIP=0x%lx\n", VAR_2);
}
