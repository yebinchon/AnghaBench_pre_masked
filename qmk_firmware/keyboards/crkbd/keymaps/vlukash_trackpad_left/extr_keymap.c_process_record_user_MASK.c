
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_8__ {int mode; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ) ;

bool FUNC_9(uint16_t VAR_6, keyrecord_t *VAR_7) {
  if (VAR_7->event.pressed) {



  }

  switch (VAR_6) {
    case 131:
      if (VAR_7->event.pressed) {
        FUNC_3(1UL<<VAR_3);
      }
      return 0;
    case 132:
      if (VAR_7->event.pressed) {
        FUNC_2(VAR_2);
        FUNC_8(VAR_2, VAR_4, VAR_1);
      } else {
        FUNC_1(VAR_2);
        FUNC_8(VAR_2, VAR_4, VAR_1);
      }
      return 0;
    case 130:
      if (VAR_7->event.pressed) {
        FUNC_2(VAR_4);
        FUNC_8(VAR_2, VAR_4, VAR_1);
      } else {
        FUNC_1(VAR_4);
        FUNC_8(VAR_2, VAR_4, VAR_1);
      }
      return 0;
    case 128:







      return 0;
    case 129:







      break;
  }
  return 1;
}
