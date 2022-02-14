
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const* VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ) ;

const macro_t *FUNC_7(keyrecord_t *VAR_11, uint8_t VAR_12, uint8_t VAR_13)
{
      switch(VAR_12) {
        case 5:
            if (VAR_11->event.pressed) {
              FUNC_4(VAR_2);
              FUNC_4(VAR_1);
              FUNC_4(VAR_0);
              FUNC_6(VAR_0);
              FUNC_6(VAR_1);
              FUNC_6(VAR_2);
            }
        break;
        case 6:
              if (VAR_11->event.pressed) {




              FUNC_2(VAR_6);
              FUNC_2(VAR_5);
              FUNC_2(VAR_4);
              FUNC_3(VAR_7);
            }
        break;
        case 7:
              if (VAR_11->event.pressed) {



              FUNC_2(VAR_6);
              FUNC_2(VAR_5);
              FUNC_2(VAR_7);
              FUNC_2(VAR_4);
            }
        break;
        case 8:
          if (VAR_11->event.pressed) {
            FUNC_4(VAR_2);



          } else {
            FUNC_6(VAR_2);
          }
        break;
        case 9:
          if(VAR_11->event.pressed) {




            FUNC_2(VAR_6);
            FUNC_2(VAR_5);
            FUNC_2(VAR_7);
            FUNC_3(VAR_4);
          }
      }
    return VAR_3;
}
