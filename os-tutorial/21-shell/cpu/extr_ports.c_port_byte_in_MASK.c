
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



u8 FUNC_0 (u16 VAR_0) {
    u8 VAR_1;
    __asm__("in %%dx, %%al" : "=a" (VAR_1) : "d" (VAR_0));
    return VAR_1;
}
