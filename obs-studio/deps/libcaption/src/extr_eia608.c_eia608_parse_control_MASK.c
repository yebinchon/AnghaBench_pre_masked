
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int eia608_control_t ;



eia608_control_t FUNC_0(uint16_t VAR_0, int* VAR_1)
{
    if (0x0200 & VAR_0) {
        (*VAR_1) = (VAR_0 & 0x0800 ? 0x01 : 0x00);
        return (eia608_control_t)(0x177F & VAR_0);
    } else {
        (*VAR_1) = (VAR_0 & 0x0800 ? 0x01 : 0x00) | (VAR_0 & 0x0100 ? 0x02 : 0x00);
        return (eia608_control_t)(0x167F & VAR_0);
    }
}
