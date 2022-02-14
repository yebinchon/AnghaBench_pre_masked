
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int RDTR; int RIR; int RDHR; int RDLR; } ;
struct TYPE_8__ {int TSR; TYPE_1__* sTxMailBox; } ;
struct TYPE_7__ {int TDTR; int TIR; int TDHR; int TDLR; } ;
typedef TYPE_2__ CAN_TypeDef ;
typedef TYPE_3__ CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*) ;
 int * VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*) ;

void FUNC_7(uint8_t VAR_11) {
  if (VAR_11 != 0xffU) {

    FUNC_2();

    CAN_TypeDef *VAR_12 = FUNC_1(VAR_11);
    uint8_t VAR_13 = FUNC_0(VAR_11);


    CAN_FIFOMailBox_TypeDef VAR_14;
    if ((VAR_12->TSR & VAR_4) == VAR_4) {

      if ((VAR_12->TSR & VAR_2) == VAR_2) {
        VAR_10 += 1;

        if ((VAR_12->TSR & VAR_5) == VAR_5) {
          CAN_FIFOMailBox_TypeDef VAR_15;
          VAR_15.RIR = VAR_12->sTxMailBox[0].TIR;
          VAR_15.RDTR = (VAR_12->sTxMailBox[0].TDTR & 0xFFFF000FU) | ((VAR_0 | VAR_13) << 4);
          VAR_15.RDLR = VAR_12->sTxMailBox[0].TDLR;
          VAR_15.RDHR = VAR_12->sTxMailBox[0].TDHR;
          VAR_8 += FUNC_5(&VAR_7, &VAR_15) ? 0U : 1U;
        }

        if ((VAR_12->TSR & VAR_3) == VAR_3) {



        }

        if ((VAR_12->TSR & VAR_1) == VAR_1) {



        }



        VAR_12->TSR |= VAR_2;
      }

      if (FUNC_4(VAR_6[VAR_13], &VAR_14)) {
        VAR_9 += 1;

        VAR_12->sTxMailBox[0].TDLR = VAR_14.RDLR;
        VAR_12->sTxMailBox[0].TDHR = VAR_14.RDHR;
        VAR_12->sTxMailBox[0].TDTR = VAR_14.RDTR;
        VAR_12->sTxMailBox[0].TIR = VAR_14.RIR;
      }
    }

    FUNC_3();
  }
}
