
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
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,TYPE_2__*) ;
 int FUNC_7 (int ,int ,int ) ;

bool FUNC_8(uint16_t VAR_5, keyrecord_t *VAR_6) {
  if (VAR_6->event.pressed) {




  }

  switch (VAR_5) {
    case 131:
      if (VAR_6->event.pressed) {
        FUNC_2(VAR_2);
        FUNC_7(VAR_2, VAR_3, VAR_1);
      } else {
        FUNC_1(VAR_2);
        FUNC_7(VAR_2, VAR_3, VAR_1);
      }
      return 0;
      break;
    case 130:
      if (VAR_6->event.pressed) {
        FUNC_2(VAR_3);
        FUNC_7(VAR_2, VAR_3, VAR_1);
      } else {
        FUNC_1(VAR_3);
        FUNC_7(VAR_2, VAR_3, VAR_1);
      }
      return 0;
      break;
    case 132:
        if (VAR_6->event.pressed) {
          FUNC_2(VAR_1);
        } else {
          FUNC_1(VAR_1);
        }
        return 0;
        break;
    case 128:







      return 0;
      break;
    case 129:







      break;
  }
  return 1;
}
