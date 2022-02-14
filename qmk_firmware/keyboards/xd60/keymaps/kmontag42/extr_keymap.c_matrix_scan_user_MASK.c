
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;

void FUNC_3(void) {
  static uint8_t VAR_1 = 255;
  uint8_t VAR_2 = FUNC_0(VAR_0);

  if (VAR_1 != VAR_2) {
    switch (VAR_2) {
    case 0:
      FUNC_1(1);
      FUNC_2(0xFF, 0xFF, 0xFF);
      break;
    case 1:
      FUNC_1(18);
      FUNC_2(0x00, 0xFF, 0xFF);
      break;
    }

    VAR_1 = VAR_2;
  }
}
