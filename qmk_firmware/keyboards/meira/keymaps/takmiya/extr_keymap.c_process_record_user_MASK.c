
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
struct TYPE_7__ {int mode; } ;






 int FUNC_0 (int ,int,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ) ;

bool FUNC_9(uint16_t VAR_7, keyrecord_t *VAR_8) {
  switch (VAR_7) {
    case 130:
      if (VAR_8->event.pressed) {




      }
      return 0;
      break;
    case 131:
        if (VAR_8->event.pressed) {


            if (VAR_1) {
            } else {
                VAR_1 = !VAR_1;



            }
            FUNC_4(VAR_3);
            FUNC_8(VAR_3, VAR_4, VAR_2);
        } else {



            VAR_1 = 0;
            FUNC_3(VAR_3);
            FUNC_8(VAR_3, VAR_4, VAR_2);
        }
        return 0;
        break;
    case 129:
        if (VAR_8->event.pressed) {


            if (VAR_1) {
            } else {
                VAR_1 = !VAR_1;



            }
            FUNC_4(VAR_4);
            FUNC_8(VAR_3, VAR_4, VAR_2);
        } else {



            FUNC_3(VAR_4);
            VAR_1 = 0;
            FUNC_8(VAR_3, VAR_4, VAR_2);
        }
        return 0;
        break;
    case 134:

        if (VAR_8->event.pressed) {
            FUNC_4(VAR_2);
        } else {
            FUNC_3(VAR_2);
        }
        return 0;
        break;
    case 132:






        return 0;
        break;
    case 133:
        if (VAR_8->event.pressed) {
            FUNC_5("Stepping backlight\n");





        }
        return 0;
        break;
  }
  return 1;
}
