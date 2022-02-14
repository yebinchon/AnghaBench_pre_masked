
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;

void FUNC_3(){
 FUNC_2("Kernel process started. EL %d\r\n", FUNC_0());
 int VAR_1 = FUNC_1((unsigned long)&VAR_0);
 if (VAR_1 < 0){
  FUNC_2("Error while moving process to user mode\n\r");
 }
}
