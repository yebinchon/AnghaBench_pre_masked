
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ CNT; } ;
typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int,int,int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int FUNC_8(CAN_FIFOMailBox_TypeDef *VAR_15) {

  int VAR_16 = 1;
  int VAR_17 = FUNC_0(VAR_15);
  int VAR_18 = FUNC_1(VAR_15);


  if (VAR_18 == 0) {


    if ((VAR_17 == 0x266) || (VAR_17 == 0x167)) {
      VAR_16 = 0;
    }


    if (VAR_17 == 0x200) {
      if (!VAR_9 || !VAR_10) {
        if (FUNC_2(VAR_15, 0) || FUNC_2(VAR_15, 1)) {
          VAR_16 = 0;
        }
      }
    }


    if (VAR_17 == 0x343) {
      int VAR_19 = (FUNC_2(VAR_15, 0) << 8) | FUNC_2(VAR_15, 1);
      VAR_19 = FUNC_7(VAR_19, 16);
      if (!VAR_9 || !VAR_10) {
        if (VAR_19 != 0) {
          VAR_16 = 0;
        }
      }
      bool VAR_20 = FUNC_5(VAR_19, VAR_1, VAR_7);
      if (VAR_20) {
        VAR_16 = 0;
      }
    }


    if (VAR_17 == 0x2E4) {
      int VAR_21 = (FUNC_2(VAR_15, 1) << 8) | FUNC_2(VAR_15, 2);
      VAR_21 = FUNC_7(VAR_21, 16);
      bool VAR_22 = 0;

      uint32_t VAR_23 = VAR_0->CNT;

      if (VAR_9) {


        VAR_22 |= FUNC_5(VAR_21, VAR_5, -VAR_5);


        VAR_22 |= FUNC_3(VAR_21, VAR_11,
          &VAR_13, VAR_3, VAR_2, VAR_6);


        VAR_11 = VAR_21;


        VAR_22 |= FUNC_6(VAR_21, VAR_12, VAR_4);


        uint32_t VAR_24 = FUNC_4(VAR_23, VAR_14);
        if (VAR_24 > VAR_8) {
          VAR_12 = VAR_21;
          VAR_14 = VAR_23;
        }
      }


      if (!VAR_9 && (VAR_21 != 0)) {
        VAR_22 = 1;
      }


      if (VAR_22 || !VAR_9) {
        VAR_11 = 0;
        VAR_12 = 0;
        VAR_14 = VAR_23;
      }

      if (VAR_22) {
        VAR_16 = 0;
      }
    }
  }


  return VAR_16;
}
