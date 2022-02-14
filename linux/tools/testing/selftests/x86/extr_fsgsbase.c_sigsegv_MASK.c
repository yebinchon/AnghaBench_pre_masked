
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* gregs; } ;
struct TYPE_6__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct TYPE_7__ {scalar_t__ si_addr; } ;
typedef TYPE_3__ siginfo_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(int VAR_4, siginfo_t *VAR_5, void *VAR_6)
{
 ucontext_t *VAR_7 = (ucontext_t*)VAR_6;

 if (!VAR_3) {
  FUNC_0(VAR_1);
  return;
 }

 VAR_3 = 0;
 VAR_2 = (unsigned long)VAR_5->si_addr;

 VAR_7->uc_mcontext.gregs[VAR_0] += 4;

}
