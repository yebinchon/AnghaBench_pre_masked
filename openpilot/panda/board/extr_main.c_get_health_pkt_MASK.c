
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ (* check_ignition ) () ;int (* read_current ) () ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 void* VAR_9 ;

int FUNC_3(void *VAR_10) {
  struct __attribute__((packed)) {
    uint32_t voltage_pkt;
    uint32_t current_pkt;
    uint32_t can_send_errs_pkt;
    uint32_t can_fwd_errs_pkt;
    uint32_t gmlan_send_errs_pkt;
    uint8_t ignition_line_pkt;
    uint8_t ignition_can_pkt;
    uint8_t controls_allowed_pkt;
    uint8_t gas_interceptor_detected_pkt;
    uint8_t car_harness_status_pkt;
    uint8_t usb_power_mode_pkt;
    uint8_t safety_mode_pkt;
  } *VAR_11 = VAR_10;

  VAR_11->voltage_pkt = FUNC_0();
  VAR_11->current_pkt = VAR_4->read_current();


  VAR_11->ignition_line_pkt = (uint8_t)(VAR_4->check_ignition());
  VAR_11->ignition_can_pkt = (uint8_t)(VAR_8);

  VAR_11->controls_allowed_pkt = VAR_3;
  VAR_11->gas_interceptor_detected_pkt = VAR_6;
  VAR_11->can_send_errs_pkt = VAR_1;
  VAR_11->can_fwd_errs_pkt = VAR_0;
  VAR_11->gmlan_send_errs_pkt = VAR_7;
  VAR_11->car_harness_status_pkt = VAR_2;
  VAR_11->usb_power_mode_pkt = VAR_9;
  VAR_11->safety_mode_pkt = (uint8_t)(VAR_5);

  return sizeof(*VAR_11);
}
