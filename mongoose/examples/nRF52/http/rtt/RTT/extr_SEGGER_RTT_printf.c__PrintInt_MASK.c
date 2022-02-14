
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ReturnValue; } ;
typedef TYPE_1__ SEGGER_RTT_PRINTF_DESC ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_1__*,char) ;

__attribute__((used)) static void FUNC_2(SEGGER_RTT_PRINTF_DESC * VAR_3, int VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8) {
  unsigned VAR_9;
  unsigned VAR_10;

  VAR_10 = (VAR_4 < 0) ? -VAR_4 : VAR_4;




  VAR_9 = 1;
  while (VAR_10 >= VAR_5) {
    VAR_10 = (VAR_10 / VAR_5);
    VAR_9++;
  }
  if (VAR_6 > VAR_9) {
    VAR_9 = VAR_6;
  }
  if ((VAR_7 > 0) && ((VAR_4 < 0) || ((VAR_8 & VAR_2) == VAR_2))) {
    VAR_7--;
  }




  if ((((VAR_8 & VAR_1) == 0) || (VAR_6 != 0)) && ((VAR_8 & VAR_0) == 0)) {
    if (VAR_7 != 0) {
      while ((VAR_7 != 0) && (VAR_9 < VAR_7--)) {
        FUNC_1(VAR_3, ' ');
        if (VAR_3->ReturnValue < 0) {
          return;
        }
      }
    }
  }



  if (VAR_4 < 0) {
    VAR_4 = -VAR_4;
    FUNC_1(VAR_3, '-');
    if (VAR_3->ReturnValue < 0) {
      return;
    }
  } else if ((VAR_8 & VAR_2) == VAR_2) {
    FUNC_1(VAR_3, '+');
    if (VAR_3->ReturnValue < 0) {
      return;
    }
  }



  if (((VAR_8 & VAR_1) == VAR_1) && ((VAR_8 & VAR_0) == 0) && (VAR_6 == 0)) {
    if (VAR_7 != 0) {
      while ((VAR_7 != 0) && (VAR_9 < VAR_7--)) {
        FUNC_1(VAR_3, '0');
        if (VAR_3->ReturnValue < 0) {
          return;
        }
      }
    }
  }




  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
