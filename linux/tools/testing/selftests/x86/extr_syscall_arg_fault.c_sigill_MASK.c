
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


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 ucontext_t *VAR_5 = (ucontext_t*)VAR_4;
 unsigned short *VAR_6 = (unsigned short *)VAR_5->uc_mcontext.gregs[VAR_0];

 if (*VAR_6 == 0x0b0f) {

  FUNC_0("[OK]\tSYSCALL returned normally\n");
 } else {
  FUNC_0("[SKIP]\tIllegal instruction\n");
 }
 FUNC_1(VAR_1, 1);
}
