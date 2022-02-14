
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_4__ {int CR; int NDTR; void* PAR; void* M0AR; } ;
struct TYPE_3__ {int CR2; int DR; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(void *VAR_10, int VAR_11) {

  VAR_8->CR2 &= ~VAR_9;
  VAR_0->CR &= ~VAR_4;


  VAR_0->M0AR = (uint32_t)VAR_10;
  VAR_0->NDTR = VAR_11;
  VAR_0->PAR = (uint32_t)&(VAR_8->DR);


  VAR_0->CR = VAR_2 | VAR_1 | VAR_5 | VAR_3 | VAR_4;
  FUNC_0(0);
  VAR_0->CR |= VAR_6;

  VAR_8->CR2 |= VAR_9;



  FUNC_1(VAR_7, 0, 0);
}
