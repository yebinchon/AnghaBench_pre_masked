
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int (* set_led ) (int ,int) ;} ;
struct TYPE_13__ {int RIR; int RDTR; int RDHR; int RDLR; } ;
struct TYPE_12__ {int RF0R; TYPE_1__* sFIFOMailBox; } ;
struct TYPE_11__ {int RIR; int RDTR; int RDHR; int RDLR; } ;
typedef TYPE_2__ CAN_TypeDef ;
typedef TYPE_3__ CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,int) ;
 unsigned int VAR_6 ;
 TYPE_7__* VAR_7 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_5 (int,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int) ;

void FUNC_8(uint8_t VAR_9) {
  CAN_TypeDef *VAR_10 = FUNC_1(VAR_9);
  uint8_t VAR_11 = FUNC_0(VAR_9);
  while ((VAR_10->RF0R & VAR_0) != 0) {
    VAR_4 += 1;


    VAR_8 = 1;


    CAN_FIFOMailBox_TypeDef VAR_12;
    VAR_12.RIR = VAR_10->sFIFOMailBox[0].RIR;
    VAR_12.RDTR = VAR_10->sFIFOMailBox[0].RDTR;
    VAR_12.RDLR = VAR_10->sFIFOMailBox[0].RDLR;
    VAR_12.RDHR = VAR_10->sFIFOMailBox[0].RDHR;


    VAR_12.RDTR = (VAR_12.RDTR & 0xFFFF000F) | (VAR_11 << 4);


    int VAR_13 = (VAR_3[VAR_11] != -1) ? VAR_3[VAR_11] : FUNC_5(VAR_11, &VAR_12);
    if (VAR_13 != -1) {
      CAN_FIFOMailBox_TypeDef VAR_14;
      VAR_14.RIR = VAR_12.RIR | 1;
      VAR_14.RDTR = VAR_12.RDTR;
      VAR_14.RDLR = VAR_12.RDLR;
      VAR_14.RDHR = VAR_12.RDHR;
      FUNC_3(&VAR_14, VAR_13);
    }

    FUNC_6(&VAR_12);
    FUNC_4(&VAR_12);

    VAR_7->set_led(VAR_2, 1);
    VAR_6 += FUNC_2(&VAR_5, &VAR_12) ? 0U : 1U;


    VAR_10->RF0R |= VAR_1;
  }
}
