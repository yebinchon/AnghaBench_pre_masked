
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void FUNC_2(uint8_t VAR_0){
  switch (VAR_0) {
    case 128:
      break;
    default:
      FUNC_1("Tried to set unsupported CAN mode: "); FUNC_0(VAR_0); FUNC_1("\n");
      break;
  }
}
