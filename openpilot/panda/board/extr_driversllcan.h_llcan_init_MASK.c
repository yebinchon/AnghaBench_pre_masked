
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int FA1R; int IER; int FMR; TYPE_1__* sFilterRegister; } ;
struct TYPE_7__ {scalar_t__ FR2; scalar_t__ FR1; } ;
typedef TYPE_2__ CAN_TypeDef ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(CAN_TypeDef *VAR_16) {

  VAR_16->FMR |= VAR_12;


  VAR_16->sFilterRegister[0].FR1 = 0;
  VAR_16->sFilterRegister[0].FR2 = 0;
  VAR_16->sFilterRegister[14].FR1 = 0;
  VAR_16->sFilterRegister[14].FR2 = 0;
  VAR_16->FA1R |= 1U | (1U << 14);

  VAR_16->FMR &= ~(VAR_12);


  VAR_16->IER |= VAR_14 | VAR_13 | VAR_15;

  if (VAR_16 == VAR_0) {
    FUNC_0(VAR_3);
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
  } else if (VAR_16 == VAR_4) {
    FUNC_0(VAR_7);
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);






  } else {
    FUNC_1("Invalid CAN: initialization failed\n");
  }
}
