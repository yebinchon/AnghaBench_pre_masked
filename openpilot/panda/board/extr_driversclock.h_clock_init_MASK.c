
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ACR; } ;
struct TYPE_3__ {int CR; int CFGR; int PLLCFGR; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void FUNC_0(void) {

  VAR_4->CR |= VAR_11;
  while ((VAR_4->CR & VAR_12) == 0);


  VAR_4->CFGR = VAR_5 | VAR_7 | VAR_6;


  VAR_4->PLLCFGR = VAR_18 | VAR_15 |
                 VAR_17 | VAR_16 | VAR_19;


  VAR_4->CR |= VAR_13;
  while ((VAR_4->CR & VAR_14) == 0);



  VAR_0->ACR = VAR_2 | VAR_1 | VAR_3;


  VAR_4->CFGR |= VAR_10;
  while ((VAR_4->CFGR & VAR_8) != VAR_9);


}
