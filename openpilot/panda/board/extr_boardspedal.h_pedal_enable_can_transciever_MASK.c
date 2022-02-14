
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(uint8_t VAR_1, bool VAR_2) {
  switch (VAR_1){
    case 1:
      FUNC_2(VAR_0, 3, !VAR_2);
      break;
    default:
      FUNC_1("Invalid CAN transciever ("); FUNC_0(VAR_1); FUNC_1("): enabling failed\n");
      break;
  }
}
