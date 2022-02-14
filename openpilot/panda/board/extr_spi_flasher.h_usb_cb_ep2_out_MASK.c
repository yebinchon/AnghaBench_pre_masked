
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CR; int SR; } ;
struct TYPE_3__ {int (* set_led ) (int ,int) ;} ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(void *VAR_7, int VAR_8, bool VAR_9) {
  FUNC_0(VAR_9);
  VAR_5->set_led(VAR_4, 0);
  for (int VAR_10 = 0; VAR_10 < VAR_8/4; VAR_10++) {

    VAR_0->CR = VAR_2 | VAR_1;

    *VAR_6 = *(uint32_t*)(VAR_7+(VAR_10*4));
    while (VAR_0->SR & VAR_3);


    VAR_6++;
  }
  VAR_5->set_led(VAR_4, 1);
}
