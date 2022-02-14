
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

bool FUNC_6(uint16_t VAR_5, keyrecord_t *VAR_6) {
 if(VAR_3 == VAR_5) {
  if(VAR_6->event.pressed) {
   VAR_4 = FUNC_4();
   FUNC_1(1);
  } else {
   FUNC_0(1);
   if (FUNC_3(VAR_4) < 200) {
    FUNC_2(VAR_0);
    FUNC_2(VAR_2);
    FUNC_2(VAR_1);
    FUNC_5(VAR_1);
    FUNC_5(VAR_2);
    FUNC_5(VAR_0);
   }
  }
 }
 return 1;
}
