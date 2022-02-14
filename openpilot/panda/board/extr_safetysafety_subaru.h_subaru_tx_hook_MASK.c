
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,int,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(CAN_FIFOMailBox_TypeDef *VAR_13) {
  int VAR_14 = 1;
  int VAR_15 = FUNC_0(VAR_13);


  if ((VAR_15 == 0x122) || (VAR_15 == 0x164)) {
    int VAR_16 = (VAR_15 == 0x122) ? 16 : 8;
    int VAR_17 = ((FUNC_1(VAR_13) >> VAR_16) & 0x1FFF);
    bool VAR_18 = 0;
    uint32_t VAR_19 = VAR_7->CNT;
    VAR_17 = FUNC_6(VAR_17, 13);

    if (VAR_8) {


      VAR_18 |= FUNC_4(VAR_17, VAR_5, -VAR_5);


      int VAR_20 = VAR_9;
      VAR_18 |= FUNC_2(VAR_17, VAR_20, &VAR_11,
        VAR_5, VAR_3, VAR_2,
        VAR_0, VAR_1);


      VAR_9 = VAR_17;


      VAR_18 |= FUNC_5(VAR_17, VAR_10, VAR_4);


      uint32_t VAR_21 = FUNC_3(VAR_19, VAR_12);
      if (VAR_21 > VAR_6) {
        VAR_10 = VAR_17;
        VAR_12 = VAR_19;
      }
    }


    if (!VAR_8 && (VAR_17 != 0)) {
      VAR_18 = 1;
    }


    if (VAR_18 || !VAR_8) {
      VAR_9 = 0;
      VAR_10 = 0;
      VAR_12 = VAR_19;
    }

    if (VAR_18) {
      VAR_14 = 0;
    }

  }
  return VAR_14;
}
