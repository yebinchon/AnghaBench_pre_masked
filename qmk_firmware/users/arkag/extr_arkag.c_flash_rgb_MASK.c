
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_5 ;

void FUNC_3 (void) {
  static uint16_t VAR_6;
  switch(VAR_2) {
  case 128:
    return;

  case 130:
    if (!VAR_6) {VAR_6 = FUNC_2();}
    if (FUNC_1(VAR_6) >= VAR_0) {
      FUNC_0(VAR_3, 0);
      VAR_6 = FUNC_2();
      VAR_2 = 129;
    }
    return;

  case 129:
    if (FUNC_1(VAR_6) >= VAR_0) {
      FUNC_0(VAR_1, 0);
      VAR_6 = FUNC_2();
      if (VAR_4 > 0) {
        VAR_2 = 130;
        VAR_4--;
      } else {
        FUNC_0(VAR_5, 0);
        VAR_2 = 128;
      }
    }
    return;
  }
}
