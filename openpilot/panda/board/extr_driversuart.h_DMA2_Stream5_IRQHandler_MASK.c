
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int HISR; int HIFCR; } ;
struct TYPE_3__ {int NDTR; int CR; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int VAR_11 ;

void FUNC_4(void) {
  FUNC_0();


  if((VAR_0->HISR & VAR_9) || (VAR_0->HISR & VAR_7) || (VAR_0->HISR & VAR_8)){





    VAR_0->HIFCR = VAR_6 | VAR_2 | VAR_3;


    VAR_1->CR |= VAR_10;
  }


  FUNC_2(&VAR_11, VAR_1->NDTR);
  VAR_0->HIFCR = VAR_5 | VAR_4;

  FUNC_1();
}
