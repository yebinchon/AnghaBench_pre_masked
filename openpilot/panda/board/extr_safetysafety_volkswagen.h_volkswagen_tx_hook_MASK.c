
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
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int,int,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int FUNC_7(CAN_FIFOMailBox_TypeDef *VAR_15) {
  int VAR_16 = FUNC_0(VAR_15);
  int VAR_17 = FUNC_1(VAR_15);
  int VAR_18 = 1;


  if (VAR_16 == VAR_1) {
    bool VAR_19 = 0;

    int VAR_20 = FUNC_2(VAR_15, 2) | ((FUNC_2(VAR_15, 3) & 0x3F) << 8);
    int VAR_21 = (FUNC_2(VAR_15, 3) & 0x80) >> 7;
    if (VAR_21 == 1) {
      VAR_20 *= -1;
    }

    uint32_t VAR_22 = VAR_2->CNT;

    if (VAR_10) {


      VAR_19 |= FUNC_5(VAR_20, VAR_8, -VAR_8);


      VAR_19 |= FUNC_3(VAR_20, VAR_11, &VAR_13,
        VAR_8, VAR_6, VAR_5,
        VAR_3, VAR_4);
      VAR_11 = VAR_20;


      VAR_19 |= FUNC_6(VAR_20, VAR_12, VAR_7);


      uint32_t VAR_23 = FUNC_4(VAR_22, VAR_14);
      if (VAR_23 > VAR_9) {
        VAR_12 = VAR_20;
        VAR_14 = VAR_22;
      }
    }


    if (!VAR_10 && (VAR_20 != 0)) {
      VAR_19 = 1;
    }


    if (VAR_19 || !VAR_10) {
      VAR_11 = 0;
      VAR_12 = 0;
      VAR_14 = VAR_22;
    }

    if (VAR_19) {
      VAR_18 = 0;
    }
  }



  if ((VAR_17 == 2) && (VAR_16 == VAR_0) && !VAR_10) {

    if ((FUNC_2(VAR_15, 2) & 0x9) != 0) {
      VAR_18 = 0;
    }
  }


  return VAR_18;
}
