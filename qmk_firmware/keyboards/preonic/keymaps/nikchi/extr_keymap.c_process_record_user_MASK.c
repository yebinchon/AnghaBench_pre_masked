
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

 int FUNC_0 (int ) ;


 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

bool FUNC_8(uint16_t VAR_6, keyrecord_t *VAR_7) {
  switch (VAR_6) {
        case 129:
          if (VAR_7->event.pressed) {



            FUNC_4(1UL<<VAR_3);
          }
          return 0;
          break;
        case 130:
          if (VAR_7->event.pressed) {
            FUNC_3(VAR_2);
            FUNC_7(VAR_2, VAR_4, VAR_1);
          } else {
            FUNC_2(VAR_2);
            FUNC_7(VAR_2, VAR_4, VAR_1);
          }
          return 0;
          break;
        case 128:
          if (VAR_7->event.pressed) {
            FUNC_3(VAR_4);
            FUNC_7(VAR_2, VAR_4, VAR_1);
          } else {
            FUNC_2(VAR_4);
            FUNC_7(VAR_2, VAR_4, VAR_1);
          }
          return 0;
          break;
        case 131:
          if (VAR_7->event.pressed) {
            FUNC_5(VAR_0);



          } else {
            FUNC_6(VAR_0);
          }
          return 0;
          break;
      }
    return 1;
}
