
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,scalar_t__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__*,scalar_t__,scalar_t__) ;

void FUNC_4(uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6) {
  uint8_t VAR_7;
  uint8_t VAR_8[2] = {0};


  if (VAR_6 == 0) {
    FUNC_2(VAR_0, VAR_1, VAR_3);
    FUNC_0(5);
    FUNC_1(0, 0x00, &VAR_7);
    FUNC_2(VAR_0, VAR_1, VAR_2);

    if (VAR_7 == 0xFF) {
      VAR_5 |= (1<<2);
    }
  }

  FUNC_3(VAR_6,VAR_8,VAR_4,VAR_5);
}
