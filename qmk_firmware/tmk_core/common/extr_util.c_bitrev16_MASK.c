
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;

uint16_t FUNC_1(uint16_t VAR_0) {
    VAR_0 = FUNC_0(VAR_0 & 0x00ff) << 8 | FUNC_0((VAR_0 & 0xff00) >> 8);
    return VAR_0;
}
