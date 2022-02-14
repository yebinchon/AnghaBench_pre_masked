
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Event; } ;
typedef TYPE_1__ SlWlanEvent_t ;


 int FUNC_0 (char*,...) ;



void FUNC_1(SlWlanEvent_t *VAR_0) {
  switch (VAR_0->Event) {
    case 129:
      FUNC_0("Connected to WiFi\r\n");
      break;
    case 128:
      FUNC_0("Disconnected WiFi\r\n");
      break;
    default:
      FUNC_0("Got Wlan event %d\r\n", VAR_0->Event);
      break;
  }
}
