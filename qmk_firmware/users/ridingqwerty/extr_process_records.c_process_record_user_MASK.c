
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;

bool FUNC_11(uint16_t VAR_5, keyrecord_t *VAR_6) {
  switch(VAR_5) {
    case 128:
      if (VAR_6->event.pressed) {
        VAR_4 = FUNC_8();
        FUNC_2(VAR_3);
        FUNC_6(FUNC_0(VAR_1));
      } else {
        FUNC_10(FUNC_0(VAR_1));
        FUNC_1(VAR_3);
 if (FUNC_7(VAR_4) < VAR_2) {
          FUNC_5(VAR_0);
   FUNC_9(VAR_0);
 }
      }
      return 0; break;
  }
  return FUNC_3(VAR_5, VAR_6) &&
    FUNC_4(VAR_5, VAR_6);
}
