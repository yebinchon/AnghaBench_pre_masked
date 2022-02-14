
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_4__ {unsigned int PR; } ;
struct TYPE_3__ {int (* set_usb_power_mode ) (int ) ;} ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void FUNC_5(uint8_t VAR_5) {
  volatile unsigned int VAR_6 = VAR_0->PR & (1U << VAR_5);
  if ((VAR_6 & (1U << VAR_5)) != 0U) {





    FUNC_1(100000);
  }
  VAR_0->PR = (1U << VAR_5);
}
