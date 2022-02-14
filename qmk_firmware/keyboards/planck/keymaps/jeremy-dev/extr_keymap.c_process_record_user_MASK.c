
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

bool FUNC_3(uint16_t VAR_16, keyrecord_t *VAR_17) {
  switch (VAR_16) {
    case 137:
      if (VAR_17->event.pressed) {
        FUNC_2(VAR_7, VAR_13);
        FUNC_0(VAR_2);
      }

      return 0;

    case 138:
      if (VAR_17->event.pressed) {
        FUNC_2(VAR_7, VAR_6);
        FUNC_0(VAR_2);
        FUNC_0(VAR_15);
      }

      return 0;

    case 128:
      if (VAR_17->event.pressed) {
        FUNC_1(VAR_7, VAR_8, VAR_2);
      }

      return 0;

    case 135:
      if (VAR_17->event.pressed) {
        FUNC_0(VAR_14);
        FUNC_0(VAR_3);
      }

      return 0;

    case 132:
      if (VAR_17->event.pressed) {
        FUNC_2(VAR_8, VAR_1);
        FUNC_0(VAR_3);
      }

      return 0;

    case 129:
      if (VAR_17->event.pressed) {
        FUNC_0(VAR_9);
        FUNC_0(VAR_3);
      }

      return 0;

    case 130:
      if (VAR_17->event.pressed) {
        FUNC_2(VAR_8, VAR_11);
        FUNC_0(VAR_3);
      }

      return 0;

    case 131:
      if (VAR_17->event.pressed) {
        FUNC_2(VAR_8, VAR_4);
        FUNC_0(VAR_3);
      }

      return 0;

    case 133:
      if (VAR_17->event.pressed) {
        FUNC_2(VAR_8, VAR_5);
        FUNC_2(VAR_8, VAR_12);
      }

      return 0;

    case 134:
      if (VAR_17->event.pressed) {
        FUNC_2(VAR_8, VAR_10);
        FUNC_2(VAR_8, VAR_10);
      }

      return 0;

    case 136:
      if (VAR_17->event.pressed) {
        FUNC_2(VAR_8, VAR_0);
        FUNC_2(VAR_8, VAR_0);
      }

      return 0;
  }

  return 1;
}
