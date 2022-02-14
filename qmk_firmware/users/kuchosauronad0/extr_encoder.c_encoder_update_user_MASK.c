
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int ** VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(uint8_t VAR_7, bool VAR_8) {
  static uint16_t VAR_9;
  uint8_t VAR_10 = FUNC_1();
  if (VAR_7 == 0) {
    if (VAR_8) {

        if ((VAR_10 & VAR_3) && (VAR_10 & VAR_5) && (VAR_10 & VAR_2) && (VAR_10 & VAR_4)) {
          VAR_9 = VAR_6[0][8];
        } else if ( (VAR_10 & VAR_5) && (VAR_10 & VAR_2) ) {
          VAR_9 = VAR_6[0][7];
        } else if ( (VAR_10 & VAR_5) && (VAR_10 & VAR_3) ) {
          VAR_9 = VAR_6[0][6];
        } else if ( (VAR_10 & VAR_3) && (VAR_10 & VAR_2) ) {
          VAR_9 = VAR_6[0][5];
        } else if (VAR_10 & VAR_4) {
          VAR_9 = VAR_6[0][4];
        } else if (VAR_10 & VAR_5) {
          VAR_9 = VAR_6[0][3];
        } else if (VAR_10 & VAR_2) {
          VAR_9 = VAR_6[0][2];
        } else if (VAR_10 & VAR_3) {
          VAR_9 = VAR_6[0][1];
        } else {
          VAR_9 = VAR_6[0][0];
        }
      } else {
        if ((VAR_10 & VAR_3) && (VAR_10 & VAR_5) && (VAR_10 & VAR_2) && (VAR_10 & VAR_4)) {
          VAR_9 = VAR_6[1][8];
        } else if ( (VAR_10 & VAR_5) && (VAR_10 & VAR_2) ) {
          VAR_9 = VAR_6[1][7];
        } else if ( (VAR_10 & VAR_5) && (VAR_10 & VAR_3) ) {
          VAR_9 = VAR_6[1][6];
        } else if ( (VAR_10 & VAR_3) && (VAR_10 & VAR_2) ) {
          VAR_9 = VAR_6[1][5];
        } else if (VAR_10 & VAR_4) {
          VAR_9 = VAR_6[1][4];
        } else if (VAR_10 & VAR_5) {
          VAR_9 = VAR_6[1][3];
        } else if (VAR_10 & VAR_2) {
          VAR_9 = VAR_6[1][2];
        } else if (VAR_10 & VAR_3) {
          VAR_9 = VAR_6[1][1];
        } else {
          VAR_9 = VAR_6[1][0];
        }
      }
        FUNC_0();
        FUNC_4(VAR_9);
        FUNC_2(VAR_10);
  } else if (VAR_7 == 1){
      if (VAR_8) {
        FUNC_3(VAR_0);
      } else{
        FUNC_3(VAR_1);
      }
  }
}
