
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_7 ;
 int VAR_8 ;

bool FUNC_9(uint16_t VAR_9, keyrecord_t* VAR_10)
{
 static uint32_t VAR_11;

 switch (VAR_9) {
 case 128:
  if (VAR_10->event.pressed && VAR_2 && VAR_1) {
   FUNC_0(VAR_7, "USB extra port manual mode");
  }

  return 0;

 case 129:
  if (VAR_10->event.pressed && VAR_2 && VAR_1) {
   FUNC_0(VAR_8, "USB GCR auto mode");
  }

  return 0;

 case 145:
  if (VAR_10->event.pressed) {
   FUNC_0(VAR_3, "Debug mode");
  }

  return 0;

 case 146:
  if (VAR_10->event.pressed) {
   FUNC_0(VAR_5, "Debug matrix");
  }

  return 0;

 case 148:
  if (VAR_10->event.pressed) {
   FUNC_0(VAR_4, "Debug keyboard");
  }

  return 0;

 case 147:
  if (VAR_10->event.pressed) {
   FUNC_0(VAR_6, "Debug mouse");
  }

  return 0;

 case 130:
  if (VAR_10->event.pressed) {
   VAR_11 = FUNC_8();
  } else {
   if (FUNC_7(VAR_11) >= 500) {
    FUNC_1();
   }
  }

  return 0;

 case 133:
  if (VAR_10->event.pressed) {
   switch (FUNC_3()) {
   case 144: {
    FUNC_5(143);
    FUNC_4(0, 0, 0);
   }
   break;

   case 143: {
    FUNC_5(142);
    FUNC_4(0, 0, 0);
   }
   break;

   case 142: {
    FUNC_5(VAR_0);
    FUNC_2();
   }
   break;

   default: {
    FUNC_5(144);
   }
   break;
   }
  }

  return 0;

 case 140:
  if (VAR_10->event.pressed) {
   FUNC_6(32, 160, 255);
  }

  return 0;

 case 135:
  if (VAR_10->event.pressed) {
   FUNC_6(192, 112, 255);
  }

  return 0;

 case 134:
  if (VAR_10->event.pressed) {
   FUNC_6(0, 255, 255);
  }

  return 0;

 case 138:
  if (VAR_10->event.pressed) {
   FUNC_6(88, 255, 255);
  }

  return 0;

 case 141:
  if (VAR_10->event.pressed) {
   FUNC_6(168, 255, 255);
  }

  return 0;

 case 139:
  if (VAR_10->event.pressed) {
   FUNC_6(128, 255, 255);
  }

  return 0;

 case 136:
  if (VAR_10->event.pressed) {
   FUNC_6(216, 255, 255);
  }

  return 0;

 case 131:
  if (VAR_10->event.pressed) {
   FUNC_6(40, 255, 255);
  }

  return 0;

 case 137:
  if (VAR_10->event.pressed) {
   FUNC_6(0, 0, 0);
  }

  return 0;

 case 132:
  if (VAR_10->event.pressed) {
   FUNC_6(128, 0, 255);
  }

  return 0;

 default:
  return 1;
 }
}
