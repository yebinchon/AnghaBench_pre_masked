
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
 int FUNC_0 (char*,char*,unsigned long) ;
 char** VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 ucontext_t *VAR_5 = VAR_4;

 FUNC_0("\tGot %s with RIP=%lx\n", VAR_1[VAR_2],
        (unsigned long)VAR_5->uc_mcontext.gregs[VAR_0]);
}
