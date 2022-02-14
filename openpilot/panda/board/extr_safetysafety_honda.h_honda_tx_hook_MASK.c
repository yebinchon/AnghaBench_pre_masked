
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4(CAN_FIFOMailBox_TypeDef *VAR_10) {

  int VAR_11 = 1;
  int VAR_12 = FUNC_0(VAR_10);
  int VAR_13 = FUNC_1(VAR_10);



  int VAR_14 = VAR_7 || (VAR_2 > VAR_0) ||
                      (VAR_5 && VAR_8);
  bool VAR_15 = VAR_1 && !(VAR_14);


  if ((VAR_12 == 0x1FA) && (VAR_13 == 0)) {
    VAR_4 = (FUNC_2(VAR_10, 0) << 2) + ((FUNC_2(VAR_10, 1) >> 6) & 0x3);
    if (!VAR_15 || !VAR_9) {
      if (VAR_4 != 0) {
        VAR_11 = 0;
      }
    }
    if (VAR_4 > 255) {
      VAR_11 = 0;
    }
    if (VAR_6) {
      VAR_11 = 0;
    }
  }


  if ((VAR_12 == 0xE4) || (VAR_12 == 0x194)) {
    if (!VAR_15) {
      bool VAR_16 = FUNC_2(VAR_10, 0) | FUNC_2(VAR_10, 1);
      if (VAR_16) {
        VAR_11 = 0;
      }
    }
  }


  if (VAR_12 == 0x200) {
    if (!VAR_15 || !VAR_9) {
      if (FUNC_2(VAR_10, 0) || FUNC_2(VAR_10, 1)) {
        VAR_11 = 0;
      }
    }
  }




  int VAR_17 = ((FUNC_3()) && VAR_3)? 1 : 0;
  if ((VAR_12 == 0x296) && VAR_3 &&
      !VAR_15 && (VAR_13 == VAR_17)) {
    if (((FUNC_2(VAR_10, 0) >> 5) & 0x7) != 2) {
      VAR_11 = 0;
    }
  }


  return VAR_11;
}
