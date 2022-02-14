
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;
struct TYPE_5__ {int enable; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8 (qk_tap_dance_state_t *VAR_2, void *VAR_3) {
  if (VAR_2->count >= 2) {
    FUNC_5("Double tapped, switching layers");
    if (FUNC_3(VAR_0)) {
      FUNC_1(VAR_0);
    } else {
      FUNC_2(VAR_0);
    }
  } else {
    FUNC_4("Single tapped: ");
    if (FUNC_3(VAR_0)) {






    } else {
      FUNC_5("Base layer, sending string");
      FUNC_0("This thing is BIG!!\n");
    }
  }
}
