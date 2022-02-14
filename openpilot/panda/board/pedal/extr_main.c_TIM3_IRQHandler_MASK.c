
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int TSR; TYPE_1__* sTxMailBox; } ;
struct TYPE_7__ {int CNT; scalar_t__ SR; } ;
struct TYPE_6__ {int (* set_led ) (int ,int) ;} ;
struct TYPE_5__ {int TDLR; int TDHR; int TDTR; int TIR; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int*,scalar_t__) ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_15 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_16 ;

void FUNC_4(void) {
  if ((VAR_0->TSR & VAR_3) == VAR_3) {
    uint8_t VAR_17[8];
    VAR_17[0] = (VAR_12 >> 8) & 0xFFU;
    VAR_17[1] = (VAR_12 >> 0) & 0xFFU;
    VAR_17[2] = (VAR_13 >> 8) & 0xFFU;
    VAR_17[3] = (VAR_13 >> 0) & 0xFFU;
    VAR_17[4] = ((VAR_15 & 0xFU) << 4) | VAR_14;
    VAR_17[5] = FUNC_0(VAR_17, VAR_2 - 1);
    VAR_0->sTxMailBox[0].TDLR = VAR_17[0] | (VAR_17[1] << 8) | (VAR_17[2] << 16) | (VAR_17[3] << 24);
    VAR_0->sTxMailBox[0].TDHR = VAR_17[4] | (VAR_17[5] << 8);
    VAR_0->sTxMailBox[0].TDTR = 6;
    VAR_0->sTxMailBox[0].TIR = (VAR_1 << 21) | 1U;
    ++VAR_14;
    VAR_14 &= VAR_4;
  } else {

    VAR_15 = VAR_5;



  }


  VAR_10->set_led(VAR_7, VAR_11);
  VAR_11 = !VAR_11;

  VAR_9->SR = 0;


  if (VAR_16 == VAR_8) {
    VAR_15 = VAR_6;
  } else {
    VAR_16 += 1U;
  }
}
