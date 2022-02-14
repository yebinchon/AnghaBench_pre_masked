
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_8__ {size_t length; TYPE_2__* events; } ;
typedef TYPE_3__ dynamic_macro_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t,size_t,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 TYPE_3__* VAR_1 ;

void FUNC_3(uint8_t VAR_2, keyrecord_t* VAR_3) {
  dynamic_macro_t* VAR_4 = &VAR_1[VAR_2];
  uint8_t VAR_5 = VAR_4->length;


  if (!VAR_3->event.pressed && VAR_5 == 0) {
    FUNC_1("dynamic macro: ignoring a leading key-up event");
    return;
  }

  if (VAR_5 < VAR_0) {
    VAR_4->events[VAR_5] = *VAR_3;
    VAR_4->length = ++VAR_5;
  } else {
    FUNC_2();
  }

  FUNC_0("dynamic macro: slot %d length: %d/%d\n", VAR_2, VAR_5, VAR_0);
}
