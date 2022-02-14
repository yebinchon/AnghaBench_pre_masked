
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(){
 FUNC_2("Kernel process started. EL %d\r\n", FUNC_0());
 unsigned long VAR_3 = (unsigned long)&VAR_0;
 unsigned long VAR_4 = (unsigned long)&VAR_1;
 unsigned long VAR_5 = (unsigned long)&VAR_2;
 int VAR_6 = FUNC_1(VAR_3, VAR_4 - VAR_3, VAR_5 - VAR_3);
 if (VAR_6 < 0){
  FUNC_2("Error while moving process to user mode\n\r");
 }
}
