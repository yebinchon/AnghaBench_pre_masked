
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_5 ;

void FUNC_14(void) {
  uint8_t VAR_6 = FUNC_11();
  uint8_t VAR_7 = FUNC_13();
  uint8_t VAR_8 = FUNC_12();
  uint8_t VAR_9 = FUNC_0(VAR_5);

  FUNC_1();
  FUNC_2();
  FUNC_5();
  FUNC_8();

  switch (VAR_9) {
    case 128:
    case 130:
    case 129:
      if (VAR_6 & VAR_3 || VAR_7 & (1<<VAR_4) || VAR_8 & VAR_3) {
        FUNC_3();
        FUNC_4( 25 );
      }
      if (VAR_6 & VAR_1 || VAR_8 & VAR_1 || VAR_6 & VAR_2 || VAR_8 & VAR_2) {
        if ((VAR_6 & VAR_1 || VAR_8 & VAR_1) && (VAR_6 & VAR_2 || VAR_8 & VAR_2)) {
          FUNC_6();
          FUNC_7( 50 );
        } else {
          FUNC_6();
          FUNC_7( 10 );
        }
      }
      if (VAR_6 & VAR_0 || VAR_8 & VAR_0) {
        FUNC_9();
        FUNC_10( 10 );
      }
      break;
    case 131:
      FUNC_9();
      FUNC_10(10);
      break;
    case 133:
      FUNC_6();
      FUNC_7(10);
      break;
    case 132:
      FUNC_3();
      FUNC_4(10);
      break;
    default:

      break;
  }
}
