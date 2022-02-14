
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

 int FUNC_0 (int ) ;




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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;

bool FUNC_10(uint16_t VAR_15, keyrecord_t *VAR_16) {
  switch (VAR_15) {
        case 130:
          if (VAR_16->event.pressed) {
            FUNC_4(VAR_9);
          }
          return 0;
          break;
        case 131:
          if (VAR_16->event.pressed) {
            FUNC_4(VAR_8);
          }
          return 0;
          break;
        case 134:
          if (VAR_16->event.pressed) {
            FUNC_4(VAR_5);
          }
          return 0;
          break;
        case 132:
          if (VAR_16->event.pressed) {
            FUNC_2(VAR_6);
            FUNC_9(VAR_6, VAR_10, VAR_4);
          } else {
            FUNC_1(VAR_6);
            FUNC_9(VAR_6, VAR_10, VAR_4);
          }
          return 0;
          break;
        case 129:
          if (VAR_16->event.pressed) {
            FUNC_2(VAR_10);
            FUNC_9(VAR_6, VAR_10, VAR_4);
          } else {
            FUNC_1(VAR_10);
            FUNC_9(VAR_6, VAR_10, VAR_4);
          }
          return 0;
          break;
        case 133:
          if (VAR_16->event.pressed) {
           VAR_11 = 0;
           VAR_12 = FUNC_7();
           FUNC_3(FUNC_0(VAR_1));
          } else if (!VAR_11 && FUNC_6(VAR_12) < VAR_3) {
           FUNC_8(FUNC_0(VAR_1));
           FUNC_5(VAR_0);
          } else {
           FUNC_8(FUNC_0(VAR_1));
          }
          return 0;
          break;

        case 128:
          if (VAR_16->event.pressed) {
           VAR_13 = 0;
           VAR_14 = FUNC_7();

           VAR_11 = 1;
           FUNC_2(VAR_7);
          } else if (!VAR_13 && FUNC_6(VAR_14) < VAR_3) {
           FUNC_1(VAR_7);
           FUNC_5(VAR_2);
          } else {
           FUNC_1(VAR_7);
          }
          return 0;
          break;

        default:
          VAR_11 = 1;
          VAR_13 = 1;
          break;
      }
    return 1;
}
