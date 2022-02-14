
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
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,int,int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int,int ) ;

__attribute__((used)) static int FUNC_6(CAN_FIFOMailBox_TypeDef *VAR_13) {

  int VAR_14 = 1;


  if (VAR_7) {
    VAR_14 = 0;
  }

  int VAR_15 = FUNC_0(VAR_13);


  if (VAR_15 == 0x292) {
    int VAR_16 = ((FUNC_1(VAR_13, 0) & 0x7U) << 8) + FUNC_1(VAR_13, 1) - 1024U;
    uint32_t VAR_17 = VAR_6->CNT;
    bool VAR_18 = 0;

    if (VAR_12) {


      VAR_18 |= FUNC_4(VAR_16, VAR_3, -VAR_3);


      VAR_18 |= FUNC_2(VAR_16, VAR_8,
        &VAR_10, VAR_1, VAR_0, VAR_4);


      VAR_8 = VAR_16;


      VAR_18 |= FUNC_5(VAR_16, VAR_9, VAR_2);


      uint32_t VAR_19 = FUNC_3(VAR_17, VAR_11);
      if (VAR_19 > VAR_5) {
        VAR_9 = VAR_16;
        VAR_11 = VAR_17;
      }
    }


    if (!VAR_12 && (VAR_16 != 0)) {
      VAR_18 = 1;
    }


    if (VAR_18 || !VAR_12) {
      VAR_8 = 0;
      VAR_9 = 0;
      VAR_11 = VAR_17;
    }

    if (VAR_18) {
      VAR_14 = 0;
    }
  }







  return VAR_14;
}
