
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t off_t ;



void FUNC_0(unsigned char *VAR_0, int VAR_1) {
    off_t VAR_2 = VAR_1/8;
    int VAR_3 = VAR_1&7;
    VAR_0[VAR_2] |= 1<<VAR_3;
}
