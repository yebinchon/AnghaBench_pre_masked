
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;



 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

uint32_t FUNC_3(uint32_t VAR_0) {
  static uint32_t VAR_1 = 0;

  if(VAR_1 != VAR_0) {
    switch (FUNC_0(VAR_0)) {
    case 128:
      FUNC_2();
      break;
    default:
      FUNC_1();
      break;
    }
    VAR_1 = VAR_0;
  }
  return VAR_0;
}
