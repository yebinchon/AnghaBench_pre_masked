
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




 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

bool FUNC_2(uint16_t VAR_9, keyrecord_t *VAR_10) {
  switch (VAR_9) {
    case 129:
      if (VAR_10->event.pressed) {
        FUNC_0(1UL << VAR_2);
        FUNC_1 ( VAR_8);
        FUNC_1 ( VAR_5);
        FUNC_1 ( VAR_6);
        FUNC_1 ( VAR_3);
        FUNC_1 ( VAR_4);
        FUNC_1 ( VAR_7);
        FUNC_1 ( VAR_0);
  FUNC_1 ( VAR_1);
      }
      return 0;
      break;
    case 128:
      if (VAR_10->event.pressed) {
        FUNC_0(1UL << VAR_8);
        FUNC_1 ( VAR_2);
        FUNC_1 ( VAR_5);
        FUNC_1 ( VAR_6);
        FUNC_1 ( VAR_3);
        FUNC_1 ( VAR_4);
        FUNC_1 ( VAR_7);
        FUNC_1 ( VAR_0);
  FUNC_1 ( VAR_1);
      }
      return 0;
      break;
  }
  return 1;
}
