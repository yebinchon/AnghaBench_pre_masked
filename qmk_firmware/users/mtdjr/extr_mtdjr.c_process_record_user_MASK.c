
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ) ;

bool FUNC_10(uint16_t VAR_4, keyrecord_t *VAR_5) {





  switch (VAR_4) {
    case 134:
      if (VAR_5->event.pressed) {
        FUNC_2(VAR_2);
      }
      return 0;
      break;
    case 135:
      if (VAR_5->event.pressed) {
        FUNC_1(VAR_1);
        FUNC_9(VAR_1, VAR_3, VAR_0);
      } else {
        FUNC_0(VAR_1);
        FUNC_9(VAR_1, VAR_3, VAR_0);
      }
      return 0;
      break;
    case 133:
      if (VAR_5->event.pressed) {
        FUNC_1(VAR_3);
        FUNC_9(VAR_1, VAR_3, VAR_0);
      } else {
        FUNC_0(VAR_3);
        FUNC_9(VAR_1, VAR_3, VAR_0);
      }
      return 0;
      break;
    case 136:
      if (VAR_5->event.pressed) {
        FUNC_1(VAR_0);
        FUNC_9(VAR_1, VAR_3, VAR_0);
      } else {
        FUNC_0(VAR_0);
        FUNC_9(VAR_1, VAR_3, VAR_0);
      }
      return 0;
      break;
    case 128:





      break;
    case 130:





      break;
    case 129:





      break;
    case 131:





      break;
    case 132:





      break;
  }
  return 1;
}
