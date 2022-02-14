
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (char*) ;
bool FUNC_1(uint16_t VAR_0, keyrecord_t *VAR_1) {
  switch (VAR_0) {
    case 142: if(VAR_1->event.pressed){ FUNC_0("A1"); } break;
    case 141: if(VAR_1->event.pressed){ FUNC_0("A2"); } break;
    case 140: if(VAR_1->event.pressed){ FUNC_0("A3"); } break;
    case 139: if(VAR_1->event.pressed){ FUNC_0("B1"); } break;
    case 138: if(VAR_1->event.pressed){ FUNC_0("B2"); } break;
    case 137: if(VAR_1->event.pressed){ FUNC_0("B3"); } break;
    case 136: if(VAR_1->event.pressed){ FUNC_0("C1"); } break;
    case 135: if(VAR_1->event.pressed){ FUNC_0("C2"); } break;
    case 134: if(VAR_1->event.pressed){ FUNC_0("C3"); } break;
    case 133: if(VAR_1->event.pressed){ FUNC_0("D1"); } break;
    case 132: if(VAR_1->event.pressed){ FUNC_0("D2"); } break;
    case 131: if(VAR_1->event.pressed){ FUNC_0("D3"); } break;
    case 130: if(VAR_1->event.pressed){ FUNC_0("E1"); } break;
    case 129: if(VAR_1->event.pressed){ FUNC_0("E2"); } break;
    case 128: if(VAR_1->event.pressed){ FUNC_0("E3"); } break;
  }
  return 1;
}
