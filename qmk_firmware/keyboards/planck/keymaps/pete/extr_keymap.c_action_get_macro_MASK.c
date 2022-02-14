
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
 int VAR_3 ;
 int const* VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int const,int const,int ) ;

const macro_t *FUNC_7(keyrecord_t *VAR_10, uint8_t VAR_11, uint8_t VAR_12)
{
      switch(VAR_11) {
        case 130:
          if (VAR_10->event.pressed) {



            FUNC_3(1UL<<130);
          }
          break;
        case 138:
          if (VAR_10->event.pressed) {



            FUNC_3(1UL<<138);
          }
          break;
        case 137:
          if (VAR_10->event.pressed) {



            FUNC_3(1UL<<137);
          }
          break;
        case 134:
          if (VAR_10->event.pressed) {
            FUNC_2(134);
            FUNC_6(134, 129, VAR_5);
          } else {
            FUNC_1(134);
            FUNC_6(134, 129, VAR_5);
          }
          break;
        case 129:
          if (VAR_10->event.pressed) {
            FUNC_2(129);
            FUNC_6(134, 129, VAR_5);
          } else {
            FUNC_1(129);
            FUNC_6(134, 129, VAR_5);
          }
          break;
        case 136:
          if (VAR_10->event.pressed) {
            FUNC_2(136);
          } else {
            FUNC_1(136);
          }
        break;
        case 132:
          if (VAR_10->event.pressed) {
            FUNC_4(VAR_3);
            FUNC_4(VAR_1);
            FUNC_4(VAR_0);
            FUNC_4(VAR_2);
          } else {
            FUNC_5(VAR_3);
            FUNC_5(VAR_1);
            FUNC_5(VAR_0);
            FUNC_5(VAR_2);
          }
        break;
        case 131:
          if (VAR_10->event.pressed) {
            FUNC_2(VAR_6);
          } else {
            FUNC_1(133);
            FUNC_1(128);
            FUNC_1(135);
          }
        break;
        case 133:
        case 128:
        case 135:
          if (VAR_10->event.pressed) {
            FUNC_1(VAR_6);
            VAR_6 = VAR_11;
          }
        break;
      }
    return VAR_4;
}
