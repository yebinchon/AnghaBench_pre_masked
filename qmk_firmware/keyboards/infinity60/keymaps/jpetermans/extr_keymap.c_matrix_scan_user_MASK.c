
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int msg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_3(void) {
  uint8_t VAR_11;
  uint8_t VAR_12;
  msg_t VAR_13;

  if (VAR_5 == 0) {
    return;
  }

  if (VAR_7 != VAR_6 && VAR_9 != VAR_2 && VAR_9 != VAR_0) {


    switch(VAR_9) {
      case 130:
        VAR_11 = FUNC_0(VAR_6) > VAR_10 ? 7 : FUNC_0(VAR_6);
        VAR_13=(VAR_11 << 8) | VAR_1;
        FUNC_1(&VAR_8, VAR_13, VAR_4);
        FUNC_2(500);


      case 128:
        VAR_12 = VAR_6 & 0xFF;
        VAR_13=(7 << 8) | VAR_1;
        FUNC_1(&VAR_8, VAR_13, VAR_4);
        VAR_13=(1 << 16) | (VAR_12 << 8) | VAR_3;
        FUNC_1(&VAR_8, VAR_13, VAR_4);
        break;

      case 129:
        VAR_11 = FUNC_0(VAR_6) > VAR_10 ? 7 : FUNC_0(VAR_6);
        VAR_13=(VAR_11 << 8) | VAR_1;
        FUNC_1(&VAR_8, VAR_13, VAR_4);
        break;
      }
  VAR_7 = VAR_6;
  }
}
