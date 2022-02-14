
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* gregs; } ;
struct TYPE_6__ {int uc_flags; TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int siginfo_t ;
typedef int gregset_t ;
typedef scalar_t__ greg_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 (scalar_t__**,scalar_t__**,int) ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(int VAR_13, siginfo_t *VAR_14, void *VAR_15)
{
 ucontext_t *VAR_16 = (ucontext_t*)VAR_15;

 FUNC_3(VAR_13, VAR_16);

 VAR_9 = VAR_16->uc_mcontext.gregs[VAR_1];
 VAR_11 = VAR_16->uc_mcontext.gregs[VAR_2];

 unsigned short VAR_17;
 asm ("mov %%ss,%0" : "=r" (VAR_17));

 greg_t VAR_18 = VAR_16->uc_mcontext.gregs[VAR_0];
 if (VAR_18 != VAR_10 && VAR_13 == VAR_3) {

  FUNC_1("[FAIL]\tSIGTRAP: ss = %hx, frame ss = %hx, ax = %llx\n",
         VAR_17, *FUNC_2(VAR_16), (unsigned long long)VAR_18);
  VAR_6++;
 }

 FUNC_0(&VAR_7, &VAR_16->uc_mcontext.gregs, sizeof(gregset_t));
 FUNC_0(&VAR_16->uc_mcontext.gregs, &VAR_5, sizeof(gregset_t));


 if (VAR_8) {
  if (VAR_16->uc_flags & VAR_4) {
   FUNC_1("[FAIL]\tUC_STRICT_RESTORE_SS was set inappropriately\n");
   VAR_6++;
  } else {





   FUNC_1("\tCorrupting SS on return to 64-bit mode\n");
   *FUNC_2(VAR_16) = 0;
  }
 }


 VAR_12 = VAR_13;
}
