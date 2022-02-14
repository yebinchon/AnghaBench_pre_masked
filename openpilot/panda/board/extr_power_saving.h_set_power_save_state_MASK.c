
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uart_ring ;
typedef int UBLOX_WAKE_MSG ;
typedef int UBLOX_SLEEP_MSG ;
struct TYPE_2__ {int (* set_fan_power ) (unsigned int) ;int (* set_ir_power ) (unsigned int) ;int (* set_esp_gps_mode ) (int ) ;int (* enable_can_transcievers ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* VAR_6 ;
 int * FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;

void FUNC_12(int VAR_8) {

  bool VAR_9 = (VAR_8 == VAR_5) || (VAR_8 == VAR_4);
  if (VAR_9 && (VAR_8 != VAR_7)) {
    bool VAR_10 = 0;
    if (VAR_8 == VAR_5) {
      FUNC_5("enable power savings\n");
      if (FUNC_1()) {
        char VAR_11[] = "\xb5\x62\x06\x04\x04\x00\x01\x00\x08\x00\x17\x78";
        uart_ring *VAR_12 = FUNC_3(1);
        for (unsigned int VAR_13 = 0; VAR_13 < sizeof(VAR_11) - 1U; VAR_13++) while (!FUNC_4(VAR_12, VAR_11[VAR_13]));
      }
    } else {
      FUNC_5("disable power savings\n");
      if (FUNC_1()) {
        char VAR_14[] = "\xb5\x62\x06\x04\x04\x00\x01\x00\x09\x00\x18\x7a";
        uart_ring *VAR_15 = FUNC_3(1);
        for (unsigned int VAR_16 = 0; VAR_16 < sizeof(VAR_14) - 1U; VAR_16++) while (!FUNC_4(VAR_15, VAR_14[VAR_16]));
      }
      VAR_10 = 1;
    }

    VAR_6->enable_can_transcievers(VAR_10);


    if (VAR_10) {
      VAR_6->set_esp_gps_mode(VAR_1);
    } else {
      VAR_6->set_esp_gps_mode(VAR_0);
    }

    if(FUNC_0()){

      FUNC_6(VAR_3, 14, VAR_10);
      FUNC_6(VAR_3, 15, VAR_10);
    }

    if(FUNC_2()){

      FUNC_6(VAR_3, 7, VAR_10);
      FUNC_6(VAR_2, 14, VAR_10);
    }


    if(!VAR_10){
      VAR_6->set_ir_power(0U);
      VAR_6->set_fan_power(0U);
    }

    VAR_7 = VAR_8;
  }
}
