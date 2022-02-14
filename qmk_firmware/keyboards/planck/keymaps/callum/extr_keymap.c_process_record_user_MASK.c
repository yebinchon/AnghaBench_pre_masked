
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (int ) ;

 int FUNC_1 (TYPE_2__*,char*) ;

 int FUNC_2 (int ) ;

bool FUNC_3(uint16_t VAR_3, keyrecord_t *VAR_4) {
    switch (VAR_3) {


        case 148:
            return FUNC_1(VAR_4, "&");
        case 147:
            return FUNC_1(VAR_4, "*");
        case 146:
            return FUNC_1(VAR_4, "@");
        case 145:
            return FUNC_1(VAR_4, "\\");
        case 144:
            return FUNC_1(VAR_4, "^");
        case 142:
            return FUNC_1(VAR_4, "$");
        case 141:
            return FUNC_1(VAR_4, "=");
        case 140:
            return FUNC_1(VAR_4, "!");
        case 139:
            return FUNC_1(VAR_4, "`");
        case 138:
            return FUNC_1(VAR_4, "#");
        case 137:
            return FUNC_1(VAR_4, "[");
        case 136:
            return FUNC_1(VAR_4, "{");
        case 135:
            return FUNC_1(VAR_4, "(");
        case 134:
            return FUNC_1(VAR_4, "%");
        case 133:
            return FUNC_1(VAR_4, "|");
        case 132:
            return FUNC_1(VAR_4, "+");
        case 131:
            return FUNC_1(VAR_4, "]");
        case 130:
            return FUNC_1(VAR_4, "}");
        case 129:
            return FUNC_1(VAR_4, ")");
        case 128:
            return FUNC_1(VAR_4, "~");


        case 143:
            if (VAR_4->event.pressed) {
                if (VAR_2 == 0) {
                    FUNC_0(VAR_0);
                } else {
                    FUNC_0(VAR_1);
                }
                VAR_2++;
            } else {
                if (VAR_2 == 1) {
                    FUNC_2(VAR_0);
                } else {
                    FUNC_2(VAR_1);
                }
                VAR_2--;
            }
            return 1;
    }
    return 1;
}
