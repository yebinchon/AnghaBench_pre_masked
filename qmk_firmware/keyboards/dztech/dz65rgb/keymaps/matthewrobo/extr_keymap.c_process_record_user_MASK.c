
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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

bool FUNC_5(uint16_t VAR_0, keyrecord_t* VAR_1)
{
 static uint32_t VAR_2;

 switch (VAR_0) {
 case 129:
  if (VAR_1->event.pressed) {
   VAR_2 = FUNC_4();
  } else {
   if (FUNC_3(VAR_2) >= 500) {
    FUNC_1();
   }
  }

  return 0;

 case 128:
  if (VAR_1->event.pressed) {
   VAR_2 = FUNC_4();
  } else {
   if (FUNC_3(VAR_2) >= 500) {
    FUNC_0();
   }
  }

  return 0;

 case 138:
  if (VAR_1->event.pressed) {
   FUNC_2(32, 160, 255);
  }

  return 0;

 case 133:
  if (VAR_1->event.pressed) {
   FUNC_2(192, 112, 255);
  }

  return 0;

 case 132:
  if (VAR_1->event.pressed) {
   FUNC_2(0, 255, 255);
  }

  return 0;

 case 136:
  if (VAR_1->event.pressed) {
   FUNC_2(88, 255, 255);
  }

  return 0;

 case 139:
  if (VAR_1->event.pressed) {
   FUNC_2(168, 255, 255);
  }

  return 0;

 case 137:
  if (VAR_1->event.pressed) {
   FUNC_2(128, 255, 255);
  }

  return 0;

 case 134:
  if (VAR_1->event.pressed) {
   FUNC_2(216, 255, 255);
  }

  return 0;

 case 130:
  if (VAR_1->event.pressed) {
   FUNC_2(40, 255, 255);
  }

  return 0;

 case 135:
  if (VAR_1->event.pressed) {
   FUNC_2(0, 0, 0);
  }

  return 0;

 case 131:
  if (VAR_1->event.pressed) {
   FUNC_2(128, 0, 255);
  }

  return 0;

 default:
  return 1;
 }
}
