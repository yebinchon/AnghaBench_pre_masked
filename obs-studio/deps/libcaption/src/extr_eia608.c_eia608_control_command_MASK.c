
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int eia608_control_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;

uint16_t FUNC_1(eia608_control_t VAR_1, int VAR_2)
{
    uint16_t VAR_3 = (VAR_2 & 0x01) ? 0x0800 : 0x0000;
    uint16_t VAR_4 = (VAR_2 & 0x02) ? 0x0100 : 0x0000;

    if (VAR_0 == (eia608_control_t)(VAR_1 & 0xFFC0)) {
        return (eia608_control_t)FUNC_0(VAR_1 | VAR_3);
    } else {
        return (eia608_control_t)FUNC_0(VAR_1 | VAR_3 | VAR_4);
    }
}
