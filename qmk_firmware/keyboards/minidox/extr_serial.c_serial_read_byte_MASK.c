
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static
uint8_t FUNC_4(void) {
  uint8_t VAR_0 = 0;
  FUNC_2();
  for ( uint8_t VAR_1 = 0; VAR_1 < 8; ++VAR_1) {
    VAR_0 = (VAR_0 << 1) | FUNC_3();
    FUNC_1();
    FUNC_0(1);
  }

  return VAR_0;
}
