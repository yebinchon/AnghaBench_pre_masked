
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int Event; } ;
typedef TYPE_1__ SlNetAppEvent_t ;


 int VAR_0 ;

 int FUNC_0 (char*,...) ;
 TYPE_2__ VAR_1 ;

void FUNC_1(SlNetAppEvent_t *VAR_2) {
  switch (VAR_2->Event) {
    case 128:
      FUNC_0("Got IP\r\n");
      VAR_1.state = VAR_0;
      break;
    default:
      FUNC_0("Got NetApp Event: %d\r\n", VAR_2->Event);
      break;
  }
}
