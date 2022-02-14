
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,int*,int) ;

__attribute__((used)) static void FUNC_10(uid_t VAR_4, bool VAR_5)
{
 pid_t VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6();
 if (VAR_6 == -1) {
  FUNC_4("fork\n");
 }

 if (VAR_6 == 0) {
  FUNC_8(VAR_4);
  if (FUNC_7() == VAR_4)
   FUNC_5(VAR_1);
  else
   FUNC_5(VAR_0);
 } else {
  do {
   VAR_7 = FUNC_9(VAR_6, &VAR_8, VAR_3 | VAR_2);
   if (VAR_7 == -1) {
    FUNC_4("waitpid\n");
   }

   if (FUNC_1(VAR_8)) {
    if (FUNC_0(VAR_8) == VAR_1) {
     if (VAR_5) {
      return;
     } else {
      FUNC_4("unexpected success\n");
     }
    } else {
     if (VAR_5) {
      FUNC_4("unexpected failure\n");
     } else {
      return;
     }
    }
   } else if (FUNC_2(VAR_8)) {
    if (FUNC_3(VAR_8) == 9) {
     if (VAR_5)
      FUNC_4("killed unexpectedly\n");
     else
      return;
    } else {
     FUNC_4("unexpected signal: %d\n", VAR_8);
    }
   } else {
    FUNC_4("unexpected status: %d\n", VAR_8);
   }
  } while (!FUNC_1(VAR_8) && !FUNC_2(VAR_8));
 }

 FUNC_4("should not reach here\n");
}
