
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

void FUNC_4(uint8_t VAR_8, bool VAR_9) {
  uint16_t VAR_10 = 0;
  if (VAR_8 == 0) {
    if (VAR_9) {
        switch(VAR_7){
            case 0:
            default:
                VAR_10 = VAR_5;
                break;
            case 1:
                VAR_10 = VAR_0;
                break;
            case 2:
                VAR_10 = VAR_2;
                break;
        }
    } else {
        switch(VAR_7){
            case 0:
            default:
                VAR_10 = VAR_4;
                break;
            case 1:
                VAR_10 = VAR_1;
                break;
            case 2:
                VAR_10 = VAR_3;
                break;
        }
    }
    uint16_t VAR_11 = FUNC_2();
    FUNC_0(VAR_10);
    while (FUNC_1(VAR_11) < VAR_6){ }
    FUNC_3(VAR_10);
  }
}
