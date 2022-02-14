
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mods; } ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__* VAR_9 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static void FUNC_5(uint8_t VAR_10, keyrecord_t *VAR_11) {
  uint8_t VAR_12 = VAR_10 - 136;
  uint8_t VAR_13;
  static bool VAR_14[10];

  if (VAR_9->mods & FUNC_0(VAR_8) ||
      ((FUNC_1() & FUNC_0(VAR_8)) && !FUNC_2())) {
    if (VAR_11->event.pressed)
      VAR_14[VAR_12] = 1;
  }

  if (!VAR_14[VAR_12]) {
    VAR_13 = VAR_12 + VAR_0;
  } else {
    switch (VAR_10) {
    case 129:
    case 128:
      VAR_14[VAR_12] = 0;
      return;

    case 130:
      VAR_13 = VAR_1;
      break;
    case 132:
      VAR_13 = VAR_7;
      break;
    case 134:
      VAR_13 = VAR_3;
      break;
    case 136:
      VAR_13 = VAR_5;
      break;

    case 137:
      VAR_13 = VAR_4;
      break;
    case 135:
      VAR_13 = VAR_0;
      break;
    case 133:
      VAR_13 = VAR_2;
      break;
    case 131:
      VAR_13 = VAR_6;
      break;
    }
  }

  if (VAR_11->event.pressed) {
    FUNC_3 (VAR_13);
  } else {
    FUNC_4 (VAR_13);
    VAR_14[VAR_12] = 0;
  }
}
