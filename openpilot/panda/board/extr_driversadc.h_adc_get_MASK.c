
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {unsigned int JSQR; int SR; int JDR1; int CR2; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

uint32_t FUNC_0(unsigned int VAR_3) {




  VAR_0->JSQR = VAR_3 << 15;




  VAR_0->SR &= ~(VAR_2);
  VAR_0->CR2 |= VAR_1;
  while (!(VAR_0->SR & VAR_2));

  return VAR_0->JDR1;
}
