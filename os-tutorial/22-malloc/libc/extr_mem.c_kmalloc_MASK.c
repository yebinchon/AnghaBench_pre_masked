
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

u32 FUNC_0(u32 VAR_1, int VAR_2, u32 *VAR_3) {

    if (VAR_2 == 1 && (VAR_0 & 0xFFFFF000)) {
        VAR_0 &= 0xFFFFF000;
        VAR_0 += 0x1000;
    }

    if (VAR_3) *VAR_3 = VAR_0;

    u32 VAR_4 = VAR_0;
    VAR_0 += VAR_1;
    return VAR_4;
}
