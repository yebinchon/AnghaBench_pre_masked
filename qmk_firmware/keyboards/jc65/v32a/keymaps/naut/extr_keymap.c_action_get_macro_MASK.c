
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const* FUNC_1 (int ,int ,int ,int ,...) ;
 int const* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int,int,int) ;

const macro_t *FUNC_5(keyrecord_t *VAR_10, uint8_t VAR_11, uint8_t VAR_12) {
    if (VAR_10->event.pressed) {
        switch(VAR_11) {
            case 0:
                return FUNC_1(FUNC_0(VAR_4), FUNC_0(VAR_5), FUNC_2(3), FUNC_3(VAR_5), FUNC_3(VAR_4), VAR_1);
            case 1:
                return FUNC_1(FUNC_0(VAR_4), FUNC_0(VAR_5), FUNC_2(4), FUNC_3(VAR_5), FUNC_3(VAR_4), VAR_1);
            case 2:
                return FUNC_1(FUNC_0(VAR_2), FUNC_0(VAR_5), FUNC_0(VAR_4), FUNC_2(3), FUNC_0(VAR_2), FUNC_0(VAR_5), FUNC_0(VAR_4), VAR_1);
            case 3:
                return FUNC_1(FUNC_0(VAR_2), FUNC_0(VAR_5), FUNC_0(VAR_4), FUNC_2(4), FUNC_0(VAR_2), FUNC_0(VAR_5), FUNC_0(VAR_4), VAR_1);
            case 4:
                return FUNC_1(FUNC_0(VAR_2), FUNC_2(VAR_9), FUNC_3(VAR_2), VAR_1);
            case 5:
                return FUNC_1(FUNC_0(VAR_2), FUNC_2(VAR_0), FUNC_3(VAR_2), VAR_1);
            case 6:
                return FUNC_1(FUNC_0(VAR_4), FUNC_2(VAR_8), FUNC_3(VAR_4), VAR_1);
            case 7:
                return FUNC_1(FUNC_0(VAR_2), FUNC_2(VAR_3), FUNC_3(VAR_2), VAR_1);
            case 8:
                return FUNC_1(FUNC_0(VAR_2), FUNC_2(VAR_7), FUNC_3(VAR_2), VAR_1);
            case 9:
                FUNC_4(0xff, 0xff, 0xff);
                break;
        }
    }
    return VAR_6;
}
