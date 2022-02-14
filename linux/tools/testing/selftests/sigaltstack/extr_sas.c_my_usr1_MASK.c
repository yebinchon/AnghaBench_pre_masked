
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stk_data {int flag; int msg; } ;
struct TYPE_3__ {scalar_t__ ss_flags; } ;
typedef TYPE_1__ stack_t ;
typedef int siginfo_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;
 int VAR_7 ;

void FUNC_12(int VAR_8, siginfo_t *VAR_9, void *VAR_10)
{
 char *VAR_11;
 int VAR_12;
 stack_t VAR_13;
 struct stk_data *VAR_14;




 register unsigned long VAR_15 asm("sp");


 if (VAR_15 < (unsigned long)VAR_6 ||
   VAR_15 >= (unsigned long)VAR_6 + VAR_1) {
  FUNC_3("SP is not on sigaltstack\n");
 }

 VAR_11 = FUNC_0(1024);
 FUNC_1(VAR_11);
 VAR_14 = (struct stk_data *)(VAR_11 + 512);
 FUNC_9(VAR_14->msg, VAR_4);
 VAR_14->flag = 1;
 FUNC_5("[RUN]\tsignal USR1\n");
 VAR_12 = FUNC_8(((void*)0), &VAR_13);
 if (VAR_12) {
  FUNC_3("sigaltstack() - %s\n", FUNC_10(VAR_3));
  FUNC_2(VAR_0);
 }
 if (VAR_13.ss_flags != VAR_2)
  FUNC_6("tss_flags=%x, should be SS_DISABLE\n",
    VAR_13.ss_flags);
 else
  FUNC_7(
    "sigaltstack is disabled in sighandler\n");
 FUNC_11(&VAR_5, &VAR_7);
 FUNC_5("%s\n", VAR_14->msg);
 if (!VAR_14->flag) {
  FUNC_4("[RUN]\tAborting\n");
  FUNC_2(VAR_0);
 }
}
