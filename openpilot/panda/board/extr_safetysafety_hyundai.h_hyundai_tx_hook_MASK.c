
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
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int,int ) ;

__attribute__((used)) static int FUNC_6(CAN_FIFOMailBox_TypeDef *VAR_14) {

  int VAR_15 = 1;
  int VAR_16 = FUNC_0(VAR_14);


  if (VAR_9) {
    VAR_15 = 0;
  }


  if (VAR_16 == 832) {
    int VAR_17 = ((FUNC_1(VAR_14) >> 16) & 0x7ff) - 1024;
    uint32_t VAR_18 = VAR_7->CNT;
    bool VAR_19 = 0;

    if (VAR_8) {


      VAR_19 |= FUNC_4(VAR_17, VAR_5, -VAR_5);


      VAR_19 |= FUNC_2(VAR_17, VAR_10, &VAR_12,
        VAR_5, VAR_3, VAR_2,
        VAR_0, VAR_1);


      VAR_10 = VAR_17;


      VAR_19 |= FUNC_5(VAR_17, VAR_11, VAR_4);


      uint32_t VAR_20 = FUNC_3(VAR_18, VAR_13);
      if (VAR_20 > VAR_6) {
        VAR_11 = VAR_17;
        VAR_13 = VAR_18;
      }
    }


    if (!VAR_8 && (VAR_17 != 0)) {
      VAR_19 = 1;
    }


    if (VAR_19 || !VAR_8) {
      VAR_10 = 0;
      VAR_11 = 0;
      VAR_13 = VAR_18;
    }

    if (VAR_19) {
      VAR_15 = 0;
    }
  }
  return VAR_15;
}
