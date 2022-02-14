
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int key; scalar_t__ pressed; } ;
typedef TYPE_1__ keyevent_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

uint16_t FUNC_4(keyevent_t VAR_1) {


    if (!VAR_0) {
        uint8_t VAR_2;

        if (VAR_1.pressed) {
            VAR_2 = FUNC_1(VAR_1.key);
            FUNC_3(VAR_1.key, VAR_2);
        } else {
            VAR_2 = FUNC_2(VAR_1.key);
        }
        return FUNC_0(VAR_2, VAR_1.key);
    } else

        return FUNC_0(FUNC_1(VAR_1.key), VAR_1.key);
}
