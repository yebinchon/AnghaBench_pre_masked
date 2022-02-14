
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Event; } ;
typedef TYPE_1__ SlWlanEvent_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;




void FUNC_1(SlWlanEvent_t *VAR_1) {
  switch (VAR_1->Event) {
    case 130:
      FUNC_0(VAR_0, ("WiFi: connected, getting IP"));
      break;
    case 129:
      FUNC_0(VAR_0, ("WiFi: station connected"));
      break;
    case 128:
      FUNC_0(VAR_0, ("WiFi: station disconnected"));
      break;
    default:
      FUNC_0(VAR_0, ("WiFi: event %d", (int) VAR_1->Event));
  }
}
