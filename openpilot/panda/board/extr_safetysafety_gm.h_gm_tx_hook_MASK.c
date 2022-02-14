
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ CNT; } ;
typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int,int,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(CAN_FIFOMailBox_TypeDef *VAR_21) {

  int VAR_22 = 1;


  if (VAR_12) {
    VAR_22 = 0;
  }



  int VAR_23 = VAR_15 || (VAR_13 && VAR_16);
  bool VAR_24 = VAR_11 && !VAR_23;

  int VAR_25 = FUNC_0(VAR_21);


  if (VAR_25 == 789) {
    int VAR_26 = ((FUNC_1(VAR_21, 0) & 0xFU) << 8) + FUNC_1(VAR_21, 1);
    VAR_26 = (0x1000 - VAR_26) & 0xFFF;
    if (!VAR_24 || !VAR_20) {
      if (VAR_26 != 0) {
        VAR_22 = 0;
      }
    }
    if (VAR_26 > VAR_2) {
      VAR_22 = 0;
    }
  }


  if (VAR_25 == 384) {
    int VAR_27 = ((FUNC_1(VAR_21, 0) & 0x7U) << 8) + FUNC_1(VAR_21, 1);
    uint32_t VAR_28 = VAR_10->CNT;
    bool VAR_29 = 0;
    VAR_27 = FUNC_6(VAR_27, 11);

    if (VAR_24) {


      VAR_29 |= FUNC_4(VAR_27, VAR_8, -VAR_8);


      VAR_29 |= FUNC_2(VAR_27, VAR_14, &VAR_18,
        VAR_8, VAR_5, VAR_4,
        VAR_0, VAR_1);


      VAR_14 = VAR_27;


      VAR_29 |= FUNC_5(VAR_27, VAR_17, VAR_7);


      uint32_t VAR_30 = FUNC_3(VAR_28, VAR_19);
      if (VAR_30 > VAR_9) {
        VAR_17 = VAR_27;
        VAR_19 = VAR_28;
      }
    }


    if (!VAR_24 && (VAR_27 != 0)) {
      VAR_29 = 1;
    }


    if (VAR_29 || !VAR_24) {
      VAR_14 = 0;
      VAR_17 = 0;
      VAR_19 = VAR_28;
    }

    if (VAR_29) {
      VAR_22 = 0;
    }
  }


  if (VAR_25 == 823) {
    VAR_22 = 0;
  }


  if (VAR_25 == 715) {
    int VAR_31 = ((FUNC_1(VAR_21, 2) & 0x7FU) << 5) + ((FUNC_1(VAR_21, 3) & 0xF8U) >> 3);


    if (!VAR_24 || !VAR_20) {
      bool VAR_32 = FUNC_1(VAR_21, 0) & 1U;
      if (VAR_32 || (VAR_31 != VAR_6)) {
        VAR_22 = 0;
      }
    }
    if (VAR_31 > VAR_3) {
      VAR_22 = 0;
    }
  }


  return VAR_22;
}
