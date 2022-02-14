
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uart_ring ;
struct TYPE_2__ {int (* set_usb_power_mode ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(uart_ring *VAR_6) {
  char VAR_7;
  while (FUNC_1(VAR_6, &VAR_7)) {
    (void)FUNC_2(VAR_6, VAR_7);


    if (VAR_7 == 'z') {
      VAR_5 = VAR_0;
      FUNC_0();
    }


    if (VAR_7 == 'x') {
      FUNC_0();
    }


    if (VAR_7 == 'C') {
      FUNC_3("switching USB to CDP mode\n");
      VAR_4->set_usb_power_mode(VAR_1);
    }
    if (VAR_7 == 'c') {
      FUNC_3("switching USB to client mode\n");
      VAR_4->set_usb_power_mode(VAR_2);
    }
    if (VAR_7 == 'D') {
      FUNC_3("switching USB to DCP mode\n");
      VAR_4->set_usb_power_mode(VAR_3);
    }
  }
}
