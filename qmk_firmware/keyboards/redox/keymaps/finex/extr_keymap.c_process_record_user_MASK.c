
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
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

bool FUNC_4(uint16_t VAR_4, keyrecord_t *VAR_5) {
  if (VAR_5->event.pressed) {
    switch(VAR_4) {
      case 134:
        FUNC_0("->");
        return 0;
      case 138:
        FUNC_0("=>");
        return 0;
      case 133:

        FUNC_0(FUNC_2("'"));
        return 0;
      case 137:

        FUNC_0(FUNC_2(FUNC_1("\"")));
        return 0;
      case 139:

        FUNC_0(FUNC_2("^"));
        return 0;
      case 132:

        FUNC_0(FUNC_2(FUNC_1("~")));
        return 0;
      case 136:
        FUNC_0(":-) ");
        return 0;
      case 135:
        FUNC_0(":-( ");
        return 0;
      case 142:

        FUNC_0(FUNC_2("`"));
        return 0;
      case 141:
        FUNC_0("{");
        return 0;
      case 140:
        FUNC_0("}");
        return 0;
      case 129:
        if (VAR_5->event.pressed) {
          FUNC_3(VAR_2);
        }
        return 0;
        break;
      case 131:
        if (VAR_5->event.pressed) {
          FUNC_3(VAR_0);
        }
        return 0;
        break;
      case 128:
        if (VAR_5->event.pressed) {
          FUNC_3(VAR_3);
        }
        return 0;
        break;
      case 130:
        if (VAR_5->event.pressed) {
          FUNC_3(VAR_1);
        }
        return 0;
        break;
    }
  }
  return 1;
}
