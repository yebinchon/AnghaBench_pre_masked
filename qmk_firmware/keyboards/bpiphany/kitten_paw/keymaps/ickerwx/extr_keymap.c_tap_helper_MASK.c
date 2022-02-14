
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ count; scalar_t__ interrupted; } ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_2__ tap; TYPE_1__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(keyrecord_t *VAR_0, uint16_t VAR_1, uint16_t VAR_2, uint16_t VAR_3 ) {
  if (VAR_0->event.pressed) {
      if (VAR_0->tap.count > 0 && !VAR_0->tap.interrupted) {
          if (VAR_0->tap.interrupted) {
              FUNC_4(FUNC_0(VAR_1));
          }
      } else {
          FUNC_4(FUNC_0(VAR_1));
      }
  } else {
      if (VAR_0->tap.count > 0 && !(VAR_0->tap.interrupted)) {
          FUNC_1(FUNC_0(VAR_2));
          FUNC_5();
          FUNC_3(VAR_3);
          FUNC_6(VAR_3);
          FUNC_2(FUNC_0(VAR_2));
          FUNC_5();
          VAR_0->tap.count = 0;
      } else {
          FUNC_7(FUNC_0(VAR_1));
      }
  }
}
