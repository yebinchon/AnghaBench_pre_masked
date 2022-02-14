
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

uint32_t FUNC_8(uint32_t VAR_5) {

  if (VAR_5 == 0 && VAR_0 == 1) {
    VAR_2 = FUNC_2();
    VAR_1 = FUNC_1();
    VAR_3 = FUNC_3();
    VAR_4 = FUNC_4();
    VAR_0 = 0;
  }

  switch (FUNC_0(VAR_5)) {
    case 1:
      FUNC_5(1);
      FUNC_7(0xD3, 0x7F, 0xED);
      break;
    case 2:
      FUNC_5(1);
      FUNC_7(0xFF, 0x00, 0x00);
      VAR_0 = 1;
      break;
    default:
      FUNC_5(VAR_2);
      FUNC_6(VAR_1, VAR_3, VAR_4);
      break;
  }
  return VAR_5;
}
