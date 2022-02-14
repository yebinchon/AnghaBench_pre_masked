
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long* gregs; } ;
struct TYPE_7__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int siginfo_t ;
typedef int gregset_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* FUNC_0 (TYPE_2__*) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int **,unsigned long**,int) ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(int VAR_9, siginfo_t *VAR_10, void *VAR_11)
{
 ucontext_t *VAR_12 = (ucontext_t*)VAR_11;

 FUNC_3(VAR_9, VAR_12);

 FUNC_1(&VAR_4, &VAR_12->uc_mcontext.gregs, sizeof(gregset_t));

 *FUNC_0(VAR_12) = VAR_7;
 *FUNC_2(VAR_12) = VAR_8;

 VAR_12->uc_mcontext.gregs[VAR_1] =
  VAR_7 == VAR_3 ? 0 : (unsigned long)&VAR_5;
 VAR_12->uc_mcontext.gregs[VAR_2] = (unsigned long)0x8badf00d5aadc0deULL;
 VAR_12->uc_mcontext.gregs[VAR_0] = 0;

 FUNC_1(&VAR_6, &VAR_12->uc_mcontext.gregs, sizeof(gregset_t));
 VAR_6[VAR_0] = *FUNC_2(VAR_12);

 return;
}
