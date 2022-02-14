
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {TYPE_1__* harness_config; int (* set_led ) (int ,int) ;} ;
struct TYPE_3__ {int pin_SBU1; int GPIO_SBU1; int pin_SBU2; int GPIO_SBU2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(void) {

  VAR_5->set_led(VAR_2, 1);
  FUNC_0(10000000);
  VAR_5->set_led(VAR_2, 0);


  uint8_t VAR_6 = FUNC_1();
  if (VAR_6 != VAR_0) {
    FUNC_4("detected car harness with orientation "); FUNC_3(VAR_6); FUNC_4("\n");
    VAR_4 = VAR_6;


    FUNC_5(VAR_5->harness_config->GPIO_SBU1, VAR_5->harness_config->pin_SBU1, VAR_3);
    FUNC_5(VAR_5->harness_config->GPIO_SBU2, VAR_5->harness_config->pin_SBU2, VAR_3);


    if(VAR_4 == VAR_1){
      FUNC_5(VAR_5->harness_config->GPIO_SBU2, VAR_5->harness_config->pin_SBU2, VAR_3);
    } else {
      FUNC_5(VAR_5->harness_config->GPIO_SBU1, VAR_5->harness_config->pin_SBU1, VAR_3);
    }


    FUNC_6(0);


    FUNC_2();
  } else {
    FUNC_4("failed to detect car harness!\n");
  }
}
