
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
typedef int gregset_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *,scalar_t__**,int) ;
 void* VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(int VAR_9, siginfo_t *VAR_10, void *VAR_11)
{
 ucontext_t *VAR_12 = (ucontext_t*)VAR_11;

 FUNC_1(&VAR_6, &VAR_12->uc_mcontext.gregs, sizeof(gregset_t));


 VAR_12->uc_mcontext.gregs[VAR_3] = VAR_7;
 VAR_12->uc_mcontext.gregs[VAR_2] = VAR_7;


 FUNC_0(VAR_12->uc_mcontext.gregs[VAR_0] ==
        VAR_12->uc_mcontext.gregs[VAR_1]);

 FUNC_2(VAR_5, VAR_8, VAR_4);

 return;
}
