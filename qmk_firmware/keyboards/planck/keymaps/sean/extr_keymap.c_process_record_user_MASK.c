
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






 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (int ,int ,int ,int ) ;





 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned long,unsigned long,int ) ;

bool FUNC_12(uint16_t VAR_13, keyrecord_t *VAR_14) {
  switch (VAR_13) {
    case 134:
      if (VAR_14->event.pressed) {
        FUNC_8(1UL<<VAR_7);
        FUNC_7(VAR_7);
      }
      return 0;
      break;
    case 133:
      if (VAR_14->event.pressed) {
        FUNC_7(VAR_8);
        FUNC_11(VAR_8, VAR_9, VAR_6);
      } else {
        FUNC_6(VAR_8);
        FUNC_11(VAR_8, VAR_9, VAR_6);
      }
      return 0;
      break;
    case 131:
      if (VAR_14->event.pressed) {
        FUNC_7(VAR_9);
        FUNC_11(VAR_8, VAR_9, VAR_6);
      } else {
        FUNC_6(VAR_9);
        FUNC_11(VAR_8, VAR_9, VAR_6);
      }
      return 0;
      break;
    case 130:
      if (VAR_14->event.pressed) {
        FUNC_8(1UL<<VAR_10);
        FUNC_7(VAR_10);
      }
      return 0;
      break;
    case 129:
      if (VAR_14->event.pressed) {
        FUNC_7(VAR_11);
        FUNC_11(VAR_11, VAR_12, VAR_6);
      } else {
        FUNC_6(VAR_11);
        FUNC_11(VAR_11, VAR_12, VAR_6);
      }
      return 0;
      break;
    case 128:
      if (VAR_14->event.pressed) {
        FUNC_7(VAR_12);
        FUNC_11(VAR_11, VAR_12, VAR_6);
      } else {
        FUNC_6(VAR_12);
        FUNC_11(VAR_11, VAR_12, VAR_6);
      }
      return 0;
      break;
    case 138:
      if (VAR_14->event.pressed) {
        FUNC_9(VAR_3);



      } else {
        FUNC_10(VAR_3);
      }
      return 0;
      break;
    case 137:
      if (VAR_14->event.pressed) {



      }
      return 0;
      break;
    case 135:
     return FUNC_1( FUNC_0(VAR_2), FUNC_2(VAR_5), FUNC_3(VAR_2), VAR_0 );
    case 136:
     return FUNC_1( FUNC_0(VAR_2), FUNC_2(VAR_1), FUNC_3(VAR_2), VAR_0 );
    case 132:
     return FUNC_1( FUNC_0(VAR_2), FUNC_2(VAR_4), FUNC_3(VAR_2), VAR_0 );
  }
  return 1;
}
