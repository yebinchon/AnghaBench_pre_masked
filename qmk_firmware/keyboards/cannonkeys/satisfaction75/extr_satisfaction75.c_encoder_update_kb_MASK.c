
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(uint8_t VAR_4, bool VAR_5) {
  VAR_1 = (VAR_1 + (VAR_5 ? 1 : -1)) % 64;
  VAR_3 = 1;
  if (VAR_4 == 0) {
    if (VAR_2 == 0){
      uint16_t VAR_6 = 0;
      if (VAR_5) {
        VAR_6 = FUNC_2();
      } else {
        VAR_6 = FUNC_1();
      }
      uint16_t VAR_7 = FUNC_5();
      if(VAR_6 != 0){
        FUNC_3(VAR_6);
        while (FUNC_4(VAR_7) < VAR_0){ }
        FUNC_6(VAR_6);
      }
    } else {
      if(VAR_5){
        FUNC_0(0);
      } else {
        FUNC_0(1);
      }
    }
  }
}
