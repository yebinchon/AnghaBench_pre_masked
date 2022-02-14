
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_sigaction; int sa_flags; } ;
struct rlimit {int member_1; int member_0; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct sigaction*,int ,int) ;
 int FUNC_6 (int ,struct rlimit*) ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
 pid_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3();
 if (VAR_7 < 0) {
  FUNC_4(VAR_6, "fork, errno %d\n", VAR_3);
  FUNC_2(1);
 }
 if (VAR_7 == 0) {
  struct rlimit VAR_9 = {0, 0};
  (void)FUNC_6(VAR_0, &VAR_9);


  struct sigaction VAR_10;
  FUNC_5(&VAR_10, 0, sizeof(struct sigaction));
  VAR_10.sa_flags = VAR_1;
  VAR_10.sa_sigaction = VAR_5;
  (void)FUNC_7(VAR_2, &VAR_10, ((void*)0));

  *(volatile int *)0xffffffffff600000UL;
  FUNC_2(0);
 }
 FUNC_8(VAR_7, &VAR_8, 0);
 if (FUNC_1(VAR_8) && FUNC_0(VAR_8) == 0) {
  VAR_4 = 1;
 }
}
