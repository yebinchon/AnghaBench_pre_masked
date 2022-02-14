
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
typedef int ssize_t ;
struct TYPE_7__ {scalar_t__ si_code; } ;
typedef TYPE_3__ siginfo_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,size_t) ;

__attribute__((used)) static void FUNC_1(int VAR_9, siginfo_t *VAR_10, void *VAR_11)
{
 ucontext_t *VAR_12 = (ucontext_t *)(VAR_11);
 int VAR_13;
 char *VAR_14;
 ssize_t VAR_15;
 size_t VAR_16;
 if (VAR_10->si_code != VAR_7)
  return;
 if (!VAR_12)
  return;
 VAR_13 = VAR_12->uc_mcontext.gregs[VAR_4];
 VAR_14 = (char *) VAR_12->uc_mcontext.gregs[VAR_1];
 VAR_16 = (size_t) VAR_12->uc_mcontext.gregs[VAR_2];

 if (VAR_13 != VAR_8)
  return;
 if (VAR_12->uc_mcontext.gregs[VAR_0] != VAR_5)
  return;

 VAR_12->uc_mcontext.gregs[VAR_3] = -1;
 if (FUNC_0(VAR_6, "[ERR] ", 6) > 0) {
  VAR_15 = FUNC_0(VAR_6, VAR_14, VAR_16);
  VAR_12->uc_mcontext.gregs[VAR_3] = VAR_15;
 }
 return;
}
