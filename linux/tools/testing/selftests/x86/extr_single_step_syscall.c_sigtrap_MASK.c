
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* gregs; } ;
struct TYPE_6__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct TYPE_7__ {scalar_t__ si_addr; } ;
typedef TYPE_3__ siginfo_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(int VAR_3, siginfo_t *VAR_4, void *VAR_5)
{
 ucontext_t *VAR_6 = (ucontext_t*)VAR_5;

 if (FUNC_1() & VAR_1) {
  FUNC_3(FUNC_1() & ~VAR_1);
  FUNC_2("[WARN]\tSIGTRAP handler had TF set\n");
  FUNC_0(1);
 }

 VAR_2++;

 if (VAR_2 == 10000 || VAR_2 == 10001) {
  FUNC_2("[WARN]\tHit %d SIGTRAPs with si_addr 0x%lx, ip 0x%lx\n",
         (int)VAR_2,
         (unsigned long)VAR_4->si_addr,
         (unsigned long)VAR_6->uc_mcontext.gregs[VAR_0]);
 }
}
