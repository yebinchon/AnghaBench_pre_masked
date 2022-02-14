
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int val; int sat; int hue; int mode; } ;


 scalar_t__ VAR_0 ;

 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int,int,int) ;
 TYPE_1__ VAR_2 ;

uint32_t FUNC_9(uint32_t VAR_3) {
    if (VAR_3 == VAR_0 && VAR_1 == 1) {
        VAR_2.hue = FUNC_1();
        VAR_2.sat = FUNC_3();
        VAR_2.val = FUNC_4();
        VAR_1 = 0;
    }

    switch (FUNC_0(VAR_3)) {
        case 128:
            VAR_2.mode = FUNC_2();
            FUNC_6(1);
            FUNC_8(0xD3, 0x7F, 0xED);
            VAR_1 = 1;
            break;
        default:
            FUNC_5(VAR_2.mode);
            FUNC_7(VAR_2.hue, VAR_2.sat, VAR_2.val);
            break;
    }
    return VAR_3;
}
