
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

bool FUNC_11(uint16_t VAR_2, keyrecord_t* VAR_3)
{
 static uint32_t VAR_4;

 switch (VAR_2) {
 case 128:
  if (VAR_3->event.pressed) {
   VAR_4 = FUNC_8();
  } else {
   if (FUNC_7(VAR_4) >= 500) {
    FUNC_2();
    FUNC_3(1);
    FUNC_5(11, 11, 11);
    FUNC_10(150);
    FUNC_1();
   } else {
    FUNC_0(VAR_1);
    FUNC_6(VAR_0);
    FUNC_9(VAR_1);
   }
  }

  return 0;

 case 137:
  if (VAR_3->event.pressed) {
   FUNC_4(32, 160, 255);
  }

  return 0;

 case 132:
  if (VAR_3->event.pressed) {
   FUNC_4(192, 112, 255);
  }

  return 0;

 case 131:
  if (VAR_3->event.pressed) {
   FUNC_4(0, 255, 255);
  }

  return 0;

 case 135:
  if (VAR_3->event.pressed) {
   FUNC_4(88, 255, 255);
  }

  return 0;

 case 138:
  if (VAR_3->event.pressed) {
   FUNC_4(168, 255, 255);
  }

  return 0;

 case 136:
  if (VAR_3->event.pressed) {
   FUNC_4(128, 255, 255);
  }

  return 0;

 case 133:
  if (VAR_3->event.pressed) {
   FUNC_4(216, 255, 255);
  }

  return 0;

 case 129:
  if (VAR_3->event.pressed) {
   FUNC_4(40, 255, 255);
  }

  return 0;

 case 134:
  if (VAR_3->event.pressed) {
   FUNC_4(0, 0, 0);
  }

  return 0;

 case 130:
  if (VAR_3->event.pressed) {
   FUNC_4(128, 0, 255);
  }

  return 0;

 default:
  return 1;
 }
}
