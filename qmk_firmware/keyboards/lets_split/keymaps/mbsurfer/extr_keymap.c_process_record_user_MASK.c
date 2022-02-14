
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mode; int val; int sat; int hue; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 TYPE_3__ VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int ,int ) ;

bool FUNC_9(uint16_t VAR_9, keyrecord_t *VAR_10) {
  switch (VAR_9) {
    case 129:
      if (VAR_10->event.pressed) {
        FUNC_4(1UL<<VAR_6);
      }
      return 0;
      break;
    case 132:
      if (VAR_10->event.pressed) {
        FUNC_4(1UL<<VAR_3);
      }
      return 0;
      break;
    case 131:
      if (VAR_10->event.pressed) {
        FUNC_4(1UL<<VAR_4);
      }
      return 0;
      break;
    case 130:
      if (VAR_10->event.pressed) {

        if (FUNC_0(VAR_7) && FUNC_0(VAR_2)) {

          VAR_1 = VAR_8.mode;
          VAR_0 = VAR_8.hue;


          FUNC_5(1);
          FUNC_7(0, 0, 255);
        }

        FUNC_3(VAR_5);
        FUNC_8(VAR_5, VAR_7, VAR_2);

        if (FUNC_1(VAR_2)){

          FUNC_7(0, 255, 255);
        }
      } else {

        FUNC_2(VAR_5);
        FUNC_8(VAR_5, VAR_7, VAR_2);

        if (FUNC_0(VAR_7) && FUNC_0(VAR_2)) {

          FUNC_5(VAR_1);
          FUNC_6(VAR_0, VAR_8.sat, VAR_8.val);
        } else if (FUNC_1(VAR_7)){

          FUNC_7(0, 255, 0);
        }
      }
      return 0;
      break;
    case 128:
      if (VAR_10->event.pressed) {

        if (FUNC_0(VAR_5) && FUNC_0(VAR_2)) {

          VAR_1 = VAR_8.mode;
          VAR_0 = VAR_8.hue;


          FUNC_5(1);
          FUNC_7(0, 255, 0);
        }

        FUNC_3(VAR_7);
        FUNC_8(VAR_5, VAR_7, VAR_2);

        if (FUNC_1(VAR_2)){

          FUNC_7(0, 255, 255);
        }
      } else {
        FUNC_2(VAR_7);
        FUNC_8(VAR_5, VAR_7, VAR_2);

        if (FUNC_0(VAR_5) && FUNC_0(VAR_2)) {

          FUNC_5(VAR_1);
          FUNC_6(VAR_0, VAR_8.sat, VAR_8.val);
        } else if (FUNC_1(VAR_5)){

          FUNC_7(0, 0, 255);
        }
      }
      return 0;
      break;
    case 133:
      if (VAR_10->event.pressed) {
        FUNC_3(VAR_2);
      } else {
        FUNC_2(VAR_2);
      }
      return 0;
      break;
  }
  return 1;
}
