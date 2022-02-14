
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int) ;

uint32_t FUNC_2(uint32_t VAR_0) {
  switch (FUNC_0(VAR_0)) {
    case 0:
      FUNC_1 (0xFF, 0x00, 0x00);
      break;
    case 1:
      FUNC_1 (0x00, 0xFF, 0x00);
      break;
    case 2:
      FUNC_1 (0x00, 0x00, 0xFF);
      break;
    case 3:
      FUNC_1 (0xFF, 0xFF, 0xFF);
      break;
    case 4:
      FUNC_1 (0xFF, 0x00, 0xFF);
      break;
    default:
      FUNC_1 (0xFF, 0x00, 0x00);
      break;
    }
  return VAR_0;
}
