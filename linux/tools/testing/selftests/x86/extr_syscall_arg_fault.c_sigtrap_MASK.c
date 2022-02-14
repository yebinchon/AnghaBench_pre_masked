
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
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(int VAR_3, siginfo_t *VAR_4, void *VAR_5)
{






 ucontext_t *VAR_6 = (ucontext_t*)VAR_5;
 unsigned short *VAR_7 = (unsigned short *)VAR_6->uc_mcontext.gregs[VAR_0];

 if (*VAR_7 == 0x340f || *VAR_7 == 0x050f) {

  VAR_2++;
  if (VAR_2 > 3) {
   FUNC_0("[WARN]\tGot stuck single-stepping -- you probably have a KVM bug\n");
   FUNC_1(VAR_1, 1);
  }
 } else {
  VAR_2 = 0;
 }
}
