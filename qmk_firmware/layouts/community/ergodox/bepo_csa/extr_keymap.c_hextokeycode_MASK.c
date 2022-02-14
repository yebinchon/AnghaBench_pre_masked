
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

uint16_t FUNC_0(int VAR_3) {
    if (VAR_3 == 0x0) {
        return VAR_1;
    } else if (VAR_3 < 0xA) {
        return VAR_2 + (VAR_3 - 0x1);
    } else {
        return VAR_0 + (VAR_3 - 0xA);
    }
}
