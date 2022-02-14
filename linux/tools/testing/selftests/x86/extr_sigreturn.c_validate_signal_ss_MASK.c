
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uc_flags; } ;
typedef TYPE_1__ ucontext_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (unsigned short) ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 unsigned short* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(int VAR_3, ucontext_t *VAR_4)
{

 bool VAR_5 = (FUNC_0(*FUNC_1(VAR_4)) == 64);

 if (!(VAR_4->uc_flags & VAR_0)) {
  FUNC_3("[FAIL]\tUC_SIGCONTEXT_SS was not set\n");
  VAR_2++;





  return;
 }


 if (!!(VAR_4->uc_flags & VAR_1) != VAR_5) {
  FUNC_3("[FAIL]\tUC_STRICT_RESTORE_SS was wrong in signal %d\n",
         VAR_3);
  VAR_2++;
 }

 if (FUNC_2(*FUNC_4(VAR_4))) {





  unsigned short VAR_6;
  asm ("mov %%ss, %0" : "=rm" (VAR_6));
  if (VAR_6 != *FUNC_4(VAR_4)) {
   FUNC_3("[FAIL]\tHW SS didn't match saved SS\n");
   VAR_2++;
  }
 }

}
