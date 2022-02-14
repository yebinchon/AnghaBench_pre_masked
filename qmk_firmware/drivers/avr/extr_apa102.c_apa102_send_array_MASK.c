
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b; int g; int r; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

void FUNC_3(uint8_t *VAR_0, uint16_t VAR_1) {
    FUNC_2();
    while (VAR_1--) {
        FUNC_1(0xFF000000 | (VAR_0->b << 16) | (VAR_0->g << 8) | VAR_0->r);
        VAR_0++;
    }
    FUNC_0(VAR_1);
}
