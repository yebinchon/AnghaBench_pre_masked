
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int use_scheduler; int commissioning_power_off_cb; int commissioning_id_mode_cb; int ipv6_medium_error_handler; int ipv6_medium_evt_handler; } ;
typedef TYPE_1__ ipv6_medium_init_params_t ;
typedef int ipv6_medium_init_params ;
struct TYPE_10__ {int* identifier; } ;
typedef TYPE_2__ eui48_t ;
struct TYPE_11__ {int ipv6_medium_instance_id; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,int ,TYPE_4__*) ;
 int FUNC_10 () ;
 TYPE_4__ VAR_4 ;
 int FUNC_11 (TYPE_1__*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;

void FUNC_15(void) {
  uint32_t VAR_7;


  FUNC_2();
  FUNC_10();
  FUNC_14();
  FUNC_5();
  static ipv6_medium_init_params_t VAR_8;
  FUNC_11(&VAR_8, 0x00, sizeof(VAR_8));
  VAR_8.ipv6_medium_evt_handler = VAR_6;
  VAR_8.ipv6_medium_error_handler = VAR_5;
  VAR_8.use_scheduler = 1;





  VAR_7 = FUNC_9(&VAR_8, VAR_1, &VAR_4);


  FUNC_1(VAR_7);

  eui48_t VAR_9;
  VAR_7 = FUNC_7(VAR_4.ipv6_medium_instance_id, &VAR_9);


  VAR_9[VAR_0 - 1] = 0x00;

  VAR_7 = FUNC_8(VAR_4.ipv6_medium_instance_id, &VAR_9);

  FUNC_1(VAR_7);

  FUNC_6();
  FUNC_13();


  FUNC_4();

  FUNC_0("BLE init done\n");
}
