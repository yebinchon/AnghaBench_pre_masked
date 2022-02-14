
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static
void FUNC_4(uint8_t VAR_0) {
  uint8_t VAR_1 = 8;
  FUNC_3();
  while( VAR_1-- ) {
    if(VAR_0 & (1 << VAR_1)) {
      FUNC_1();
    } else {
      FUNC_2();
    }
    FUNC_0();
  }
}
