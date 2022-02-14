
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; int min; } ;
typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6(CAN_FIFOMailBox_TypeDef *VAR_11) {

  int VAR_12 = FUNC_1(VAR_11);
  int VAR_13 = FUNC_0(VAR_11);


  if (VAR_13 == 0x260) {
    int VAR_14 = (FUNC_2(VAR_11, 5) << 8) | FUNC_2(VAR_11, 6);
    VAR_14 = FUNC_4(VAR_14, 16);


    VAR_14 = (VAR_14 * VAR_7) / 100;


    FUNC_5(&VAR_10, VAR_14);


    VAR_10.min--;
    VAR_10.max++;
  }


  if (VAR_13 == 0x1D2) {

    int VAR_15 = FUNC_2(VAR_11, 0) & 0x20;
    if (!VAR_15) {
      VAR_1 = 0;
    }
    if (VAR_15 && !VAR_6) {
      VAR_1 = 1;
    }
    VAR_6 = VAR_15;
  }


  if (VAR_13 == 0x201) {
    VAR_2 = 1;
    int VAR_16 = FUNC_3(VAR_11);
    if ((VAR_16 > VAR_0) &&
        (VAR_3 <= VAR_0) &&
        VAR_4) {
      VAR_1 = 0;
    }
    VAR_3 = VAR_16;
  }


  if (VAR_13 == 0x2C1) {
    int VAR_17 = FUNC_2(VAR_11, 6) & 0xFF;
    if ((VAR_17 > 0) && (VAR_8 == 0) && !VAR_2 && VAR_4) {
      VAR_1 = 0;
    }
    VAR_8 = VAR_17;
  }


  if (VAR_12 == 2) {
    VAR_5 = 1;
  }


  if ((VAR_13 == 0x2E4) && (VAR_12 == 0)) {
    VAR_9 = 1;
  }
}
