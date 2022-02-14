
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ) ;

bool FUNC_5(uint16_t VAR_10, keyrecord_t *VAR_11) {

  if (!FUNC_3(VAR_10, VAR_11)) {
      return 0;
  }

   switch (VAR_10) {
    case 129:
      if (VAR_11->event.pressed) {
        FUNC_2(1UL<<VAR_8);
      }
      return 0;
    case 134:
      if (VAR_11->event.pressed) {
        FUNC_1(VAR_3);
        FUNC_4(VAR_3, VAR_9, VAR_0);
      } else {
        FUNC_0(VAR_3);
        FUNC_4(VAR_3, VAR_9, VAR_0);
      }
      return 0;
    case 128:
      if (VAR_11->event.pressed) {
        FUNC_1(VAR_9);
        FUNC_4(VAR_3, VAR_9, VAR_0);
      } else {
        FUNC_0(VAR_9);
        FUNC_4(VAR_3, VAR_9, VAR_0);
      }
      return 0;
    case 131:
      if (VAR_11->event.pressed) {
        FUNC_1(VAR_3);
        FUNC_1(VAR_6);
        FUNC_4(VAR_3, VAR_9, VAR_0);
      } else {
        FUNC_0(VAR_3);
        FUNC_0(VAR_6);
        FUNC_4(VAR_3, VAR_9, VAR_0);
      }
      return 0;
    case 130:
      if (VAR_11->event.pressed) {
        FUNC_1(VAR_9);
        FUNC_1(VAR_7);
        FUNC_4(VAR_3, VAR_9, VAR_0);
      } else {
        FUNC_0(VAR_9);
        FUNC_0(VAR_7);
        FUNC_4(VAR_3, VAR_9, VAR_0);
      }
      return 0;
    case 133:
      if (VAR_11->event.pressed) {
        FUNC_1(VAR_1);
        FUNC_1(VAR_4);
      } else {
        FUNC_0(VAR_1);
        FUNC_0(VAR_4);
      }
      return 0;
    case 132:
      if (VAR_11->event.pressed) {
        FUNC_1(VAR_2);
        FUNC_1(VAR_5);
      } else {
        FUNC_0(VAR_2);
        FUNC_0(VAR_5);
      }
      return 0;
    }
  return 1;
}
