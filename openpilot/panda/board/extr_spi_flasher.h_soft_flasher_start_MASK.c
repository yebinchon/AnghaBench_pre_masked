
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int APB1ENR; int AHB2ENR; int APB2ENR; int AHB1ENR; } ;
struct TYPE_7__ {int (* set_led ) (int ,int) ;int (* set_usb_power_mode ) (int ) ;int (* enable_can_transciever ) (int,int) ;} ;
struct TYPE_6__ {int OSPEEDR; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_2__* VAR_19 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 () ;
 scalar_t__ VAR_22 ;

void FUNC_14(void) {
  FUNC_4("\n\n\n************************ FLASHER START ************************\n");

  VAR_20 = 0;

  VAR_11->AHB1ENR |= VAR_12;
  VAR_11->APB2ENR |= VAR_16;
  VAR_11->AHB2ENR |= VAR_13;
  VAR_11->APB1ENR |= VAR_15;
  FUNC_5(VAR_1, 4, VAR_4);
  FUNC_5(VAR_1, 5, VAR_4);
  FUNC_5(VAR_1, 6, VAR_4);
  FUNC_5(VAR_1, 7, VAR_4);


  FUNC_5(VAR_1, 2, VAR_5);
  FUNC_5(VAR_1, 3, VAR_5);


  FUNC_5(VAR_1, 11, VAR_3);
  FUNC_5(VAR_1, 12, VAR_3);
  VAR_1->OSPEEDR = VAR_7 | VAR_8;


  FUNC_6();


  FUNC_13();


  VAR_19->set_led(VAR_10, 1);

  FUNC_1();

  uint64_t VAR_23 = 0;

  for (VAR_23=0;;VAR_23++) {
    if (VAR_23 == 35 && !VAR_21 && VAR_22 == VAR_18) {


      FUNC_4("USBP: didn't enumerate, switching to CDP mode\n");
      VAR_19->set_usb_power_mode(VAR_17);
      VAR_19->set_led(VAR_9, 1);
    }

    VAR_19->set_led(VAR_10, 0);
    FUNC_0(500000);
    VAR_19->set_led(VAR_10, 1);
    FUNC_0(500000);
  }
}
