
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int USB_Setup_TypeDef ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (int*,int,int ) ;

int FUNC_3(uint8_t *VAR_0, int VAR_1, uint8_t *VAR_2) {
  FUNC_0(VAR_1);
  int VAR_3 = 0;
  switch (VAR_0[0]) {
    case 0:

      VAR_3 = FUNC_1((USB_Setup_TypeDef *)(VAR_0+4), VAR_2, 0);
      break;
    case 2:

      FUNC_2(VAR_0+4, VAR_0[2], 0);
      break;
  }
  return VAR_3;
}
