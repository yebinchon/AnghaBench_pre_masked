
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, char *VAR_1) {
    int VAR_2 = 0x2800 + VAR_0;



    VAR_1[0] = 0xE0 | (VAR_2 >> 12);
    VAR_1[1] = 0x80 | ((VAR_2 >> 6) & 0x3F);
    VAR_1[2] = 0x80 | (VAR_2 & 0x3F);
}
