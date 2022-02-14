
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


 long VAR_0 ;
 long VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_5, siginfo_t *VAR_6, void *VAR_7)
{
 ucontext_t *VAR_8 = (ucontext_t*)VAR_7;
 long VAR_9 = (long)VAR_8->uc_mcontext.gregs[VAR_2];

 if (VAR_9 != -VAR_0 && VAR_9 != -VAR_1) {
  FUNC_0("[FAIL]\tAX had the wrong value: 0x%lx\n",
         (unsigned long)VAR_9);
  VAR_4++;
 } else {
  FUNC_0("[OK]\tSeems okay\n");
 }

 FUNC_1(VAR_3, 1);
}
