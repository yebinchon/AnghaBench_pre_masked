
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

bool FUNC_4(uint16_t VAR_0, keyrecord_t *VAR_1) {
  if(VAR_1->event.pressed) {
    switch (VAR_0) {

  case 129:
            FUNC_0(FUNC_2("["));
            return 1;
   break;
  case 128:
            FUNC_0(FUNC_2("]"));
            return 1;
   break;
  case 130:
            FUNC_0(FUNC_1("w"));
            return 1;
   break;
  case 132:
            FUNC_0(FUNC_3(FUNC_2("e")));
            return 1;
   break;
  case 133:
            FUNC_0(FUNC_2("g"));
            return 1;
   break;
  case 131:
            FUNC_0(FUNC_2("e"));
            return 1;
   break;
 }
  }

  return 1;
}
