
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int VAR_0 ;

void FUNC_6(){
 char VAR_1[30] = {0};
 FUNC_5(VAR_1, "User process started\n\r");
 FUNC_3(VAR_1);
 unsigned long VAR_2 = FUNC_2();
 if (VAR_2 < 0) {
  FUNC_4("Error while allocating stack for process 1\n\r");
  return;
 }
 int VAR_3 = FUNC_0((unsigned long)&VAR_0, (unsigned long)"12345", VAR_2);
 if (VAR_3 < 0){
  FUNC_4("Error while clonning process 1\n\r");
  return;
 }
 VAR_2 = FUNC_2();
 if (VAR_2 < 0) {
  FUNC_4("Error while allocating stack for process 1\n\r");
  return;
 }
 VAR_3 = FUNC_0((unsigned long)&VAR_0, (unsigned long)"abcd", VAR_2);
 if (VAR_3 < 0){
  FUNC_4("Error while clonning process 2\n\r");
  return;
 }
 FUNC_1();
}
