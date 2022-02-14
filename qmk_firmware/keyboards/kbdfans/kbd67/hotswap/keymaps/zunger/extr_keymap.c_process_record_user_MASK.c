
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;

bool FUNC_1(uint16_t VAR_8, keyrecord_t *VAR_9) {
  static bool VAR_10 = 0;
  static bool VAR_11 = 0;

  if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {
    VAR_10 = VAR_9->event.pressed;
  } else if (VAR_8 == VAR_3) {
    VAR_11 = VAR_9->event.pressed;
  } else if (VAR_8 == VAR_5) {



    return (VAR_9->event.pressed && VAR_10);
  }


  uint32_t VAR_12 = VAR_7 & VAR_2;
  if (VAR_11) {
    VAR_12 |= (VAR_10 ? VAR_6 : VAR_4);
  }
  if (VAR_7 != VAR_12) {
    FUNC_0(VAR_12);
  }

  return 1;
}
