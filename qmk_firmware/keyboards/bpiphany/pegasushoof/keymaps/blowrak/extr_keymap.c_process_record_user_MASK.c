
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int key; scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

bool FUNC_5(uint16_t VAR_3, keyrecord_t *VAR_4) {
 uint8_t VAR_5 = FUNC_1();
 if (VAR_5 & FUNC_0(VAR_0) && VAR_4->event.pressed) {
  uint16_t VAR_6 = FUNC_2(VAR_2, VAR_4->event.key);
  if (VAR_6 != VAR_1) {
   FUNC_3(VAR_6);
   FUNC_4(VAR_6);
   return 0;
  }
 }
 return 1;
}
