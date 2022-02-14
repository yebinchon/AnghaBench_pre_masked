
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ST_SR; } ;
struct TYPE_7__ {int (* CtlTempoTick ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int (* Handler ) (TYPE_1__*,unsigned int volatile) ;int eot; } ;
typedef int AT91PS_USART ;


 scalar_t__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 int * VAR_2 ;
 unsigned int* VAR_3 ;
 unsigned int volatile VAR_4 ;
 unsigned int volatile VAR_5 ;
 int VAR_6 ;
 unsigned int volatile VAR_7 ;
 unsigned int volatile VAR_8 ;
 unsigned int volatile VAR_9 ;
 unsigned int volatile VAR_10 ;
 unsigned int volatile VAR_11 ;
 int FUNC_0 (int ,unsigned int volatile) ;
 int FUNC_1 (int ,unsigned int volatile) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_12 ;
 TYPE_3__ VAR_13 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,unsigned int volatile) ;
 TYPE_1__ VAR_14 ;

void FUNC_5(void)
{
 volatile unsigned int VAR_15 = *VAR_3;




 if (VAR_1->ST_SR & 0x01) {
  VAR_12++;
  VAR_13.CtlTempoTick(&VAR_13);
  return;
 }
}
