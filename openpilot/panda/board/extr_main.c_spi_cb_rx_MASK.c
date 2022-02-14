
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int USB_Setup_TypeDef ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int*,int ) ;
 int FUNC_3 (int*,int,int ) ;
 int FUNC_4 (int*,int,int ) ;
 int FUNC_5 (int*,int,int ) ;

int FUNC_6(uint8_t *VAR_0, int VAR_1, uint8_t *VAR_2) {



  FUNC_0(VAR_1);
  int VAR_3 = 0;
  switch (VAR_0[0]) {
    case 0:

      VAR_3 = FUNC_2((USB_Setup_TypeDef *)(VAR_0+4), VAR_2, 0);
      break;
    case 1:

      VAR_3 = FUNC_3(VAR_2, 0x40, 0);
      break;
    case 2:

      FUNC_4(VAR_0+4, VAR_0[2], 0);
      break;
    case 3:

      FUNC_5(VAR_0+4, VAR_0[2], 0);
      break;
    default:
      FUNC_1("SPI data invalid");
      break;
  }
  return VAR_3;
}
