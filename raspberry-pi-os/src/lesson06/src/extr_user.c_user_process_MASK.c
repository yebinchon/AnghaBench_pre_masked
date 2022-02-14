
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void FUNC_4()
{
 FUNC_2("User process\n\r");
 int VAR_0 = FUNC_1();
 if (VAR_0 < 0) {
  FUNC_2("Error during fork\n\r");
  FUNC_0();
  return;
 }
 if (VAR_0 == 0){
  FUNC_3("abcde");
 } else {
  FUNC_3("12345");
 }
}
