
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ CNT; } ;
typedef int CAN_FIFOMailBox_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_8 ;
 int* VAR_9 ;
 int FUNC_2 (int,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int,int,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(CAN_FIFOMailBox_TypeDef *VAR_15) {
  int VAR_16 = 1;
  int VAR_17 = FUNC_0(VAR_15);


  if ((VAR_17 == 0x151) || (VAR_17 == 0x152) || (VAR_17 == 0x153) || (VAR_17 == 0x154)) {
    int VAR_18 = ((FUNC_1(VAR_15, 0) & 0x3f) << 8) | FUNC_1(VAR_15, 1);
    int VAR_19 = 0;
    uint32_t VAR_20 = VAR_8->CNT;
    int VAR_21 = FUNC_2(VAR_17, VAR_7);
    VAR_18 = FUNC_7(VAR_18, 14);

    if (VAR_14) {


      VAR_19 |= FUNC_5(VAR_18, VAR_5, -VAR_5);


      int VAR_22 = VAR_9[VAR_21];
      VAR_19 |= FUNC_3(VAR_18, VAR_22, &VAR_12,
        VAR_5, VAR_3, VAR_2,
        VAR_0, VAR_1);


      VAR_9[VAR_21] = VAR_18;


      VAR_19 |= FUNC_6(VAR_18, VAR_10, VAR_4);


      uint32_t VAR_23 = FUNC_4(VAR_20, VAR_13);
      if (VAR_23 > VAR_6) {
        VAR_10 = VAR_18;
        VAR_13 = VAR_20;
      }
    }


    if (!VAR_14 && (VAR_18 != 0)) {
      VAR_19 = 1;
    }


    if (VAR_19 || !VAR_14) {
      VAR_9[VAR_21] = 0;
      VAR_10 = 0;
      VAR_13 = VAR_20;
    }

    if (VAR_19 || VAR_11) {
      VAR_16 = 0;
    }

  }
  return VAR_16;
}
