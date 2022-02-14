
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ReturnValue; } ;
typedef TYPE_1__ SEGGER_RTT_PRINTF_DESC ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const) ;

__attribute__((used)) static void FUNC_1(SEGGER_RTT_PRINTF_DESC * VAR_2, unsigned VAR_3, unsigned VAR_4, int VAR_5, unsigned VAR_6, unsigned VAR_7) {
  static const char VAR_8[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
  unsigned VAR_9;
  unsigned VAR_10 = 1;
  unsigned VAR_11;
  unsigned VAR_12;
  char VAR_13;

  VAR_11 = VAR_3;




  VAR_12 = 1;
  while (VAR_11 >= VAR_4) {
    VAR_11 = (VAR_11 / VAR_4);
    VAR_12++;
  }
  if ((unsigned)VAR_5 > VAR_12) {
    VAR_12 = VAR_5;
  }



  if ((VAR_7 & VAR_0) == 0) {
    if (VAR_6 != 0) {
      if (((VAR_7 & VAR_1) == VAR_1) && (VAR_5 == 0)) {
        VAR_13 = '0';
      } else {
        VAR_13 = ' ';
      }
      while ((VAR_6 != 0) && (VAR_12 < VAR_6--)) {
        FUNC_0(VAR_2, VAR_13);
        if (VAR_2->ReturnValue < 0) {
          return;
        }
      }
    }
  }



  while (((VAR_3 / VAR_10) >= VAR_4) | (VAR_5-- > 1)) {
    VAR_10 *= VAR_4;
  }



  do {
    VAR_9 = VAR_3 / VAR_10;
    VAR_3 -= VAR_9 * VAR_10;
    FUNC_0(VAR_2, VAR_8[VAR_9]);
    if (VAR_2->ReturnValue < 0) {
      break;
    }
    VAR_10 /= VAR_4;
  } while (VAR_10);



  if ((VAR_7 & VAR_0) == VAR_0) {
    if (VAR_6 != 0) {
      while ((VAR_6 != 0) && (VAR_12 < VAR_6--)) {
        FUNC_0(VAR_2, ' ');
        if (VAR_2->ReturnValue < 0) {
          return;
        }
      }
    }
  }
}
