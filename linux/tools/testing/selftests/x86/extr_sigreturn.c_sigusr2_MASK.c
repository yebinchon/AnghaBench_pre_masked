
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uc_flags; } ;
typedef TYPE_1__ ucontext_t ;
typedef int siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 ucontext_t *VAR_5 = (ucontext_t*)VAR_4;

 if (!(VAR_5->uc_flags & VAR_0)) {
  FUNC_0("[FAIL]\traise(2) didn't set UC_STRICT_RESTORE_SS\n");
  VAR_1++;
  return;
 }

 VAR_5->uc_flags &= ~VAR_0;
 *FUNC_1(VAR_5) = 0;


}
