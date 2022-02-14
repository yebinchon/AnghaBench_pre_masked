
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int ,char*) ;
 int FUNC_8 (int,TYPE_2__*) ;

bool FUNC_9(uint16_t VAR_7, keyrecord_t *VAR_8) {
    switch(VAR_7) {
        case 131:
            FUNC_7(VAR_8, VAR_0, FUNC_5(VAR_6));
            return 0;
        case 133:
            FUNC_7(VAR_8, VAR_2, FUNC_5(VAR_4));
            return 0;
    }

    if (VAR_8->event.pressed) {
        switch(VAR_7) {
            case 129:
                if (FUNC_6()&(FUNC_0(VAR_1)|FUNC_0(VAR_3))) {
                    FUNC_1(FUNC_5(VAR_5));
                } else {
                    FUNC_1(FUNC_2("3"));
                }
                break;
            case 130:
                FUNC_1(FUNC_3("a"));
                break;
            case 134:
                FUNC_1(FUNC_4(FUNC_2("c")));
                break;
            case 132:
                FUNC_1(FUNC_4("L"));
                break;
            case 128:
                FUNC_1("country_iso_alpha2_code");
                break;
            default:
                return FUNC_8(VAR_7, VAR_8);
        }
        return 0;
    }
    return FUNC_8(VAR_7, VAR_8);
}
