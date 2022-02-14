
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ) ;
 unsigned long VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

bool FUNC_5(uint16_t VAR_9, keyrecord_t *VAR_10) {
  switch (VAR_9) {
    case 136:
      if (VAR_10->event.pressed) {



        FUNC_4(1UL<<VAR_4);
      }
      return 0;
      break;
    case 128:
      FUNC_3(VAR_3, VAR_10->event.pressed);
      return 0;
      break;
    case 131:
      FUNC_3(VAR_1, VAR_10->event.pressed);
      return 0;
      break;
    case 133:
      FUNC_3(VAR_0, VAR_10->event.pressed);
      return 0;
      break;
    case 130:
      FUNC_3(VAR_2, VAR_10->event.pressed);
      return 0;
      break;
    case 129:
      FUNC_3(VAR_1, VAR_10->event.pressed);
      FUNC_3(VAR_0, VAR_10->event.pressed);
      FUNC_3(VAR_2, VAR_10->event.pressed);
      return 0;
      break;
    case 132:
      if (VAR_10->event.pressed) {
        FUNC_2();
      }
      return 0;
      break;
    case 135:
      if (VAR_10->event.pressed && VAR_7 < 8) {
        VAR_7++;
      }
      return 0;
      break;
    case 134:
      if (VAR_10->event.pressed && VAR_7 > 0) {
        VAR_7--;
      }
      return 0;
      break;
  }
  if (!VAR_10->event.pressed && FUNC_0(VAR_9)) {
    VAR_5 = 1;
    if (VAR_6 == 0)
      FUNC_2();
  }
  return 1;
}
