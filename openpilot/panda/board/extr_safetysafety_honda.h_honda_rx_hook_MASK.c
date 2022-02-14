
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_5(CAN_FIFOMailBox_TypeDef *VAR_11) {

  int VAR_12 = FUNC_0(VAR_11);
  int VAR_13 = FUNC_4(VAR_11);
  int VAR_14 = FUNC_1(VAR_11);


  if (VAR_12 == 0x158) {

    VAR_9 = FUNC_2(VAR_11, 0) | FUNC_2(VAR_11, 1);
  }



  if ((VAR_12 == 0x1A6) || (VAR_12 == 0x296)) {
    int VAR_15 = (FUNC_2(VAR_11, 0) & 0xE0) >> 5;
    switch (VAR_15) {
      case 2:
        VAR_1 = 0;
        break;
      case 3:
      case 4:
        VAR_1 = 1;
        break;
      default:
        break;
    }
  }
  bool VAR_16 = VAR_4 ? ((VAR_12) == 0x1BE) : ((VAR_12) == 0x17C);
  if (VAR_16) {
    bool VAR_17 = VAR_4 ? (FUNC_2((VAR_11), 0) & 0x10) : (FUNC_2((VAR_11), 6) & 0x20);
    if (VAR_17 && (!(VAR_6) || VAR_9)) {
      VAR_1 = 0;
    }
    VAR_6 = VAR_17;
  }



  if ((VAR_12 == 0x201) && (VAR_13 == 6)) {
    VAR_2 = 1;
    int VAR_18 = FUNC_3(VAR_11);
    if ((VAR_18 > VAR_0) &&
        (VAR_3 <= VAR_0) &&
        VAR_10) {
      VAR_1 = 0;
    }
    VAR_3 = VAR_18;
  }


  if (!VAR_2) {
    if (VAR_12 == 0x17C) {
      int VAR_19 = FUNC_2(VAR_11, 0);
      if (VAR_19 && !(VAR_8) && VAR_10) {
        VAR_1 = 0;
      }
      VAR_8 = VAR_19;
    }
  }
  if ((VAR_14 == 2) && (VAR_12 == 0x1FA)) {
    bool VAR_20 = FUNC_2(VAR_11, 3) & 0x20;
    int VAR_21 = (FUNC_2(VAR_11, 0) << 2) + ((FUNC_2(VAR_11, 1) >> 6) & 0x3);



    if (!VAR_20) {
      VAR_7 = 0;
    } else if (VAR_21 >= VAR_5) {
      VAR_7 = 1;
    } else {

    }
  }
}
