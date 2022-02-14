
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int*,int ) ;

__attribute__((used)) static bool FUNC_9(void)
{
 pid_t VAR_3 = FUNC_2();
 if (VAR_3 == 0) {
  VAR_2 = 0;
  return 1;
 } else if (VAR_3 > 0) {
  int VAR_4;
  if (FUNC_8(VAR_3, &VAR_4, 0) != VAR_3 ||
      !FUNC_1(VAR_4)) {
   FUNC_5("Child died\n");
   VAR_2++;
  } else if (FUNC_0(VAR_4) != 0) {
   FUNC_5("Child failed\n");
   VAR_2++;
  } else {

   if (FUNC_3() != VAR_1)
    FUNC_6("Passed\n");
  }
  return 0;
 } else {
  FUNC_4("fork - %s\n", FUNC_7(VAR_0));
  return 0;
 }
}
