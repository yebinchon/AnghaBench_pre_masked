
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_4__ {int CR; int NDTR; void* PAR; void* M0AR; } ;
struct TYPE_3__ {int CR2; int DR; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;

void FUNC_1(void *VAR_8, int VAR_9) {

  VAR_6->CR2 &= ~VAR_7;
  VAR_0->CR &= ~VAR_3;


  volatile uint8_t VAR_10 = VAR_6->DR;
  (void)VAR_10;


  VAR_0->M0AR = (uint32_t)VAR_8;
  VAR_0->NDTR = VAR_9;
  VAR_0->PAR = (uint32_t)&(VAR_6->DR);


  VAR_0->CR = VAR_2 | VAR_1 | VAR_4 | VAR_3;
  FUNC_0(0);
  VAR_0->CR |= VAR_5;

  VAR_6->CR2 |= VAR_7;
}
