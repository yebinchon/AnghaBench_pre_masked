
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


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

bool FUNC_9(uint16_t VAR_4, keyrecord_t *VAR_5) {
  switch(VAR_4) {

    case 131:
      if (VAR_5->event.pressed) {
        FUNC_8(VAR_1);
        if (FUNC_0(VAR_3, 1)) {
          FUNC_8(VAR_2);
        }
        else {
          FUNC_7(VAR_2);
        }

        FUNC_3(VAR_3, 0);
      }

      else {
        FUNC_7(VAR_1);
        FUNC_7(VAR_2);

        FUNC_1(VAR_3, 0);
      }
      break;

    case 130:
      if(VAR_5->event.pressed) {

        FUNC_6(VAR_3, 1);



        if (FUNC_0(VAR_3, 0)) {
          if (FUNC_0(VAR_3, 1)) {
            FUNC_8(VAR_2);
          }
          else {
            FUNC_7(VAR_2);
          }
        }
      }
      break;

    case 128:
      if (VAR_5->event.pressed) {

        FUNC_6(VAR_3, 2);
      }
      break;


    case 129:

      if (!FUNC_0(VAR_3, 2)) {
        if (VAR_5->event.pressed) {
          FUNC_2(FUNC_4(VAR_0));
          return 0;
        }

        else {
          FUNC_2(FUNC_5(VAR_0));
          return 0;
        }
      }
      break;
  }
  return 1;
}
