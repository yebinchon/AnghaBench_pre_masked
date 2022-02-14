
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_8__ {size_t length; int checksum; TYPE_2__* events; } ;
typedef TYPE_3__ dynamic_macro_t ;


 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (size_t) ;
 TYPE_3__* VAR_0 ;

void FUNC_5(uint8_t VAR_1) {
  FUNC_3();

  dynamic_macro_t* VAR_2 = &VAR_0[VAR_1];
  uint8_t VAR_3 = VAR_2->length;

  keyrecord_t* VAR_4 = &(VAR_2->events[0]);
  keyrecord_t* VAR_5 = &(VAR_2->events[VAR_3 - 1]);

  FUNC_0("dynamic_macro: macro length before trimming: %d\n", VAR_2->length);
  while (VAR_5 != VAR_4 && (VAR_5)->event.pressed) {
    FUNC_1("dynamic macro: trimming a trailing key-down event");
    --(VAR_2->length);
    --VAR_5;
  }






  FUNC_0("dynamic macro: slot %d saved, length: %d\n", VAR_1, VAR_3);
}
